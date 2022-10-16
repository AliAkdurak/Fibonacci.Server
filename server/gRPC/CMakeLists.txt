# Source https://github.com/grpc/grpc/tree/master/src/cpp#to-start-using-grpc-c
FetchContent_Declare(
		gRPC
		GIT_REPOSITORY https://github.com/grpc/grpc
		GIT_TAG        v1.50.0  # e.g v1.28.0
)

FetchContent_MakeAvailable(gRPC)

# They didn't docment this well but their examples for fetch content also requires some pre setup.
# Source https://github.com/grpc/grpc/blob/master/examples/cpp/cmake/common.cmake
# Since FetchContent uses add_subdirectory under the hood, we can use
# the grpc targets directly from this build.
set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION grpc++_reflection)
set(_PROTOBUF_PROTOC $<TARGET_FILE:protoc>)
set(_GRPC_GRPCPP grpc++)
if(CMAKE_CROSSCOMPILING)
	find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)
else()
	set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:grpc_cpp_plugin>)
endif()

# Source https://github.com/grpc/grpc/blob/master/examples/cpp/helloworld/CMakeLists.txt
get_filename_component(fibonacci_server_proto "protos/fibonacci.calculator.proto" ABSOLUTE)
get_filename_component(fibonacci_server_proto_path "${fibonacci_server_proto}" PATH)

# Generated sources
set(fibonacci_server_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.calculator.pb.cc")
set(fibonacci_server_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.calculator.pb.h")
set(fibonacci_server_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.calculator.grpc.pb.cc")
set(fibonacci_server_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.calculator.grpc.pb.h")

add_custom_command(
		OUTPUT "${fibonacci_server_proto_srcs}" "${fibonacci_server_proto_hdrs}" "${fibonacci_server_grpc_srcs}" "${fibonacci_server_grpc_hdrs}"
		COMMAND ${_PROTOBUF_PROTOC}
		ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
		--cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
		-I "${fibonacci_server_proto_path}"
		--plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
		"${fibonacci_server_proto}"
		DEPENDS "${fibonacci_server_proto}")

message(STATUS "Protobuf Generated Include:${CMAKE_CURRENT_BINARY_DIR}")

# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# Because I made each domain as a separate library header file includes gets a little bit hard for generated so
# I am gonna configure cmake to copy files to generated folder.
configure_file(${fibonacci_server_grpc_hdrs} ${CMAKE_CURRENT_SOURCE_DIR}/generated/ COPYONLY)
configure_file(${fibonacci_server_proto_hdrs} ${CMAKE_CURRENT_SOURCE_DIR}/generated/ COPYONLY)

# END OF GRPC/PROTOBUF STUFF

# Creating library
add_library(fibonacci.server.grpc STATIC
			gRPCServer.cpp
			${fibonacci_server_grpc_srcs}
			${fibonacci_server_grpc_hdrs}
			${fibonacci_server_proto_srcs}
			${fibonacci_server_proto_hdrs})

target_link_libraries(fibonacci.server.grpc grpc++)

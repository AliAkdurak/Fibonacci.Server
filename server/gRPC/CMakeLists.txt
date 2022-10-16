# Source https://github.com/grpc/grpc/tree/master/src/cpp#to-start-using-grpc-c
FetchContent_Declare(
		gRPC
		GIT_REPOSITORY https://github.com/grpc/grpc
		GIT_TAG        v1.50.0  # e.g v1.28.0
)

set(FETCHCONTENT_QUIET OFF)

FetchContent_MakeAvailable(gRPC)

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
get_filename_component(fibonacci_server_proto "protos/fibonacci.server.proto" ABSOLUTE)
get_filename_component(fibonacci_server_proto_path "${fibonacci_server_proto}" PATH)


# Generated sources
set(fibonacci_server_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.server.pb.cc")
set(fibonacci_server_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.server.pb.h")
set(fibonacci_server_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.server.grpc.pb.cc")
set(fibonacci_server_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/fibonacci.server.grpc.pb.h")

add_custom_command(
		OUTPUT "${fibonacci_server_proto_srcs}" "${fibonacci_server_proto_hdrs}" "${fibonacci_server_grpc_srcs}" "${fibonacci_server_grpc_hdrs}"
		COMMAND ${_PROTOBUF_PROTOC}
		ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
		--cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
		-I "${fibonacci_server_proto_path}"
		--plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
		"${fibonacci_server_proto}"
		DEPENDS "${fibonacci_server_proto}")



# Include generated *.pb.h files
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# Creating library
add_library(fibonacci.server.grpc OBJECT
			gRpcServer.cpp
			${fibonacci_server_grpc_srcs}
			${fibonacci_server_grpc_hdrs}
			${fibonacci_server_proto_srcs}
			${fibonacci_server_proto_hdrs})

target_link_libraries(Fibonacci_Service libprotobuf)
target_link_libraries(Fibonacci_Service grpc)
target_link_libraries(Fibonacci_Service grpc++)

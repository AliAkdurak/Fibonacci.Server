cmake_minimum_required(VERSION 3.23)
project(Fibonacci_Service)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

#https://github.com/grpc/grpc/tree/master/src/cpp#to-start-using-grpc-c
FetchContent_Declare(
		gRPC
		GIT_REPOSITORY https://github.com/grpc/grpc
		GIT_TAG        v1.50.0  # e.g v1.28.0
)

set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(gRPC)

add_executable(Fibonacci_Service main.cpp)

add_subdirectory(service)
add_subdirectory(engine)
add_subdirectory(monitor)
add_subdirectory(server)

target_link_libraries(Fibonacci_Service grpc++)
target_link_libraries(Fibonacci_Service fibonacci.service)
target_link_libraries(Fibonacci_Service fibonacci.service.concrete)
target_link_libraries(Fibonacci_Service fibonacci.engine)
target_link_libraries(Fibonacci_Service fibonacci.engine.concrete)
target_link_libraries(Fibonacci_Service fibonacci.monitor)
target_link_libraries(Fibonacci_Service fibonacci.monitor.concrete)
target_link_libraries(Fibonacci_Service fibonacci.server)
target_link_libraries(Fibonacci_Service fibonacci.server.concrete)

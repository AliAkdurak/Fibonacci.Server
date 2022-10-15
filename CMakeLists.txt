cmake_minimum_required(VERSION 3.23)
project(Fibonacci_Server)

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

add_executable(Fibonacci_Server main.cpp
			   service/FibonacciServiceAbstractFactory.cpp
			   service/FibonacciServiceAbstractFactory.hpp)

target_link_libraries(Fibonacci_Server grpc++)

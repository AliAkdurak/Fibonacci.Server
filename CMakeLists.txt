cmake_minimum_required(VERSION 3.23)
project(Fibonacci_Service)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

set(FETCHCONTENT_QUIET OFF)

FetchContent_Declare(
		Boost
		PREFIX external_dependencies/boost
		GIT_REPOSITORY https://github.com/boostorg/boost.git
		GIT_SUBMODULES libs/thread libs/io libs/utility
)

FetchContent_GetProperties(Boost)
FetchContent_Populate(Boost)
FetchContent_MakeAvailable(Boost)

#Main Fibonacci service structure
add_executable(Fibonacci_Service FibonacciServerApp.cpp)

add_subdirectory(engine)
add_subdirectory(monitor)
add_subdirectory(server)
add_subdirectory(service)

target_link_libraries(Fibonacci_Service fibonacci.engine)
target_link_libraries(Fibonacci_Service fibonacci.engine.concrete)

target_link_libraries(Fibonacci_Service fibonacci.monitor)
target_link_libraries(Fibonacci_Service fibonacci.monitor.concrete)

target_link_libraries(Fibonacci_Service fibonacci.server)

target_link_libraries(Fibonacci_Service fibonacci.service)
target_link_libraries(Fibonacci_Service fibonacci.service.concrete)

#Fibonacci GRPC client for testing
add_executable(Fibonacci_GRPC_Client FibonacciGRPCClient.cpp)
cmake_minimum_required(VERSION 3.23)
project(Fibonacci_Service)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

set(FETCHCONTENT_QUIET OFF)

FetchContent_Declare(
		Boost
		GIT_REPOSITORY https://github.com/boostorg/boost.git
		GIT_SUBMODULES
		"libs/
		 tools/cmake"
)

FetchContent_MakeAvailable(Boost)

add_subdirectory(engine)
add_subdirectory(monitor)
add_subdirectory(server)
add_subdirectory(service)

#Main Fibonacci service structure
add_executable(Fibonacci_Service FibonacciServiceApp.cpp)

target_link_libraries(Fibonacci_Service fibonacci.engine)
target_link_libraries(Fibonacci_Service fibonacci.engine.concrete)
target_link_libraries(Fibonacci_Service fibonacci.engine.store)

target_link_libraries(Fibonacci_Service fibonacci.monitor)
target_link_libraries(Fibonacci_Service fibonacci.monitor.concrete)

target_link_libraries(Fibonacci_Service fibonacci.server)

target_link_libraries(Fibonacci_Service fibonacci.service)
target_link_libraries(Fibonacci_Service fibonacci.service.concrete)

target_link_libraries(Fibonacci_Service boost_thread)
target_link_libraries(Fibonacci_Service boost_asio)

#Fibonacci GRPC client for testing
add_executable(Fibonacci_GRPC_Client client/FibonacciGRPCClient.cpp)

target_link_libraries(Fibonacci_GRPC_Client fibonacci.server.grpc)
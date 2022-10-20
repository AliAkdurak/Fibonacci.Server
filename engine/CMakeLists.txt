add_library(fibonacci.engine INTERFACE
			AbstractFibonacciEngine.cpp)

add_subdirectory(concrete)
add_subdirectory(store)
add_subdirectory(store/concrete)
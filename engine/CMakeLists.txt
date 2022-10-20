add_library(fibonacci.engine OBJECT
			AbstractFibonacciEngine.cpp)

target_link_libraries(fibonacci.engine boost_multiprecision)

add_subdirectory(concrete)
add_subdirectory(store)

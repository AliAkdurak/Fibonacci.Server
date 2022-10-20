add_library(fibonacci.engine.concrete OBJECT
			ThreadPoolFibonacciEngine.cpp
			LinearFibonacciEngine.cpp)

target_link_libraries(fibonacci.engine.concrete fibonacci.engine)
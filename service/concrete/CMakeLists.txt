add_library(fibonacci.service.concrete OBJECT
			SimpleFibonacciService.cpp)

add_dependencies(fibonacci.service.concrete fibonacci.server.grpc)

target_link_libraries(fibonacci.service.concrete fibonacci.server.grpc)
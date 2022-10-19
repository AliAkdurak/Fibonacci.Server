//
// Created by ali on 16.10.2022.
//

#include "LinearFibonacciEngine.hpp"

namespace Fibonacci::Engine {

void LinearFibonacciEngine::StartEngine() {
	//There is nothing to do here which kind a violates SOLID's Interface segregation but I don't wanna make another interface
	//for non threaded fibonacci engines
}

int64_t LinearFibonacciEngine::HandleCalculationQuery(int fibonacciNumber) {
	//linear time :)
	int64_t result = 0;
	int64_t currentAdditive = 1;
	int64_t prevAdditive = 0;

	for(int i = 0; i < fibonacciNumber;i++){
		result = currentAdditive + prevAdditive;
		prevAdditive = currentAdditive;
		currentAdditive = result;
	}

	return result;
}

}
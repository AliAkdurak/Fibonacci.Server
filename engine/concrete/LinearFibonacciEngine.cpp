//
// Created by ali on 16.10.2022.
//
#include "LinearFibonacciEngine.hpp"

using namespace boost::multiprecision;

namespace Fibonacci::Engine {

//Shared pointers should be copied(pass by value) normally for constructor case we can pass by ref for injecting
LinearFibonacciEngine::LinearFibonacciEngine(const shared_ptr<IFiboQueryHistoryStore> &historyStore,
											 const shared_ptr<IFiboQueryStatisticsStore> &statisticsStore) : AbstractFibonacciEngine(historyStore,
																																	 statisticsStore) {

}

void LinearFibonacciEngine::StartEngine() {
	//There is nothing to do here which kind a violates SOLID's Interface segregation but I don't wanna make another interface
	//for non threaded fibonacci engines
}

shared_ptr<CalculationResult> LinearFibonacciEngine::ProcessCalculationQuery(int fibonacciNumber) {
	//linear time :)
	cpp_int result = 0;
	cpp_int currentAdditive = 1;
	cpp_int prevAdditive = 0;

	for (int i = 0; i <= fibonacciNumber; i++) {
		if (i <= 1) {
			result = i;
		} else {
			result = prevAdditive + currentAdditive;
			prevAdditive = currentAdditive;
			currentAdditive = result;
		}
	}

	return make_shared<CalculationResult>(result);
}

}
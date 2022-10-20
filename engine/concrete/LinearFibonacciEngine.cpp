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
	optional<shared_ptr<CalculationResult>> closestCalculationResult = this->historyStore->QueryClosestCalculation(fibonacciNumber);

	cpp_int result = 0, prevAdditive = 0, currentAdditive = 1;
	int i = 2, calculateTimes = fibonacciNumber;

	if (fibonacciNumber < 2)
		return make_shared<CalculationResult>(cpp_int(0), cpp_int(fibonacciNumber));

	if (closestCalculationResult.has_value()) {
		cout << "Calculation cheated with closest previous query: " << closestCalculationResult.value()->getQuery() << endl;
		prevAdditive = closestCalculationResult.value()->getPrevFibonacciResult();
		currentAdditive = closestCalculationResult.value()->getFibonacciResult();
		calculateTimes = fibonacciNumber - closestCalculationResult.value()->getQuery() - 1;
		i = 0;
		//cout << "Prev: " << prevAdditive << " Current: " << currentAdditive << " Times: " << calculateTimes << endl;
	}

	for (; i <= calculateTimes; i++) {
		result = prevAdditive + currentAdditive;
		prevAdditive = currentAdditive;
		currentAdditive = result;
	}

	return make_shared<CalculationResult>(prevAdditive, result);
}

}
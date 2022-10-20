//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_CALCULATIONRESULT_HPP
#define FIBONACCI_SERVICE_CALCULATIONRESULT_HPP

#include <iostream>
#include <cstdint>

using namespace std;

namespace Fibonacci::Engine {

class CalculationResult {
public:
	uint64_t getFibonacciResult() const {
		return fibonacciResult;
	}

	void setFibonacciResult(uint64_t fibonacciResult) {
		CalculationResult::fibonacciResult = fibonacciResult;
	}

	int getCount() const {
		return count;
	}

	void setCount(int count) {
		CalculationResult::count = count;
	}

private:
	uint64_t fibonacciResult = 0;
	int count = 0;
};

}

#endif //FIBONACCI_SERVICE_CALCULATIONRESULT_HPP

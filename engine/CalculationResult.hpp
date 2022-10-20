//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_CALCULATIONRESULT_HPP
#define FIBONACCI_SERVICE_CALCULATIONRESULT_HPP

#include <iostream>
#include <cstdint>

#include <boost/multiprecision/cpp_int.hpp>
#include <utility>

using namespace std;
using namespace boost::multiprecision;

namespace Fibonacci::Engine {

class CalculationResult {
public:

	explicit CalculationResult(const string &calculationResultString) {
		stringstream ss(calculationResultString);

		ss >> this->fibonacciResult;
	}

	CalculationResult(const string &calculationResultString, int count) : CalculationResult(calculationResultString) {
		this->count = count;
	}

	explicit CalculationResult(const cpp_int &calculationResult) {
		cout << "Constructing new calculation result with:" << calculationResult << endl;
		this->fibonacciResult = calculationResult;
	}

	CalculationResult(const cpp_int &calculationResult, int count) : CalculationResult(calculationResult) {
		this->count = count;
	}

	cpp_int getFibonacciResult() const {
		return fibonacciResult;
	}

	void setFibonacciResult(cpp_int value) {
		fibonacciResult = value;
	}

	int getCount() const {
		return count;
	}

	void setCount(int value) {
		count = value;
	}

private:
	cpp_int fibonacciResult = 0;
	int count = 0;
};

}

#endif //FIBONACCI_SERVICE_CALCULATIONRESULT_HPP

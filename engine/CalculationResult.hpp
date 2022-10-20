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

	explicit CalculationResult(const string &calculationResultString) : fibonacciResult(calculationResultString) {

	}

	CalculationResult(const string &calculationResultString, int count) : CalculationResult(calculationResultString) {
		this->count = count;
	}

	explicit CalculationResult(cpp_int calculationResult)
			: fibonacciResult(std::move(calculationResult)) {
	}

	CalculationResult(cpp_int prevFibonacciResult, cpp_int calculationResult)
			: prevFibonacciResult(std::move(prevFibonacciResult)), fibonacciResult(std::move(calculationResult)) {
	}


	CalculationResult(const cpp_int &calculationResult, int count) : CalculationResult(calculationResult) {
		this->count = count;
	}

	CalculationResult(int query, cpp_int prevFibonacciResult, cpp_int fibonacciResult, int count)
			: query(query), prevFibonacciResult(std::move(prevFibonacciResult)), fibonacciResult(std::move(fibonacciResult)), count(count) {

	}

	CalculationResult(int query, const string &prevFibonacciResult, const string &fibonacciResult, int count)
			: query(query), prevFibonacciResult(prevFibonacciResult), fibonacciResult(fibonacciResult), count(count) {

	}

	int getQuery() const {
		return query;
	}

	const cpp_int &getPrevFibonacciResult() const {
		return prevFibonacciResult;
	}

	const cpp_int &getFibonacciResult() const {
		return fibonacciResult;
	}

	int getCount() const {
		return count;
	}

private:
	const int query = 0;
	cpp_int fibonacciResult;
	cpp_int prevFibonacciResult = -1;
	int count = 1;
};

}

#endif //FIBONACCI_SERVICE_CALCULATIONRESULT_HPP

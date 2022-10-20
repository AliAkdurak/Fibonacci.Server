//
// Created by ali on 16.10.2022.
//

#ifndef FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP
#define FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP

#include <iostream>
#include <memory>

#include <boost/multiprecision/cpp_int.hpp>

#include "../AbstractFibonacciEngine.hpp"

using namespace std;

namespace Fibonacci::Engine {

class LinearFibonacciEngine : public AbstractFibonacciEngine {
public:
	LinearFibonacciEngine(const shared_ptr<IFiboQueryHistoryStore> &historyStore, const shared_ptr<IFiboQueryStatisticsStore> &statisticsStore);

	shared_ptr<CalculationResult> ProcessCalculationQuery(int fibonacciNumber) override;
public:
	void StartEngine() override;
	shared_ptr<CalculationResult> test;
};

}


#endif //FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP

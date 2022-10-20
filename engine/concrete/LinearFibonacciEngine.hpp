//
// Created by ali on 16.10.2022.
//

#ifndef FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP
#define FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP

#include <iostream> // For std::cout
#include <memory> // For std::shared_ptr, std::make_shared

#include "../IFibonacciEngine.hpp"

using namespace std;

namespace Fibonacci::Engine {

class LinearFibonacciEngine : public IFibonacciEngine {
public:
	shared_ptr<CalculationResult> HandleCalculationQuery(int fibonacciNumber) override;
public:
	void StartEngine() override;

};

}


#endif //FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP

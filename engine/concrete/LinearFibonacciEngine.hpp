//
// Created by ali on 16.10.2022.
//

#ifndef FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP
#define FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP

#include "../IFibonacciEngine.hpp"

namespace Fibonacci::Engine {

class LinearFibonacciEngine : public IFibonacciEngine {
public:
	int64_t HandleCalculationQuery(int fibonacciNumber) override;
public:
	void StartEngine() override;

};

}


#endif //FIBONACCI_SERVICE_LINEARFIBONACCIENGINE_HPP

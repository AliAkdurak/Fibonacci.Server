//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_IFIBONACCIENGINE_HPP
#define FIBONACCI_SERVER_IFIBONACCIENGINE_HPP

#include <vector>

#include "../server/IFibonacciCalculationQueryListener.hpp"
#include "IFibonacciEngineMonitoringSource.hpp"

using namespace std;
using namespace Fibonacci::Monitor;
using namespace Fibonacci::Server;

namespace Fibonacci::Engine {

class IFibonacciEngine : public IFibonacciCalculationQueryListener, public IFibonacciEngineMonitoringSource {

public:
	virtual void StartEngine() = 0;
};

}

#endif //FIBONACCI_SERVER_IFIBONACCIENGINE_HPP

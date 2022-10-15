//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_ABSTRACTFIBONACCISERVICEBUILDER_HPP
#define FIBONACCI_SERVER_ABSTRACTFIBONACCISERVICEBUILDER_HPP

#include <memory>

#include "../server/IFibonacciServer.hpp"
#include "../engine/IFibonacciEngine.hpp"
#include "../monitor/IFibonacciEngineMonitor.hpp"

using namespace Fibonacci::Engine;
using namespace Fibonacci::Monitor;
using namespace Fibonacci::Server;

using namespace std;

namespace Fibonacci::Service {

class AbstractFibonacciServiceBuilder {

public:
	virtual ~AbstractFibonacciServiceBuilder() = default;

	///Build the service according to concrete implementation.
	virtual void BuildFibonacciService();
	virtual void ExecuteServiceStack();

	//TODO Read about no discard I understand what it does as in it gives a warning if someone calls this function and doesn't used returned variable. But I dont understand why clang complains and wants me to add it.
	[[nodiscard]] IFibonacciServer *getFiboServer();
	[[nodiscard]] IFibonacciEngine *getFiboEngine();
	[[nodiscard]] IFibonacciEngineMonitor *getFiboEngineMonitor();

protected:
	//TODO Maybe make these optional later for creation from json and error handling.
	virtual IFibonacciServer *BuildFibonacciServer() = 0;
	virtual IFibonacciEngine *BuildFibonacciEngine() = 0;
	virtual IFibonacciEngineMonitor *BuildFibonacciEngineMonitor() = 0;

private:
	IFibonacciServer *fiboServer {};
	IFibonacciEngine *fiboEngine {};
	IFibonacciEngineMonitor *fiboEngineMonitor {};

};

} // Server

#endif //FIBONACCI_SERVER_ABSTRACTFIBONACCISERVICEBUILDER_HPP

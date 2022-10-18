//
// Created by ali on 15.10.2022.
//

#include "SimpleFibonacciService.hpp"

using namespace Fibonacci::Engine;
using namespace Fibonacci::Server::gRPC;

namespace Fibonacci::Service {

IFibonacciEngine *SimpleFibonacciService::BuildFibonacciEngine() {
	return new LinearFibonacciEngine();
}

vector<IFibonacciServer *> *SimpleFibonacciService::BuildFibonacciServers() {
	auto result = new vector<IFibonacciServer *>();

	result->push_back(new gRPCServer());

	return result;
}

IFibonacciEngineMonitor *SimpleFibonacciService::BuildFibonacciEngineMonitor() {
	auto result = new StopwatchMonitor();

	return result;
}

}
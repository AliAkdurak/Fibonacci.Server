//
// Created by ali on 15.10.2022.
//

#include "SimpleFibonacciService.hpp"

using namespace Fibonacci::Server::gRPC;

namespace Fibonacci::Service {

IFibonacciEngine *SimpleFibonacciService::BuildFibonacciEngine() {
	return new Fibonacci::Engine::ThreadPoolFibonacciEngine();
}

vector<IFibonacciServer *> *SimpleFibonacciService::BuildFibonacciServers() {
	auto result = new vector<IFibonacciServer *>();

	return result;
}

IFibonacciEngineMonitor *SimpleFibonacciService::BuildFibonacciEngineMonitor() {
	auto result = new StopwatchMonitor();

	return result;
}

}
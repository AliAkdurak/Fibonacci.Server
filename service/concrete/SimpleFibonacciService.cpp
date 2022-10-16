//
// Created by ali on 15.10.2022.
//

#include "SimpleFibonacciService.hpp"

using namespace Fibonacci::Server::gRPC;

namespace Fibonacci::Service {

IFibonacciServer *SimpleFibonacciService::BuildFibonacciServer() {
	return new gRPCServer();
}

IFibonacciEngine *SimpleFibonacciService::BuildFibonacciEngine() {
	return new Fibonacci::Engine::ThreadPoolFibonacciEngine();
}

IFibonacciEngineMonitor *SimpleFibonacciService::BuildFibonacciEngineMonitor() {
	return new Fibonacci::Monitor::StopwatchMonitor();
}

}
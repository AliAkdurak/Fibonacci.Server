//
// Created by ali on 15.10.2022.
//

#include "SimpleFibonacciService.hpp"

namespace Fibonacci::Service {

SimpleFibonacciService::SimpleFibonacciService() = default;

IFibonacciServer *SimpleFibonacciService::BuildFibonacciServer() {
	return new Fibonacci::Server::gRPCServer();
}

IFibonacciEngine *SimpleFibonacciService::BuildFibonacciEngine() {
	return nullptr;
}

IFibonacciEngineMonitor *SimpleFibonacciService::BuildFibonacciEngineMonitor() {
	return nullptr;
}

}
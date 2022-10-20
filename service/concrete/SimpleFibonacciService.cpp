//
// Created by ali on 15.10.2022.
//

#include "SimpleFibonacciService.hpp"

using namespace Fibonacci::Engine;
using namespace Fibonacci::Engine::Store;
using namespace Fibonacci::Server::gRPC;


namespace Fibonacci::Service {

AbstractFibonacciEngine *SimpleFibonacciService::BuildFibonacciEngine() {
	shared_ptr<IFiboQueryHistoryStore> historyStore = make_shared<SimpleHistoryStore>();
	shared_ptr<IFiboQueryStatisticsStore> statisticsStore = make_shared<SimpleStatisticsStore>();

	AbstractFibonacciEngine *newEngine = new LinearFibonacciEngine(historyStore, statisticsStore);

	return newEngine;
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
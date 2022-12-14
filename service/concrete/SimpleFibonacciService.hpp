//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP
#define FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP

#include "../AbstractFibonacciServiceBuilder.hpp"

#include "../../server/gRPC/gRPCServer.hpp"
#include "../../engine/concrete/LinearFibonacciEngine.hpp"
#include "../../engine/concrete/ThreadPoolFibonacciEngine.hpp"
#include "../../engine/store/concrete/SimpleHistoryStore.hpp"
#include "../../engine/store/concrete/SimpleStatisticsStore.hpp"
#include "../../monitor/concrete/StopwatchMonitor.hpp"

using namespace std;

namespace Fibonacci::Service {

class SimpleFibonacciService : public AbstractFibonacciServiceBuilder {
public:
	SimpleFibonacciService() = default;

protected:
	vector<IFibonacciServer *> *BuildFibonacciServers() override;
	IFibonacciEngineMonitor *BuildFibonacciEngineMonitor() override;
	AbstractFibonacciEngine *BuildFibonacciEngine() override;
};

}//Fibonacci::Service

#endif //FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP

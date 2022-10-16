//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP
#define FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP

#include "../AbstractFibonacciServiceBuilder.hpp"

#include "../../server/gRPC/gRPCServer.hpp"
#include "../../engine/concrete/ThreadPoolFibonacciEngine.hpp"
#include "../../monitor/concrete/StopwatchMonitor.hpp"

using namespace std;

namespace Fibonacci::Service {

class SimpleFibonacciService : public AbstractFibonacciServiceBuilder {
public:
	SimpleFibonacciService() = default;

protected:
	IFibonacciServer *BuildFibonacciServer() override;
	IFibonacciEngine *BuildFibonacciEngine() override;
	IFibonacciEngineMonitor *BuildFibonacciEngineMonitor() override;
};

}//Fibonacci::Service

#endif //FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP

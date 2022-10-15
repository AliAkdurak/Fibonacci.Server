//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP
#define FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP

#include "../AbstractFibonacciServiceBuilder.hpp"
#include "../../server/concrete/gRpcServer.hpp"

using namespace std;

namespace Fibonacci::Service {

class SimpleFibonacciService : public AbstractFibonacciServiceBuilder {
public:
	SimpleFibonacciService();

protected:
	IFibonacciServer *BuildFibonacciServer() override;
	IFibonacciEngine *BuildFibonacciEngine() override;
	IFibonacciEngineMonitor *BuildFibonacciEngineMonitor() override;
};

}//Fibonacci::Service

#endif //FIBONACCI_SERVER_SIMPLEFIBONACCISERVICE_HPP

//
// Created by ali on 15.10.2022.
//

#include "AbstractFibonacciServiceBuilder.hpp"

namespace Fibonacci::Service {


void AbstractFibonacciServiceBuilder::BuildFibonacciService() {
	fiboEngine = BuildFibonacciEngine();
	fiboServer = BuildFibonacciServer();
	fiboEngineMonitor = BuildFibonacciEngineMonitor();
}

void AbstractFibonacciServiceBuilder::ExecuteServiceStack() {
	
	fiboServer->StartServing();
}

IFibonacciServer *AbstractFibonacciServiceBuilder::getFiboServer() {
	return fiboServer;
}

IFibonacciEngine *AbstractFibonacciServiceBuilder::getFiboEngine() {
	return fiboEngine;
}

IFibonacciEngineMonitor *AbstractFibonacciServiceBuilder::getFiboEngineMonitor() {
	return fiboEngineMonitor;
}


} // Server
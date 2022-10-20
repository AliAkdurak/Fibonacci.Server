//
// Created by ali on 15.10.2022.
//

#include "AbstractFibonacciServiceBuilder.hpp"

namespace Fibonacci::Service {


AbstractFibonacciServiceBuilder::AbstractFibonacciServiceBuilder() = default;

void AbstractFibonacciServiceBuilder::BuildServices() {
	fiboEngine = BuildFibonacciEngine();
	fiboServers = BuildFibonacciServers();
}

AbstractFibonacciEngine *AbstractFibonacciServiceBuilder::getFiboEngine() const {
	return fiboEngine;
}

vector<IFibonacciServer *> *AbstractFibonacciServiceBuilder::getFiboServers() const {
	return fiboServers;
}

IFibonacciEngineMonitor *AbstractFibonacciServiceBuilder::getFiboEngineMonitor() const {
	return fiboEngineMonitor;
}

} // Server
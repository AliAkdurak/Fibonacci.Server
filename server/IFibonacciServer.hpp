//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_IFIBONACCISERVER_HPP
#define FIBONACCI_SERVER_IFIBONACCISERVER_HPP

#include "../engine/AbstractFibonacciEngine.hpp"
#include "IFibonacciCalculationQuerySource.hpp"

using namespace Fibonacci::Engine;

namespace Fibonacci::Server {

class IFibonacciServer : public IFibonacciCalculationQuerySource {

public:
	virtual void StartServing() = 0;

	virtual void setEngine(AbstractFibonacciEngine *pEngine) {
		this->RegisterIFibonacciEngineListener(pEngine);
		fiboEngine = pEngine;
	};

protected:
	//Could be shared pointer but no reason because of lifetime of the servise equals the engine for now.
	AbstractFibonacciEngine *fiboEngine = nullptr;
};

} // Server

#endif //FIBONACCI_SERVER_IFIBONACCISERVER_HPP

//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_IFIBONACCIENGINE_HPP
#define FIBONACCI_SERVER_IFIBONACCIENGINE_HPP

#include <vector>

#include "../monitor/IFibonacciEngineListener.hpp"

using namespace std;
using namespace Fibonacci::Monitor;

namespace Fibonacci::Engine {

class IFibonacciEngine {

protected:
	vector<IFibonacciEngineListener *> engineListeners;

public:
	//Normally interfaces shouldn't allow any code but C++ allow multiple inheritance and this is one of the very rare chances this actually lowers code duplicity
	virtual void RegisterIFibonacciEngineListener(IFibonacciEngineListener *eventListener) {
		this->engineListeners.push_back(eventListener);
	}

	virtual void UnregisterIFibonacciEngineListener(IFibonacciEngineListener *eventListener) {
		using Iter = std::vector<IFibonacciEngineListener *>::iterator;
		Iter it;
		for (it = this->engineListeners.begin(); it != this->engineListeners.end(); ++it) {
			if (*it == eventListener) {
				this->engineListeners.erase(it);
				break;
			}
		}
	}

	virtual void StartEngine() = 0;
};

}

#endif //FIBONACCI_SERVER_IFIBONACCIENGINE_HPP

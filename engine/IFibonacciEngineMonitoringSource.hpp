//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_IFIBONACCIENGINEMONTIORSOURCE_HPP
#define FIBONACCI_SERVICE_IFIBONACCIENGINEMONTIORSOURCE_HPP

#include <vector>

#include "../monitor/IFibonacciEngineMonitoringListener.hpp"

using namespace std;
using namespace Fibonacci::Monitor;

namespace Fibonacci::Engine {

class IFibonacciEngineMonitoringSource {

protected:
	vector<IFibonacciEngineMonitoringListener *> engineListeners;

public:
	//Normally interfaces shouldn't allow any code but C++ allow multiple inheritance and this is one of the very rare chances this actually lowers code duplicity
	virtual void RegisterIFibonacciEngineListener(IFibonacciEngineMonitoringListener *eventListener) {
		this->engineListeners.push_back(eventListener);
	}

	virtual void UnregisterIFibonacciEngineListener(IFibonacciEngineMonitoringListener *eventListener) {
		using Iter = std::vector<IFibonacciEngineMonitoringListener *>::iterator;
		Iter it;
		for (it = this->engineListeners.begin(); it != this->engineListeners.end(); ++it) {
			if (*it == eventListener) {
				this->engineListeners.erase(it);
				break;
			}
		}
	}

};

}

#endif //FIBONACCI_SERVICE_IFIBONACCIENGINEMONTIORSOURCE_HPP

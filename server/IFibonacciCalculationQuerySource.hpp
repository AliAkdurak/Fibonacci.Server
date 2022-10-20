//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_ICALCULATIONQUERYSOURCE_HPP
#define FIBONACCI_SERVICE_ICALCULATIONQUERYSOURCE_HPP

#include <vector>

#include "IFibonacciCalculationQueryListener.hpp"

using namespace std;

namespace Fibonacci::Server {

class IFibonacciCalculationQuerySource {

protected:
	vector<IFibonacciCalculationQueryListener *> queryListeners;

public:
//Normally interfaces shouldn't allow any code but C++ allow multiple inheritance and this is one of the very rare chances this actually lowers code duplicity
	virtual void RegisterIFibonacciEngineListener(IFibonacciCalculationQueryListener *queryListener) {
		this->queryListeners.push_back(queryListener);
	}

	virtual void UnregisterIFibonacciEngineListener(IFibonacciCalculationQueryListener *queryListener) {
		using Iter = std::vector<IFibonacciCalculationQueryListener *>::iterator;
		Iter it;
		for (it = this->queryListeners.begin(); it != this->queryListeners.end(); ++it) {
			if (*it == queryListener) {
				this->queryListeners.erase(it);
				break;
			}
		}
	}

	shared_ptr<CalculationResult> FireCalculationQueryReceived(int pQuery) {
		shared_ptr<CalculationResult> result;

		//I am using standard observer observe template code but actually there is only going to be one listener.
		for (auto queryListener: queryListeners) {
			return queryListener->HandleCalculationQuery(pQuery);
		}

		return result;
	}

};

}

#endif //FIBONACCI_SERVICE_ICALCULATIONQUERYSOURCE_HPP

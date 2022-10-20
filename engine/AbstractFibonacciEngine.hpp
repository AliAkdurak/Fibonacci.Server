//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_IFIBONACCIENGINE_HPP
#define FIBONACCI_SERVER_IFIBONACCIENGINE_HPP

#include <vector>

#include "../server/IFibonacciCalculationQueryListener.hpp"
#include "IFibonacciEngineMonitoringSource.hpp"

#include "store/IFiboQueryHistoryStore.hpp"
#include "store/IFiboQueryStatisticsStore.hpp"

using namespace std;
using namespace Fibonacci::Monitor;
using namespace Fibonacci::Server;
using namespace Fibonacci::Engine::Store;

namespace Fibonacci::Engine {

class AbstractFibonacciEngine : public IFibonacciCalculationQueryListener, public IFibonacciEngineMonitoringSource {

public:
	AbstractFibonacciEngine(const shared_ptr<IFiboQueryHistoryStore> &historyStore, const shared_ptr<IFiboQueryStatisticsStore> &statisticsStore);

	virtual void StartEngine() = 0;
	shared_ptr<CalculationResult> HandleCalculationQuery(int fibonacciNumber) final;

protected:
	shared_ptr<IFiboQueryHistoryStore> historyStore;
	shared_ptr<IFiboQueryStatisticsStore> statisticsStore;

protected:
	virtual void PreProcessCalculationQuery(int number);
	virtual shared_ptr<CalculationResult> ProcessCalculationQuery(int fibonacciNumber) = 0;
	virtual void PostProcessCalculationQuery(int number);

};

}

#endif //FIBONACCI_SERVER_IFIBONACCIENGINE_HPP

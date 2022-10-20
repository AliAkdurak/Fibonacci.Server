//
// Created by ali on 16.10.2022.
//

#ifndef FIBONACCI_SERVICE_IFIBONACCIENGINEMONITORINGLISTENER_HPP
#define FIBONACCI_SERVICE_IFIBONACCIENGINEMONITORINGLISTENER_HPP

namespace Fibonacci::Monitor {

class IFibonacciEngineMonitoringListener {

public:
	virtual void HandleCalculationQueryReceivedEvent() = 0;
	virtual void HandleStartingCalculationEvent() = 0;
	virtual void HandleFinishedCalculationEvent() = 0;
	virtual void HandleRecoveredCalculationEvent() = 0;
	virtual void HandleCalculationQueryCompletedEvent() = 0;
};

}

#endif //FIBONACCI_SERVICE_IFIBONACCIENGINEMONITORINGLISTENER_HPP

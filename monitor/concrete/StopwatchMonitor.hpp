//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_STOPWATCHMONITOR_HPP
#define FIBONACCI_SERVER_STOPWATCHMONITOR_HPP

#include <iostream>
#include <boost/timer/timer.hpp>
#include <sstream>

#include "../IFibonacciEngineMonitor.hpp"

using namespace std;

namespace Fibonacci::Monitor {

class StopwatchMonitor : public IFibonacciEngineMonitor {
public:
	void HandleCalculationQueryReceivedEvent() override;
	void HandleStartingCalculationEvent() override;
	void HandleFinishedCalculationEvent() override;
	void HandleRecoveredCalculationEvent() override;
	void HandleCalculationQueryCompletedEvent() override;
private:
	stringstream simpleStopwatchMonitorOutputStream;
	boost::timer::auto_cpu_timer* wholeQueryAutoTimer;
	boost::timer::auto_cpu_timer* calculationAutoTimer;
};

} // Monitor

#endif //FIBONACCI_SERVER_STOPWATCHMONITOR_HPP

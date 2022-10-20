//
// Created by ali on 15.10.2022.
//

#include "StopwatchMonitor.hpp"

using namespace boost::timer;

namespace Fibonacci::Monitor {

void StopwatchMonitor::HandleCalculationQueryReceivedEvent() {
	wholeQueryAutoTimer = new auto_cpu_timer(simpleStopwatchMonitorOutputStream, "%t sec CPU, %w sec real");
}

void StopwatchMonitor::HandleStartingCalculationEvent() {
	calculationAutoTimer = new auto_cpu_timer(simpleStopwatchMonitorOutputStream, "|Calculation took:%t sec CPU, %w sec real");
}

void StopwatchMonitor::HandleFinishedCalculationEvent() {
	simpleStopwatchMonitorOutputStream << "Query calculated:";
}

void StopwatchMonitor::HandleRecoveredCalculationEvent() {
	simpleStopwatchMonitorOutputStream << "Query recovered:";
}

void StopwatchMonitor::HandleCalculationQueryCompletedEvent() {
	if (calculationAutoTimer != nullptr) {
		delete calculationAutoTimer;
		calculationAutoTimer = nullptr;
	}

	delete wholeQueryAutoTimer;

	simpleStopwatchMonitorOutputStream << endl;
	cout << simpleStopwatchMonitorOutputStream.str();
	simpleStopwatchMonitorOutputStream.clear();
	simpleStopwatchMonitorOutputStream.str(string());
}
} // Monitor
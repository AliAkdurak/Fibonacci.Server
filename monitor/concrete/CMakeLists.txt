add_library(fibonacci.monitor.concrete OBJECT
			StopwatchMonitor.cpp)

target_link_libraries(fibonacci.monitor.concrete boost_timer)
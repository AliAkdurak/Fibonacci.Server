//
// Created by ali on 16.10.2022.
//
#ifndef FIBONACCI_SERVICE_FIBONACCISERVICEAPP_HPP
#define FIBONACCI_SERVICE_FIBONACCISERVICEAPP_HPP

#include <iostream>
#include <memory>
#include <boost/thread.hpp>
#include <boost/asio.hpp>

#include "service/AbstractFibonacciServiceBuilder.hpp"
#include "service/concrete/SimpleFibonacciService.hpp"

using namespace std;
using namespace Fibonacci::Service;

class FibonacciServiceApp {

public:
	explicit FibonacciServiceApp(AbstractFibonacciServiceBuilder *serviceBuilder);

	void Start();
	///TODO Maybe return a reason or gracefull exit?
	void BlockUntilServiceDown();
protected:
	virtual void BuildServices();
	virtual void SetupServices();
	virtual void RunServices();
	void MonitorLoop();
private:
	unique_ptr<AbstractFibonacciServiceBuilder> serviceBuilder;

	//Actually could have been just a volatile bool ?
	boost::atomic<bool> continueMonitoring = true;
	//These all could be anonymous I am just playing around
	boost::thread *engineThread{};
	boost::thread *monitoringLoopThread{};
	boost::thread_group serverThreadGroup;

	boost::asio::io_service asio_service;
	boost::posix_time::seconds monitorInterval;
	boost::asio::deadline_timer monitorTimer;

private:
	vector<IFibonacciServer *> *fiboServers{};
	AbstractFibonacciEngine *fiboEngine{};
	IFibonacciEngineMonitor *fiboEngineMonitor{};
};

#endif //FIBONACCI_SERVICE_FIBONACCISERVICEAPP_HPP

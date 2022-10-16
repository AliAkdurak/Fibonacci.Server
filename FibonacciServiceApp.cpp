#include "FibonacciServiceApp.hpp"

using namespace std;
using namespace Fibonacci::Service;

int main() {
	auto *newApp = new FibonacciServiceApp(new SimpleFibonacciService());

	newApp->Start();

	return 0;
}

FibonacciServiceApp::FibonacciServiceApp(AbstractFibonacciServiceBuilder *serviceBuilder) : serviceBuilder(serviceBuilder),
																							monitorInterval(30), monitorTimer(asio_service, monitorInterval) {

}

void FibonacciServiceApp::Start() {
	cout << "Starting app" << endl;
	cout << "Building services" << endl;
	//PreBuild
	this->BuildServices();
	//PostBuild
	cout << "Setup services" << endl;
	//PreSetup
	this->SetupServices();
	//PostSetup
	cout << "Start services" << endl;
	//PreRun
	this->RunServices();
	//PostRun
	cout << "Monitor services" << endl;

	monitoringLoopThread = new boost::thread(&FibonacciServiceApp::MonitorLoop, this);
}

void FibonacciServiceApp::BlockUntilServiceDown(){
	monitoringLoopThread->join();
}

void FibonacciServiceApp::BuildServices() {
	serviceBuilder->BuildServices();
}

void FibonacciServiceApp::SetupServices() {
	//Think this as a microservice boilerplate, if somebody is going to log an event make the connection here
	//if somebody needs to communicate make that injection here. Constructor injection could also be made at build phase
	//More importantly this forces underlying elements to depend on each other through interfaces.
	//Of course this is a bit of an overkill for this requirements
	this->fiboEngine = serviceBuilder->getFiboEngine();
	this->fiboServers = serviceBuilder->getFiboServers();

	for (auto fiboServer: *fiboServers) {
		fiboServer->setEngine(fiboEngine);
	}

	this->fiboEngine->RegisterIFibonacciEngineObserver(fiboEngineMonitor);
}

void FibonacciServiceApp::RunServices() {


}

void FibonacciServiceApp::MonitorLoop() {
	cout << "Monitoring thread is up" << endl;

	while (continueMonitoring.value()) {
		//Read the other services threads condition?
		//Read heap usage ?
		//Get statistics for run times?
	}

	//Shutdown operations.
}
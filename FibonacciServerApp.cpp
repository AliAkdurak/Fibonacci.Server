#include <iostream>
#include <memory>

#include "service/AbstractFibonacciServiceBuilder.hpp"
#include "service/concrete/SimpleFibonacciService.hpp"

using namespace std;
using namespace Fibonacci::Service;

int main() {
	std::cout << "Building fibonacci service" << std::endl;

	unique_ptr<AbstractFibonacciServiceBuilder> serviceBuilder(new SimpleFibonacciService());

	serviceBuilder->BuildFibonacciService();

	std::cout << "Starting fibonacci service" << std::endl;

	//Executor/object owner and the builder can be seperated for better OOD but for now it will suffice.
	serviceBuilder->ExecuteServiceStack();

	return 0;
}

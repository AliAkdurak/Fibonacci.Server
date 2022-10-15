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

	serviceBuilder->ExecuteServiceStack();

	return 0;
}

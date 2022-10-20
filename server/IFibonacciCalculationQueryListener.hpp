//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_IFIBONACCICALCULATIONQUERYLISTENER_HPP
#define FIBONACCI_SERVICE_IFIBONACCICALCULATIONQUERYLISTENER_HPP

#include <cstdint>
#include <memory>

#include "../engine/CalculationResult.hpp"

using namespace std;
using namespace Fibonacci::Engine;

namespace Fibonacci::Server {

class IFibonacciCalculationQueryListener {

public:
	virtual shared_ptr<CalculationResult> HandleCalculationQuery(int fibonacciNumber) = 0;

};

}
#endif //FIBONACCI_SERVICE_IFIBONACCICALCULATIONQUERYLISTENER_HPP

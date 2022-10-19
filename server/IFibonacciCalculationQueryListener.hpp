//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_IFIBONACCICALCULATIONQUERYLISTENER_HPP
#define FIBONACCI_SERVICE_IFIBONACCICALCULATIONQUERYLISTENER_HPP

#include <cstdint>

namespace Fibonacci::Server {

class IFibonacciCalculationQueryListener {

public:
	virtual int64_t HandleCalculationQuery(int fibonacciNumber) = 0;

};

}
#endif //FIBONACCI_SERVICE_IFIBONACCICALCULATIONQUERYLISTENER_HPP

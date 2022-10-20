//
// Created by ali on 20.10.2022.
//

#ifndef FIBONACCI_SERVICE_IFIBOQUERYHISTORYSTORE_HPP
#define FIBONACCI_SERVICE_IFIBOQUERYHISTORYSTORE_HPP

#include <optional>
#include "../CalculationResult.hpp"

using namespace std;

namespace Fibonacci::Engine::Store {

class IFiboQueryHistoryStore {

public:
	virtual optional<shared_ptr<CalculationResult>> QueryPreviousCalculation(int fibonacciQuery) = 0;
	virtual void RecordCalculationResult(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) = 0;
};

}

#endif //FIBONACCI_SERVICE_IFIBOQUERYHISTORYSTORE_HPP

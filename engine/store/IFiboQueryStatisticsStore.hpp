//
// Created by ali on 19.10.2022.
//

#ifndef FIBONACCI_SERVICE_IFIBOQUERYSTATISTICHOLDER_HPP
#define FIBONACCI_SERVICE_IFIBOQUERYSTATISTICHOLDER_HPP

#include <memory>

#include "../CalculationResult.hpp"

using namespace std;
using namespace Fibonacci::Engine;

namespace Fibonacci::Engine::Store {

class IFiboQueryStatisticsStore {
public:
	virtual void RecordCalculationResult(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) = 0;
};

}

#endif //FIBONACCI_SERVICE_IFIBOQUERYSTATISTICHOLDER_HPP

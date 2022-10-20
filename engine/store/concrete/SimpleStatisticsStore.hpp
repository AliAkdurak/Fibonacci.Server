//
// Created by ali on 20.10.2022.
//

#ifndef FIBONACCI_SERVICE_SIMPLESTATISTICSSTORE_HPP
#define FIBONACCI_SERVICE_SIMPLESTATISTICSSTORE_HPP

#include <memory>

#include "../IFiboQueryStatisticsStore.hpp"
#include "../../CalculationResult.hpp"

using namespace std;

using namespace Fibonacci::Engine;

namespace Fibonacci::Engine::Store {

class SimpleStatisticsStore : public IFiboQueryStatisticsStore {
public:
	void RecordCalculationResult(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) override;
};

} // Fibonacci::Engine::Store

#endif //FIBONACCI_SERVICE_SIMPLESTATISTICSSTORE_HPP

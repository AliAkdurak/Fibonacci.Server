//
// Created by ali on 20.10.2022.
//

#ifndef FIBONACCI_SERVICE_SIMPLEHISTORYSTORE_HPP
#define FIBONACCI_SERVICE_SIMPLEHISTORYSTORE_HPP

#include <memory>
#include <optional>
#include <vector>

#include "../IFiboQueryHistoryStore.hpp"
#include "../HistoryStore.hpp"

using namespace std;
using namespace Fibonacci::Engine;

namespace Fibonacci::Engine ::Store {

class SimpleHistoryStore : public IFiboQueryHistoryStore {

public:
	optional<shared_ptr<CalculationResult>> QueryPreviousCalculation(int fibonacciQuery) override;
	void RecordCalculationResult(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) override;

private:
	vector<HistoryStore> histories;

};

} // Fibonacci::Engine::Store

#endif //FIBONACCI_SERVICE_SIMPLEHISTORYSTORE_HPP

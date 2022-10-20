//
// Created by ali on 20.10.2022.
//

#include "SimpleHistoryStore.hpp"

#include <memory>

using namespace std;
using namespace Fibonacci::Engine;

namespace Fibonacci::Engine::Store {

optional<shared_ptr<CalculationResult>> SimpleHistoryStore::QueryPreviousCalculation(int fibonacciQuery) {
	optional<shared_ptr<CalculationResult>> result;

	for (auto historyStore: histories) {
		if (historyStore.fibQuery == fibonacciQuery) {
			result = std::make_shared<CalculationResult>(historyStore.fiboResult, historyStore.count);
			break;
		}
	}

	return result;
}

void SimpleHistoryStore::RecordCalculationResult(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) {
	using Iter = std::vector<HistoryStore>::iterator;
	Iter it;
	bool isFound = false;
	for (it = this->histories.begin(); it != this->histories.end(); ++it) {
		if (it->fibQuery == fiboQueryNumber) {
			it->count = it->count++;
			isFound = true;
		}
	}

	if (!isFound) {
		HistoryStore newStore{
				.fibQuery = fiboQueryNumber,
				.fiboResult = calculationResult->getFibonacciResult().str()
		};
		//No sorting no organization plane old pushing it down.
		histories.push_back(newStore);
	}

}

} // Store
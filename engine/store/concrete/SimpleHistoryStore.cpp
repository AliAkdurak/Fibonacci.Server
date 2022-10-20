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

	for (const auto &historyStore: histories) {
		if (historyStore.fibQuery == fibonacciQuery) {
			result = std::make_shared<CalculationResult>(historyStore.fibQuery, historyStore.prevFiboResult, historyStore.fiboResult, historyStore.count);
			break;
		}
	}

	return result;
}

optional<shared_ptr<CalculationResult>> SimpleHistoryStore::QueryClosestCalculation(int fiboQuery) {
	optional<shared_ptr<CalculationResult>> result;
	int maxFiboQuery = 0;
	const HistoryStore *storePtr = nullptr;

	//Goes over this unsorted list it is not optimized. This is simple history store.
	for (const auto &historyStore: histories) {
		if ((historyStore.fibQuery < fiboQuery) && (historyStore.fibQuery > maxFiboQuery)) {
			maxFiboQuery = historyStore.fibQuery;
			storePtr = &historyStore;
		}
	}

	if (storePtr != nullptr)
		result = std::make_shared<CalculationResult>(storePtr->fibQuery, storePtr->prevFiboResult, storePtr->fiboResult, (storePtr->count) + 1);

	return result;
}

void SimpleHistoryStore::RecordCalculationResult(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) {
	using Iter = std::vector<HistoryStore>::iterator;
	Iter it;
	bool isFound = false;
	for (it = this->histories.begin(); it != this->histories.end(); ++it) {
		if (it->fibQuery == fiboQueryNumber) {
			it->count = it->count + 1;
			isFound = true;
		}
	}

	if (!isFound) {
		HistoryStore newStore{
				.fibQuery = fiboQueryNumber,
				.fiboResult = calculationResult->getFibonacciResult().str(),
				.prevFiboResult = calculationResult->getPrevFibonacciResult().str(),
				.count = calculationResult->getCount()
		};
		//No sorting no organization plane old pushing it down.
		histories.push_back(newStore);
	}

}

} // Store
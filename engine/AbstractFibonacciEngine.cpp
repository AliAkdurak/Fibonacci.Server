//
// Created by ali on 20.10.2022.
//
#include "AbstractFibonacciEngine.hpp"

namespace Fibonacci::Engine {

AbstractFibonacciEngine::AbstractFibonacciEngine(const shared_ptr<IFiboQueryHistoryStore> &historyStore,
												 const shared_ptr<IFiboQueryStatisticsStore> &statisticsStore) :
		historyStore(historyStore),
		statisticsStore(statisticsStore) {

}

shared_ptr<CalculationResult> AbstractFibonacciEngine::HandleCalculationQuery(int fiboQueryNumber) {
	FireCalculationQueryReceivedEvent();
	//Creating a template to control handle process
	shared_ptr<CalculationResult> calculationResult;
	//Get it from the store if you can
	optional<shared_ptr<CalculationResult>> preCalculationHistoryResult = PreProcessCalculationQuery(fiboQueryNumber);

	//Choose the result you want.
	if (!preCalculationHistoryResult.has_value()) {
		FireStartingCalculationEvent();
		calculationResult = ProcessCalculationQuery(fiboQueryNumber);
		FireFinishedCalculationEvent();
	} else {
		FireRecoveredCalculationEvent();
		calculationResult = preCalculationHistoryResult.value();
	}

	//Make the necessary call to statistics and history, maybe to monitoring events too.
	PostProcessCalculationQuery(fiboQueryNumber, calculationResult);

	FireCalculationQueryCompletedEvent();
	return calculationResult;
}

optional<shared_ptr<CalculationResult>> AbstractFibonacciEngine::PreProcessCalculationQuery(int fiboQueryNumber) {
	optional<shared_ptr<CalculationResult>> previousCalcResult = historyStore->QueryPreviousCalculation(fiboQueryNumber);

	return previousCalcResult;
}

void AbstractFibonacciEngine::PostProcessCalculationQuery(int fiboQueryNumber, shared_ptr<CalculationResult> calculationResult) {
	historyStore->RecordCalculationResult(fiboQueryNumber, calculationResult);
	statisticsStore->RecordCalculationResult(fiboQueryNumber, calculationResult);
}

}
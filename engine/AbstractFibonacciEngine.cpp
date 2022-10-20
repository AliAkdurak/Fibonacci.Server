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

shared_ptr<CalculationResult> AbstractFibonacciEngine::HandleCalculationQuery(int fibonacciNumber) {
	//Creating a template to control handle process
	
	PreProcessCalculationQuery(fibonacciNumber);
	shared_ptr<CalculationResult> result = ProcessCalculationQuery(fibonacciNumber);
	PostProcessCalculationQuery(fibonacciNumber);

	return result;
}

void AbstractFibonacciEngine::PreProcessCalculationQuery(int number) {

}

void AbstractFibonacciEngine::PostProcessCalculationQuery(int number) {

}

}
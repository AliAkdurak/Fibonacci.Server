//
// Created by ali on 20.10.2022.
//

#ifndef FIBONACCI_SERVICE_HISTORYSTORE_HPP
#define FIBONACCI_SERVICE_HISTORYSTORE_HPP

#include <string>

namespace Fibonacci::Engine::Store {

struct HistoryStore {
	int fibQuery = 0;
	string fiboResult;
	string prevFiboResult;
	int count = 0;
};

}

#endif //FIBONACCI_SERVICE_HISTORYSTORE_HPP

//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_IFIBONACCISERVER_HPP
#define FIBONACCI_SERVER_IFIBONACCISERVER_HPP

namespace Fibonacci::Server {

class IFibonacciServer {

public:
	virtual void StartServing() = 0;

};

} // Server

#endif //FIBONACCI_SERVER_IFIBONACCISERVER_HPP

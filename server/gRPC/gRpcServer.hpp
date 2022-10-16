//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_GRPCSERVER_HPP
#define FIBONACCI_SERVER_GRPCSERVER_HPP

#include "../IFibonacciServer.hpp"

namespace Fibonacci::Server::gRPC {

class gRPCServer : public IFibonacciServer {
public:
	void StartServing() override;
};

} // Fibonacci::Server

#endif //FIBONACCI_SERVER_GRPCSERVER_HPP

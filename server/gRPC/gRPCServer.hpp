//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_GRPCSERVER_HPP
#define FIBONACCI_SERVER_GRPCSERVER_HPP

#include "../IFibonacciServer.hpp"
#include "generated/fibonacci.calculator.grpc.pb.h"

using namespace grpc;

namespace Fibonacci::Server::gRPC {

class gRPCServer final : public IFibonacciServer, public FibonacciCalculator::Service {
public:
	///Never returns
	void StartServing() override;
	Status Calculate(ServerContext *context, const SimpleFibonacciQuery *request, SimpleFibonacciReply *response) override;
	Status CalculateReturnJsonString(::grpc::ServerContext *context, const ::SimpleFibonacciQuery *request, ::JsonFibonacciReply *response) override;
};

} // Fibonacci::Server

#endif //FIBONACCI_SERVER_GRPCSERVER_HPP

//
// Created by ali on 15.10.2022.
//

#ifndef FIBONACCI_SERVER_GRPCSERVER_HPP
#define FIBONACCI_SERVER_GRPCSERVER_HPP

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>

#include "../IFibonacciServer.hpp"
#include "generated/fibonacci.calculator.grpc.pb.h"

#include "../IFibonacciCalculationQuerySource.hpp"

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

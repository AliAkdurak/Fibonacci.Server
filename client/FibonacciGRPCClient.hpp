//
// Created by ali on 16.10.2022.
//

#ifndef FIBONACCI_SERVICE_FIBONACCIGRPCCLIENT_HPP
#define FIBONACCI_SERVICE_FIBONACCIGRPCCLIENT_HPP

#include <iostream>
#include <memory>
#include <grpcpp/grpcpp.h>

#include "../server/gRPC/generated/fibonacci.calculator.grpc.pb.h"
#include "../server/gRPC/generated/fibonacci.calculator.pb.h"

using namespace std;

class FibonacciGRPCClient {

public:
	explicit FibonacciGRPCClient(std::shared_ptr<grpc::Channel> channel)
			: clientStub(FibonacciCalculator::NewStub(channel)) {

	}

	// Assembles the client's payload, sends it and presents the response back
	// from the server.
	int64_t QueryFibonacciNumber(int fibonacciNumber);
	string QueryFibonacciNumberJson(int fibonacciNumber);

private:
	std::unique_ptr<FibonacciCalculator::Stub> clientStub;

};

#endif //FIBONACCI_SERVICE_FIBONACCIGRPCCLIENT_HPP

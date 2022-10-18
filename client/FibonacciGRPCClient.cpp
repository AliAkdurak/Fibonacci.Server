//
// Created by ali on 16.10.2022.
//
#include <iostream>
#include <memory>

#include "FibonacciGRPCClient.hpp"

using namespace std;

int main() {
	std::cout << "Fibonacci grpc client" << std::endl;

	auto client = new FibonacciGRPCClient(grpc::CreateChannel("localhost:12024", grpc::InsecureChannelCredentials()));

	auto result = client->QueryFibonacciNumber(20);

	cout << "result:" << result;

	auto resultJson = client->QueryFibonacciNumberJson(30);

	cout << "result json:" << resultJson;

	return 0;
}

int64_t FibonacciGRPCClient::QueryFibonacciNumber(const int fibonacciNumber) {
	// Data we are sending to the server.
	SimpleFibonacciQuery query;
	query.set_fibonacciquery(fibonacciNumber);

	// Container for the data we expect from the server.
	SimpleFibonacciReply reply;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	grpc::ClientContext context;

	// The actual RPC.
	grpc::Status status = clientStub->Calculate(&context, query, &reply);

	// Act upon its status.
	if (status.ok()) {
		return reply.fibonacciresult();
	} else {
		std::cout << "Error in query" << status.error_code() << ": " << status.error_message()
				  << std::endl;
		return -1;
	}
}

string FibonacciGRPCClient::QueryFibonacciNumberJson(const int fibonacciNumber) {
	// Data we are sending to the server.
	SimpleFibonacciQuery query;
	query.set_fibonacciquery(fibonacciNumber);

	// Container for the data we expect from the server.
	JsonFibonacciReply reply;

	// Context for the client. It could be used to convey extra information to
	// the server and/or tweak certain RPC behaviors.
	grpc::ClientContext context;

	// The actual RPC.
	grpc::Status status = clientStub->CalculateReturnJsonString(&context, query, &reply);

	// Act upon its status.
	if (status.ok()) {
		return reply.fibonaccijsonresult();
	} else {
		std::cout << "Error in query" << status.error_code() << ": " << status.error_message()
				  << std::endl;
		return "";
	}
}


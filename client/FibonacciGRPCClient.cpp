//
// Created by ali on 16.10.2022.
//
#include "FibonacciGRPCClient.hpp"

using namespace std;

int main() {
	std::cout << "Fibonacci grpc client" << std::endl;

	auto client = new FibonacciGRPCClient(grpc::CreateChannel("localhost:12024", grpc::InsecureChannelCredentials()));

	client->PrintJsonResult(0);
	client->PrintJsonResult(1);
	client->PrintJsonResult(2);
	client->PrintJsonResult(3);
	client->PrintJsonResult(4);
	client->PrintJsonResult(5);
	client->PrintJsonResult(5);
	client->PrintJsonResult(5);
	client->PrintJsonResult(5);
	client->PrintJsonResult(10);
	client->PrintJsonResult(100);
	client->PrintJsonResult(1000);
	client->PrintJsonResult(10000);
	client->PrintJsonResult(100000);
	client->PrintJsonResult(1000000);

	return 0;
}

void FibonacciGRPCClient::PrintJsonResult(int fiboQuery) {
	auto resultJson = this->QueryFibonacciNumberJson(fiboQuery);
	cout << "Result f(" << fiboQuery << ") json: " << resultJson << endl;
}


string FibonacciGRPCClient::QueryFibonacciNumber(const int fibonacciNumber) {
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
		return "err";
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


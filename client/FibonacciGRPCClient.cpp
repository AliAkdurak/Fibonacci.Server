//
// Created by ali on 16.10.2022.
//
#include "FibonacciGRPCClient.hpp"

using namespace std;

int main() {
	std::cout << "Fibonacci grpc client" << std::endl;

	auto client = new FibonacciGRPCClient(grpc::CreateChannel("localhost:12024", grpc::InsecureChannelCredentials()));

	auto result = client->QueryFibonacciNumber(0);
	cout << "result: 0-> " << result << endl;
	result = client->QueryFibonacciNumber(1);
	cout << "result: 1-> " << result << endl;
	result = client->QueryFibonacciNumber(2);
	cout << "result: 2-> " << result << endl;
	result = client->QueryFibonacciNumber(3);
	cout << "result: 3-> " << result << endl;
	result = client->QueryFibonacciNumber(4);
	cout << "result: 4-> " << result << endl;
	result = client->QueryFibonacciNumber(5);
	cout << "result: 5-> " << result << endl;
	result = client->QueryFibonacciNumber(10);
	cout << "result: 10-> " << result << endl;
	result = client->QueryFibonacciNumber(20);
	cout << "result: 20-> " << result << endl;

	result = client->QueryFibonacciNumber(100);
	cout << "result: 100-> " << result << endl;
	result = client->QueryFibonacciNumber(1000);
	cout << "result: 1000-> " << result << endl;
	result = client->QueryFibonacciNumber(10000);
	cout << "result: 10000-> " << result << endl;
	result = client->QueryFibonacciNumber(100000);
	cout << "result: 100000-> " << result << endl;
	result = client->QueryFibonacciNumber(1000000);
	cout << "result: 1000000-> " << result << endl;

	auto resultJson = client->QueryFibonacciNumberJson(30);

	cout << "result json: " << resultJson << endl;

	return 0;
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


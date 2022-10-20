//
// Created by ali on 15.10.2022.
//

#include "gRPCServer.hpp"

using namespace std;
using namespace grpc;
using namespace boost;

namespace Fibonacci::Server::gRPC {

void gRPCServer::StartServing() {
	string serverAddress("0.0.0.0:12024");

	grpc::EnableDefaultHealthCheckService(true);

	ServerBuilder builder;
	// Listen on the given address without any authentication mechanism.
	builder.AddListeningPort(serverAddress, grpc::InsecureServerCredentials());
	// Register "service" as the instance through which we'll communicate with
	// clients. In this case it corresponds to an *synchronous* service.
	builder.RegisterService(this);
	// Finally assemble the server.
	std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
	std::cout << "Server listening on " << serverAddress << std::endl;

	server->Wait();
}

Status gRPCServer::Calculate(ServerContext *context, const SimpleFibonacciQuery *request, SimpleFibonacciReply *response) {
	cout << "Calculate" << endl;

	std::shared_ptr<CalculationResult> result = FireCalculationQueryReceived(request->fibonacciquery());

	cout << "Result:" << result->getFibonacciResult() << endl;

	response->set_fibonacciresult(result->getFibonacciResult());

	return Status::OK;
}

Status gRPCServer::CalculateReturnJsonString(::grpc::ServerContext *context, const ::SimpleFibonacciQuery *request, ::JsonFibonacciReply *response) {
	cout << "Calculate and return json" << endl;

	std::shared_ptr<CalculationResult> result = FireCalculationQueryReceived(request->fibonacciquery());

	cout << "Result:" << result->getFibonacciResult() << endl;

	json::object resultObject;
	//Coding challenge show this as string, so I am casting it to a string.
	resultObject["fib"] = to_string(result->getFibonacciResult());
	resultObject["timestamp"] = std::time(nullptr);
	resultObject["count"] = result->getCount();

	response->set_fibonaccijsonresult(json::serialize(resultObject));

	return Status::OK;
}


} // Fibonacci::Server
//
// Created by ali on 15.10.2022.
//

#include "gRPCServer.hpp"

using namespace std;
using namespace grpc;

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

	int64_t result = FireCalculationQueryReceived(request->fibonacciquery());

	cout << "Result:" << result << endl;

	response->set_fibonacciresult(result);

	return Status::OK;
}

Status gRPCServer::CalculateReturnJsonString(::grpc::ServerContext *context, const ::SimpleFibonacciQuery *request, ::JsonFibonacciReply *response) {
	cout << "Calculate and return json" << endl;

	int64_t result = FireCalculationQueryReceived(request->fibonacciquery());

	cout << "Result:" << result << endl;

	response->set_fibonaccijsonresult("Test");

	return Status::OK;
}


} // Fibonacci::Server
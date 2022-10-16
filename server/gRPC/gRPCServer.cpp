//
// Created by ali on 15.10.2022.
//

#include "gRPCServer.hpp"

using namespace std;
using namespace grpc;

namespace Fibonacci::Server::gRPC {

void gRPCServer::StartServing() {
	string server_address("0.0.0.0:12024");

}

Status gRPCServer::Calculate(ServerContext *context, const SimpleFibonacciQuery *request, SimpleFibonacciReply *response) {

	return Service::Calculate(context, request, response);
}

} // Fibonacci::Server
#pragma once

#include <server_http.hpp>

#include "../controller/GenericController.h"

using HttpServer = SimpleWeb::Server<SimpleWeb::HTTP>;

class RestServer {
public:
    explicit RestServer(unsigned short, std::string key, GenericController*);

private:
    GenericController* controller;
    HttpServer server;
    bool validateKey(std::shared_ptr<HttpServer::Request>);
    void addRequestOptions();
    std::string key;
    void startServer();
};


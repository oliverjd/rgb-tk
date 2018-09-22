#ifndef RGB_TK_RESTSERVER_H
#define RGB_TK_RESTSERVER_H


#include "../controller/GenericController.h"
#include "server_http.hpp"

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


#endif //RGB_TK_RESTSERVER_H

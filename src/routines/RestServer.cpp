#include <ncurses.h>

#include "RestServer.h"

RestServer::RestServer(unsigned short port, std::string key, GenericController* genericController) :
        key(key),
        controller(genericController) {
    server.config.port = port;
    addRequestOptions();
    startServer();
}

void RestServer::startServer() {
    std::thread server_thread([this]() {
        server.start();
    });
    server_thread.detach();
}

void RestServer::addRequestOptions() {
    server.resource["^/rgb-tk/power/toggle$"]["POST"] = [this](
            std::shared_ptr<HttpServer::Response> response,
            std::shared_ptr<HttpServer::Request> request) {
        if (!validateKey(request)) {
            response->write("HTTP/1.1 403 Forbidden");
            return;
        }
        controller->togglePower();
        response->write("HTTP/1.1 200 OK");
    };

    server.resource["^/info$"]["GET"] = [this](
            std::shared_ptr<HttpServer::Response> response,
            std::shared_ptr<HttpServer::Request> request) {
        printw("Got GET request.\n");
        std::stringstream stream;
        stream << "<h1>Request from " << request->remote_endpoint_address() << ":"
               << request->remote_endpoint_port() << "</h1>";
        stream << request->method << " " << request->path << " HTTP/" << request->http_version;
        stream << "<h2>Query Fields</h2>";
        auto query_fields = request->parse_query_string();
        for(auto &field : query_fields)
            stream << field.first << ": " << field.second << "<br>";
        stream << "<h2>Header Fields</h2>";
        for(auto &field : request->header)
            stream << field.first << ": " << field.second << "<br>";
        response->write(stream);
    };

    server.on_error = [](std::shared_ptr<HttpServer::Request> /*request*/, const SimpleWeb::error_code & /*ec*/) {
        // Handle errors; connection timeouts also call this handle w/ ec set to SimpleWeb::errc::operation_canceled
    };
}

bool RestServer::validateKey(std::shared_ptr<HttpServer::Request> request) {
    auto query_fields = request->parse_query_string();
    for(auto &field : query_fields) {
        if (field.first == "key") {
            if (field.second == key) {
                return true;
            }
        }
    }
    return false;
}

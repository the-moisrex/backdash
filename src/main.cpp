#include "../include/app.hpp"

#include <webpp/http/protocols/beast.hpp>

int main() {
    using namespace webpp::http;

    beast<back::app> server;
    server
        .address("0.0.0.0")
        .port(80443);
    return server();
}

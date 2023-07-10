#include "server.hpp"

#include "httplib.h"

void HttpServer::start() {
  httplib::Server svr;
  svr.Get("/", [](const httplib::Request &req, httplib::Response &res) {
    res.set_content("Hello World!", "text/plain");
  });
  svr.listen(this->host, this->port);
}

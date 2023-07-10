#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>

class HttpServer {
 private:
  std::string host;
  int port;

 public:
  HttpServer(std::string host, int port) : host(host), port(port){};
  ~HttpServer() = default;
  void start();
  void stop();
};

#endif  // SERVER_HPP
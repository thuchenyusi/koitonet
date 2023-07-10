#include <iostream>

#include "client.hpp"
#include "server.hpp"

int main() {
  std::cout << "Hello, World!" << std::endl;
  HttpServer server("localhost", 8080);
  return 0;
}
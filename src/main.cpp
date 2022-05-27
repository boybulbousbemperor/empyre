#include "../../include/crow_all.h"
#include "Empyre.h"

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")([](/*int dx0, int dx1*/) {
    // TODO(Daniel): write an HTTP content body ...
    return crow::response(500);
  })

  app.port(8080).multithreaded().run();

  std::cout << "Empyre: a Disty Thingy!" << std::endl;

  return 0;
}

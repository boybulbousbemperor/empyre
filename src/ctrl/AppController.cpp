#include "AppController.h"

AppController::AppController() {
  CROW_ROUTE(this->app, "/controller/action/<int>")([](const crow::request &reqs, int actionID) {
    auto body = crow::json::load(reqs.body);
    auto resp = crow::response();
    if (!body) return crow::response(400);

    std::ifstream inf;
    std::string contents;

    while (std::getline(inf, contents)){
      std::ostringstream stringstream_;
      stringstream_ << contents;
      resp = crow::response(stringstream_.str());
    }

    return resp;
  });
}

AppController::~AppController() {
  controller.~EmpyreController();
}

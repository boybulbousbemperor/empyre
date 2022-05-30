#include "../../lib/nginx/src/core/nginx.h"
#include "../../lib/jsoncpp/include/json/json.h"

#ifndef APP_CONTROLLER_H
#define APP_CONTROLLER_H

#include "ControllerBase.h"

class AppController: public EmpyreController {
public:
  AppController();
  AppController(EmpyreHandler handler): controller(handler) {}
  ~AppController();

  void gatewayResponse();

private:
  EmpyreController controller;
  std::string controllerName;
  std::string actionName;
  int actionID;
};

#endif

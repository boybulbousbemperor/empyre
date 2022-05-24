#ifndef APP_CONTROLLER_H
#define APP_CONTROLLER_H

#include "ControllerBase.h"

class AppController: public EmpyreController {
public:
  AppController();
  AppController(EmpyreHandler handler): controller(handler) {}
  ~AppController();

private:
  EmpyreController controller;
};

#endif
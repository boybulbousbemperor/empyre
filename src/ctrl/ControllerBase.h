#include "../models/command/HandlerBase.h"

#ifndef CONTROLLER_BASE_H
#define CONTROLLER_BASE_H

class EmpyreController {
public:
  EmpyreController();
  EmpyreController(EmpyreHandler handler): handler(handler) {}
  ~EmpyreController();
private:
  EmpyreHandler handler;
};

#endif
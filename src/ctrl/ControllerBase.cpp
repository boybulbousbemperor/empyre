#include "ControllerBase.h"

EmpyreController::~EmpyreController() {
  handler.~EmpyreHandler();
}
#include "AppController.h"

AppController::~AppController() {
  controller.~EmpyreController();
}
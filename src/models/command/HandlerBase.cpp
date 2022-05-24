#include "HandlerBase.h"

EmpyreHandler::~EmpyreHandler() {
  EmpyreHandler *handler;
  delete [] handler;
  handler = nullptr;
}
#include "AppController.h"
#include "../../lib/nginx/src/http/ngx_http_request.h"
// code ...

AppController::AppController() = default;

AppController::~AppController() { controller.~EmpyreController(); }

void AppController::gatewayResponse() {
  Json::Value rootValue;
  auto ctrl = rootValue.get("http.controller", controllerName);
  auto act = rootValue.get("http.action", actionName);
  auto id = rootValue.get("http.id", actionID);

  ngx_http_headers_out_t *reqs;
  reqs->status = NGX_HTTP_OK;
  reqs->content_length_n = 255;
  reqs->content_type.len = sizeof(id) - 1;
  reqs->content_type.data = id;
  ngx_http_send_header(&reqs->headers);

  reqs->content_encoding = ngx_list_push(&reqs->headers);
  if (reqs->content_encoding == NULL) {
    ngx_http_send_header(&reqs->status = NGX_HTTP_NO_CONTENT);
  }
}

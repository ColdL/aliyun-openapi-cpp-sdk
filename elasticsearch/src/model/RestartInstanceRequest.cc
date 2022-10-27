/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/elasticsearch/model/RestartInstanceRequest.h>

using AlibabaCloud::Elasticsearch::Model::RestartInstanceRequest;

RestartInstanceRequest::RestartInstanceRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/actions/restart"};
  setMethod(HttpRequest::Method::Post);
}

RestartInstanceRequest::~RestartInstanceRequest() {}

string RestartInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RestartInstanceRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string RestartInstanceRequest::getClientToken() const {
  return clientToken_;
}

void RestartInstanceRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), std::to_string(clientToken));
}

boolean RestartInstanceRequest::getForce() const {
  return force_;
}

void RestartInstanceRequest::setForce(boolean force) {
  force_ = force;
  setParameter(std::string("force"), std::to_string(force));
}

string RestartInstanceRequest::getBody() const {
  return body_;
}

void RestartInstanceRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}


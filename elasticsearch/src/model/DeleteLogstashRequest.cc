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

#include <alibabacloud/elasticsearch/model/DeleteLogstashRequest.h>

using AlibabaCloud::Elasticsearch::Model::DeleteLogstashRequest;

DeleteLogstashRequest::DeleteLogstashRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteLogstashRequest::~DeleteLogstashRequest() {}

string DeleteLogstashRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteLogstashRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string DeleteLogstashRequest::getClientToken() const {
  return clientToken_;
}

void DeleteLogstashRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("clientToken"), std::to_string(clientToken));
}

string DeleteLogstashRequest::getDeleteType() const {
  return deleteType_;
}

void DeleteLogstashRequest::setDeleteType(string deleteType) {
  deleteType_ = deleteType;
  setParameter(std::string("deleteType"), std::to_string(deleteType));
}


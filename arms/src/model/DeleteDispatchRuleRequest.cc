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

#include <alibabacloud/arms/model/DeleteDispatchRuleRequest.h>

using AlibabaCloud::ARMS::Model::DeleteDispatchRuleRequest;

DeleteDispatchRuleRequest::DeleteDispatchRuleRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteDispatchRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDispatchRuleRequest::~DeleteDispatchRuleRequest() {}

std::string DeleteDispatchRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteDispatchRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDispatchRuleRequest::getId() const {
  return id_;
}

void DeleteDispatchRuleRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DeleteDispatchRuleRequest::getProxyUserId() const {
  return proxyUserId_;
}

void DeleteDispatchRuleRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}


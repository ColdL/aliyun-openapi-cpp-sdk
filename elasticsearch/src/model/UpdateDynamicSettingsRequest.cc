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

#include <alibabacloud/elasticsearch/model/UpdateDynamicSettingsRequest.h>

using AlibabaCloud::Elasticsearch::Model::UpdateDynamicSettingsRequest;

UpdateDynamicSettingsRequest::UpdateDynamicSettingsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/dynamic-settings"};
  setMethod(HttpRequest::Method::Put);
}

UpdateDynamicSettingsRequest::~UpdateDynamicSettingsRequest() {}

string UpdateDynamicSettingsRequest::getMode() const {
  return mode_;
}

void UpdateDynamicSettingsRequest::setMode(string mode) {
  mode_ = mode;
  setParameter(std::string("mode"), std::to_string(mode));
}

string UpdateDynamicSettingsRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateDynamicSettingsRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

string UpdateDynamicSettingsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateDynamicSettingsRequest::setClientToken(string clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), std::to_string(clientToken));
}

string UpdateDynamicSettingsRequest::getRegionId() const {
  return regionId_;
}

void UpdateDynamicSettingsRequest::setRegionId(string regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), std::to_string(regionId));
}

string UpdateDynamicSettingsRequest::getBody() const {
  return body_;
}

void UpdateDynamicSettingsRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}


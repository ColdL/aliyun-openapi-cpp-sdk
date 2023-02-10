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

#include <alibabacloud/sas/model/GetAppNetworkRequest.h>

using AlibabaCloud::Sas::Model::GetAppNetworkRequest;

GetAppNetworkRequest::GetAppNetworkRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetAppNetwork") {
  setMethod(HttpRequest::Method::Get);
}

GetAppNetworkRequest::~GetAppNetworkRequest() {}

long GetAppNetworkRequest::getStartTime() const {
  return startTime_;
}

void GetAppNetworkRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long GetAppNetworkRequest::getEndTime() const {
  return endTime_;
}

void GetAppNetworkRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetAppNetworkRequest::getClusterId() const {
  return clusterId_;
}

void GetAppNetworkRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}


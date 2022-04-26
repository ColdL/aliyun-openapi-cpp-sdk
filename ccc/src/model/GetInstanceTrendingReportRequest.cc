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

#include <alibabacloud/ccc/model/GetInstanceTrendingReportRequest.h>

using AlibabaCloud::CCC::Model::GetInstanceTrendingReportRequest;

GetInstanceTrendingReportRequest::GetInstanceTrendingReportRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "GetInstanceTrendingReport") {
  setMethod(HttpRequest::Method::Post);
}

GetInstanceTrendingReportRequest::~GetInstanceTrendingReportRequest() {}

long GetInstanceTrendingReportRequest::getEndTime() const {
  return endTime_;
}

void GetInstanceTrendingReportRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetInstanceTrendingReportRequest::getStartTime() const {
  return startTime_;
}

void GetInstanceTrendingReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetInstanceTrendingReportRequest::getInstanceId() const {
  return instanceId_;
}

void GetInstanceTrendingReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}


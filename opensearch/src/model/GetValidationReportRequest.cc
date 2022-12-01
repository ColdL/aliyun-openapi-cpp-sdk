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

#include <alibabacloud/opensearch/model/GetValidationReportRequest.h>

using AlibabaCloud::OpenSearch::Model::GetValidationReportRequest;

GetValidationReportRequest::GetValidationReportRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/algorithm/data/validation-report"};
  setMethod(HttpRequest::Method::Get);
}

GetValidationReportRequest::~GetValidationReportRequest() {}

std::string GetValidationReportRequest::getType() const {
  return type_;
}

void GetValidationReportRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

std::string GetValidationReportRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void GetValidationReportRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}


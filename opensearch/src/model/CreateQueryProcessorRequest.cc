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

#include <alibabacloud/opensearch/model/CreateQueryProcessorRequest.h>

using AlibabaCloud::OpenSearch::Model::CreateQueryProcessorRequest;

CreateQueryProcessorRequest::CreateQueryProcessorRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/apps/[appId]/query-processors"};
  setMethod(HttpRequest::Method::Post);
}

CreateQueryProcessorRequest::~CreateQueryProcessorRequest() {}

bool CreateQueryProcessorRequest::getDryRun() const {
  return dryRun_;
}

void CreateQueryProcessorRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("dryRun"), dryRun ? "true" : "false");
}

int CreateQueryProcessorRequest::getAppId() const {
  return appId_;
}

void CreateQueryProcessorRequest::setAppId(int appId) {
  appId_ = appId;
  setParameter(std::string("appId"), std::to_string(appId));
}

std::string CreateQueryProcessorRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void CreateQueryProcessorRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}


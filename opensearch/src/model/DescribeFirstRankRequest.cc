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

#include <alibabacloud/opensearch/model/DescribeFirstRankRequest.h>

using AlibabaCloud::OpenSearch::Model::DescribeFirstRankRequest;

DescribeFirstRankRequest::DescribeFirstRankRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/apps/[appId]/first-ranks/[name]"};
  setMethod(HttpRequest::Method::Get);
}

DescribeFirstRankRequest::~DescribeFirstRankRequest() {}

int DescribeFirstRankRequest::getAppId() const {
  return appId_;
}

void DescribeFirstRankRequest::setAppId(int appId) {
  appId_ = appId;
  setParameter(std::string("appId"), std::to_string(appId));
}

std::string DescribeFirstRankRequest::getName() const {
  return name_;
}

void DescribeFirstRankRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string DescribeFirstRankRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void DescribeFirstRankRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}


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

#include <alibabacloud/paifeaturestore/model/GetProjectFeatureViewRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::GetProjectFeatureViewRequest;

GetProjectFeatureViewRequest::GetProjectFeatureViewRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects/[ProjectId]/featureviews/[FeatureViewName]"};
  setMethod(HttpRequest::Method::Get);
}

GetProjectFeatureViewRequest::~GetProjectFeatureViewRequest() {}

std::string GetProjectFeatureViewRequest::getInstanceId() const {
  return instanceId_;
}

void GetProjectFeatureViewRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetProjectFeatureViewRequest::getFeatureViewName() const {
  return featureViewName_;
}

void GetProjectFeatureViewRequest::setFeatureViewName(const std::string &featureViewName) {
  featureViewName_ = featureViewName;
  setParameter(std::string("FeatureViewName"), featureViewName);
}

std::string GetProjectFeatureViewRequest::getProjectId() const {
  return projectId_;
}

void GetProjectFeatureViewRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}


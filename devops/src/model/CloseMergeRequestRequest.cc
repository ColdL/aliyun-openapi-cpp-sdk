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

#include <alibabacloud/devops/model/CloseMergeRequestRequest.h>

using AlibabaCloud::Devops::Model::CloseMergeRequestRequest;

CloseMergeRequestRequest::CloseMergeRequestRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/projects/[repositoryId]/merge_requests/[localId]/close"};
  setMethod(HttpRequest::Method::Post);
}

CloseMergeRequestRequest::~CloseMergeRequestRequest() {}

std::string CloseMergeRequestRequest::getOrganizationId() const {
  return organizationId_;
}

void CloseMergeRequestRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long CloseMergeRequestRequest::getRepositoryId() const {
  return repositoryId_;
}

void CloseMergeRequestRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string CloseMergeRequestRequest::getAccessToken() const {
  return accessToken_;
}

void CloseMergeRequestRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long CloseMergeRequestRequest::getLocalId() const {
  return localId_;
}

void CloseMergeRequestRequest::setLocalId(long localId) {
  localId_ = localId;
  setParameter(std::string("localId"), std::to_string(localId));
}


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

#include <alibabacloud/devops/model/DeleteProtectedBranchRequest.h>

using AlibabaCloud::Devops::Model::DeleteProtectedBranchRequest;

DeleteProtectedBranchRequest::DeleteProtectedBranchRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/[repositoryId]/protect_branches/[protectedBranchId]"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteProtectedBranchRequest::~DeleteProtectedBranchRequest() {}

std::string DeleteProtectedBranchRequest::getOrganizationId() const {
  return organizationId_;
}

void DeleteProtectedBranchRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long DeleteProtectedBranchRequest::getProtectedBranchId() const {
  return protectedBranchId_;
}

void DeleteProtectedBranchRequest::setProtectedBranchId(long protectedBranchId) {
  protectedBranchId_ = protectedBranchId;
  setParameter(std::string("protectedBranchId"), std::to_string(protectedBranchId));
}

long DeleteProtectedBranchRequest::getRepositoryId() const {
  return repositoryId_;
}

void DeleteProtectedBranchRequest::setRepositoryId(long repositoryId) {
  repositoryId_ = repositoryId;
  setParameter(std::string("repositoryId"), std::to_string(repositoryId));
}

std::string DeleteProtectedBranchRequest::getAccessToken() const {
  return accessToken_;
}

void DeleteProtectedBranchRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}


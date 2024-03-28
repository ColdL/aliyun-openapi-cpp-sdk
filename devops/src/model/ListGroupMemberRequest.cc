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

#include <alibabacloud/devops/model/ListGroupMemberRequest.h>

using AlibabaCloud::Devops::Model::ListGroupMemberRequest;

ListGroupMemberRequest::ListGroupMemberRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/repository/groups/[groupId]/list"};
  setMethod(HttpRequest::Method::Get);
}

ListGroupMemberRequest::~ListGroupMemberRequest() {}

std::string ListGroupMemberRequest::getOrganizationId() const {
  return organizationId_;
}

void ListGroupMemberRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

long ListGroupMemberRequest::getGroupId() const {
  return groupId_;
}

void ListGroupMemberRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

std::string ListGroupMemberRequest::getAccessToken() const {
  return accessToken_;
}

void ListGroupMemberRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}


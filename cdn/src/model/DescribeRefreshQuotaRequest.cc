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

#include <alibabacloud/cdn/model/DescribeRefreshQuotaRequest.h>

using AlibabaCloud::Cdn::Model::DescribeRefreshQuotaRequest;

DescribeRefreshQuotaRequest::DescribeRefreshQuotaRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeRefreshQuota") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRefreshQuotaRequest::~DescribeRefreshQuotaRequest() {}

long DescribeRefreshQuotaRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRefreshQuotaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRefreshQuotaRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeRefreshQuotaRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}


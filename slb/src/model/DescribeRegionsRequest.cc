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

#include <alibabacloud/slb/model/DescribeRegionsRequest.h>

using AlibabaCloud::Slb::Model::DescribeRegionsRequest;

DescribeRegionsRequest::DescribeRegionsRequest()
    : RpcServiceRequest("slb", "2013-02-21", "DescribeRegions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRegionsRequest::~DescribeRegionsRequest() {}

std::string DescribeRegionsRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeRegionsRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeRegionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRegionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRegionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRegionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRegionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRegionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRegionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRegionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRegionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRegionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRegionsRequest::getTags() const {
  return tags_;
}

void DescribeRegionsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}


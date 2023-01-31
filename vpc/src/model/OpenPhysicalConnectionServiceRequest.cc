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

#include <alibabacloud/vpc/model/OpenPhysicalConnectionServiceRequest.h>

using AlibabaCloud::Vpc::Model::OpenPhysicalConnectionServiceRequest;

OpenPhysicalConnectionServiceRequest::OpenPhysicalConnectionServiceRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "OpenPhysicalConnectionService") {
  setMethod(HttpRequest::Method::Post);
}

OpenPhysicalConnectionServiceRequest::~OpenPhysicalConnectionServiceRequest() {}

long OpenPhysicalConnectionServiceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void OpenPhysicalConnectionServiceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string OpenPhysicalConnectionServiceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void OpenPhysicalConnectionServiceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string OpenPhysicalConnectionServiceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void OpenPhysicalConnectionServiceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long OpenPhysicalConnectionServiceRequest::getOwnerId() const {
  return ownerId_;
}

void OpenPhysicalConnectionServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string OpenPhysicalConnectionServiceRequest::getRegionId() const {
  return regionId_;
}

void OpenPhysicalConnectionServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


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

#include <alibabacloud/smartag/model/ListAccessPointNetworkQualitiesRequest.h>

using AlibabaCloud::Smartag::Model::ListAccessPointNetworkQualitiesRequest;

ListAccessPointNetworkQualitiesRequest::ListAccessPointNetworkQualitiesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ListAccessPointNetworkQualities") {
  setMethod(HttpRequest::Method::Post);
}

ListAccessPointNetworkQualitiesRequest::~ListAccessPointNetworkQualitiesRequest() {}

long ListAccessPointNetworkQualitiesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListAccessPointNetworkQualitiesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListAccessPointNetworkQualitiesRequest::getRegionId() const {
  return regionId_;
}

void ListAccessPointNetworkQualitiesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListAccessPointNetworkQualitiesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListAccessPointNetworkQualitiesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListAccessPointNetworkQualitiesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListAccessPointNetworkQualitiesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListAccessPointNetworkQualitiesRequest::getOwnerId() const {
  return ownerId_;
}

void ListAccessPointNetworkQualitiesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListAccessPointNetworkQualitiesRequest::getSmartAGId() const {
  return smartAGId_;
}

void ListAccessPointNetworkQualitiesRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


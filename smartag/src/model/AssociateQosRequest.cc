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

#include <alibabacloud/smartag/model/AssociateQosRequest.h>

using AlibabaCloud::Smartag::Model::AssociateQosRequest;

AssociateQosRequest::AssociateQosRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "AssociateQos") {
  setMethod(HttpRequest::Method::Post);
}

AssociateQosRequest::~AssociateQosRequest() {}

long AssociateQosRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AssociateQosRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AssociateQosRequest::getRegionId() const {
  return regionId_;
}

void AssociateQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AssociateQosRequest::getQosId() const {
  return qosId_;
}

void AssociateQosRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string AssociateQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AssociateQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AssociateQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AssociateQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AssociateQosRequest::getOwnerId() const {
  return ownerId_;
}

void AssociateQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AssociateQosRequest::getSmartAGId() const {
  return smartAGId_;
}

void AssociateQosRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}


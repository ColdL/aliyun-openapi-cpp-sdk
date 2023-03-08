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

#include <alibabacloud/adb/model/ModifyAuditLogConfigRequest.h>

using AlibabaCloud::Adb::Model::ModifyAuditLogConfigRequest;

ModifyAuditLogConfigRequest::ModifyAuditLogConfigRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ModifyAuditLogConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAuditLogConfigRequest::~ModifyAuditLogConfigRequest() {}

long ModifyAuditLogConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAuditLogConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAuditLogConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAuditLogConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAuditLogConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyAuditLogConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyAuditLogConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAuditLogConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAuditLogConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAuditLogConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAuditLogConfigRequest::getAuditLogStatus() const {
  return auditLogStatus_;
}

void ModifyAuditLogConfigRequest::setAuditLogStatus(const std::string &auditLogStatus) {
  auditLogStatus_ = auditLogStatus;
  setParameter(std::string("AuditLogStatus"), auditLogStatus);
}

std::string ModifyAuditLogConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAuditLogConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAuditLogConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyAuditLogConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}


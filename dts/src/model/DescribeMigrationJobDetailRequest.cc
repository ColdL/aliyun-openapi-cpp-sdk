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

#include <alibabacloud/dts/model/DescribeMigrationJobDetailRequest.h>

using AlibabaCloud::Dts::Model::DescribeMigrationJobDetailRequest;

DescribeMigrationJobDetailRequest::DescribeMigrationJobDetailRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeMigrationJobDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMigrationJobDetailRequest::~DescribeMigrationJobDetailRequest() {}

std::string DescribeMigrationJobDetailRequest::getClientToken() const {
  return clientToken_;
}

void DescribeMigrationJobDetailRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DescribeMigrationJobDetailRequest::getMigrationModeDataInitialization() const {
  return migrationModeDataInitialization_;
}

void DescribeMigrationJobDetailRequest::setMigrationModeDataInitialization(bool migrationModeDataInitialization) {
  migrationModeDataInitialization_ = migrationModeDataInitialization;
  setParameter(std::string("MigrationMode.DataInitialization"), migrationModeDataInitialization ? "true" : "false");
}

std::string DescribeMigrationJobDetailRequest::getMigrationJobId() const {
  return migrationJobId_;
}

void DescribeMigrationJobDetailRequest::setMigrationJobId(const std::string &migrationJobId) {
  migrationJobId_ = migrationJobId;
  setParameter(std::string("MigrationJobId"), migrationJobId);
}

int DescribeMigrationJobDetailRequest::getPageNum() const {
  return pageNum_;
}

void DescribeMigrationJobDetailRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeMigrationJobDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMigrationJobDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMigrationJobDetailRequest::getAccountId() const {
  return accountId_;
}

void DescribeMigrationJobDetailRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

bool DescribeMigrationJobDetailRequest::getMigrationModeDataSynchronization() const {
  return migrationModeDataSynchronization_;
}

void DescribeMigrationJobDetailRequest::setMigrationModeDataSynchronization(bool migrationModeDataSynchronization) {
  migrationModeDataSynchronization_ = migrationModeDataSynchronization;
  setParameter(std::string("MigrationMode.DataSynchronization"), migrationModeDataSynchronization ? "true" : "false");
}

std::string DescribeMigrationJobDetailRequest::getRegionId() const {
  return regionId_;
}

void DescribeMigrationJobDetailRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeMigrationJobDetailRequest::getPageSize() const {
  return pageSize_;
}

void DescribeMigrationJobDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeMigrationJobDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMigrationJobDetailRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

bool DescribeMigrationJobDetailRequest::getMigrationModeStructureInitialization() const {
  return migrationModeStructureInitialization_;
}

void DescribeMigrationJobDetailRequest::setMigrationModeStructureInitialization(bool migrationModeStructureInitialization) {
  migrationModeStructureInitialization_ = migrationModeStructureInitialization;
  setParameter(std::string("MigrationMode.StructureInitialization"), migrationModeStructureInitialization ? "true" : "false");
}


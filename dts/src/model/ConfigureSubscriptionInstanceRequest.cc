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

#include <alibabacloud/dts/model/ConfigureSubscriptionInstanceRequest.h>

using AlibabaCloud::Dts::Model::ConfigureSubscriptionInstanceRequest;

ConfigureSubscriptionInstanceRequest::ConfigureSubscriptionInstanceRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ConfigureSubscriptionInstance") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureSubscriptionInstanceRequest::~ConfigureSubscriptionInstanceRequest() {}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointInstanceID() const {
  return sourceEndpointInstanceID_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID) {
  sourceEndpointInstanceID_ = sourceEndpointInstanceID;
  setParameter(std::string("SourceEndpoint.InstanceID"), sourceEndpointInstanceID);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointOracleSID() const {
  return sourceEndpointOracleSID_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID) {
  sourceEndpointOracleSID_ = sourceEndpointOracleSID;
  setParameter(std::string("SourceEndpoint.OracleSID"), sourceEndpointOracleSID);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointIP() const {
  return sourceEndpointIP_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointIP(const std::string &sourceEndpointIP) {
  sourceEndpointIP_ = sourceEndpointIP;
  setParameter(std::string("SourceEndpoint.IP"), sourceEndpointIP);
}

bool ConfigureSubscriptionInstanceRequest::getSubscriptionDataTypeDML() const {
  return subscriptionDataTypeDML_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionDataTypeDML(bool subscriptionDataTypeDML) {
  subscriptionDataTypeDML_ = subscriptionDataTypeDML;
  setParameter(std::string("SubscriptionDataType.DML"), subscriptionDataTypeDML ? "true" : "false");
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointInstanceType() const {
  return sourceEndpointInstanceType_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType) {
  sourceEndpointInstanceType_ = sourceEndpointInstanceType;
  setParameter(std::string("SourceEndpoint.InstanceType"), sourceEndpointInstanceType);
}

std::string ConfigureSubscriptionInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ConfigureSubscriptionInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ConfigureSubscriptionInstanceRequest::getAccountId() const {
  return accountId_;
}

void ConfigureSubscriptionInstanceRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string ConfigureSubscriptionInstanceRequest::getRegionId() const {
  return regionId_;
}

void ConfigureSubscriptionInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionObject() const {
  return subscriptionObject_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionObject(const std::string &subscriptionObject) {
  subscriptionObject_ = subscriptionObject;
  setBodyParameter(std::string("SubscriptionObject"), subscriptionObject);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceVSwitchId() const {
  return subscriptionInstanceVSwitchId_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceVSwitchId(const std::string &subscriptionInstanceVSwitchId) {
  subscriptionInstanceVSwitchId_ = subscriptionInstanceVSwitchId;
  setParameter(std::string("SubscriptionInstance.VSwitchId"), subscriptionInstanceVSwitchId);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointUserName() const {
  return sourceEndpointUserName_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointUserName(const std::string &sourceEndpointUserName) {
  sourceEndpointUserName_ = sourceEndpointUserName;
  setParameter(std::string("SourceEndpoint.UserName"), sourceEndpointUserName);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointDatabaseName() const {
  return sourceEndpointDatabaseName_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName) {
  sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
  setParameter(std::string("SourceEndpoint.DatabaseName"), sourceEndpointDatabaseName);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointPort() const {
  return sourceEndpointPort_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointPort(const std::string &sourceEndpointPort) {
  sourceEndpointPort_ = sourceEndpointPort;
  setParameter(std::string("SourceEndpoint.Port"), sourceEndpointPort);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointOwnerID() const {
  return sourceEndpointOwnerID_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID) {
  sourceEndpointOwnerID_ = sourceEndpointOwnerID;
  setParameter(std::string("SourceEndpoint.OwnerID"), sourceEndpointOwnerID);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceVPCId() const {
  return subscriptionInstanceVPCId_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceVPCId(const std::string &subscriptionInstanceVPCId) {
  subscriptionInstanceVPCId_ = subscriptionInstanceVPCId;
  setParameter(std::string("SubscriptionInstance.VPCId"), subscriptionInstanceVPCId);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceNetworkType() const {
  return subscriptionInstanceNetworkType_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceNetworkType(const std::string &subscriptionInstanceNetworkType) {
  subscriptionInstanceNetworkType_ = subscriptionInstanceNetworkType;
  setParameter(std::string("SubscriptionInstanceNetworkType"), subscriptionInstanceNetworkType);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceId() const {
  return subscriptionInstanceId_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceId(const std::string &subscriptionInstanceId) {
  subscriptionInstanceId_ = subscriptionInstanceId;
  setParameter(std::string("SubscriptionInstanceId"), subscriptionInstanceId);
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointRole() const {
  return sourceEndpointRole_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointRole(const std::string &sourceEndpointRole) {
  sourceEndpointRole_ = sourceEndpointRole;
  setParameter(std::string("SourceEndpoint.Role"), sourceEndpointRole);
}

std::string ConfigureSubscriptionInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void ConfigureSubscriptionInstanceRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

bool ConfigureSubscriptionInstanceRequest::getSubscriptionDataTypeDDL() const {
  return subscriptionDataTypeDDL_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL) {
  subscriptionDataTypeDDL_ = subscriptionDataTypeDDL;
  setParameter(std::string("SubscriptionDataType.DDL"), subscriptionDataTypeDDL ? "true" : "false");
}

std::string ConfigureSubscriptionInstanceRequest::getSourceEndpointPassword() const {
  return sourceEndpointPassword_;
}

void ConfigureSubscriptionInstanceRequest::setSourceEndpointPassword(const std::string &sourceEndpointPassword) {
  sourceEndpointPassword_ = sourceEndpointPassword;
  setParameter(std::string("SourceEndpoint.Password"), sourceEndpointPassword);
}

std::string ConfigureSubscriptionInstanceRequest::getSubscriptionInstanceName() const {
  return subscriptionInstanceName_;
}

void ConfigureSubscriptionInstanceRequest::setSubscriptionInstanceName(const std::string &subscriptionInstanceName) {
  subscriptionInstanceName_ = subscriptionInstanceName;
  setParameter(std::string("SubscriptionInstanceName"), subscriptionInstanceName);
}


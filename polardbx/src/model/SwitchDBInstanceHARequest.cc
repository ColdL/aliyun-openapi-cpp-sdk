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

#include <alibabacloud/polardbx/model/SwitchDBInstanceHARequest.h>

using AlibabaCloud::Polardbx::Model::SwitchDBInstanceHARequest;

SwitchDBInstanceHARequest::SwitchDBInstanceHARequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "SwitchDBInstanceHA") {
  setMethod(HttpRequest::Method::Post);
}

SwitchDBInstanceHARequest::~SwitchDBInstanceHARequest() {}

std::string SwitchDBInstanceHARequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void SwitchDBInstanceHARequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string SwitchDBInstanceHARequest::getTargetPrimaryRegionId() const {
  return targetPrimaryRegionId_;
}

void SwitchDBInstanceHARequest::setTargetPrimaryRegionId(const std::string &targetPrimaryRegionId) {
  targetPrimaryRegionId_ = targetPrimaryRegionId;
  setParameter(std::string("TargetPrimaryRegionId"), targetPrimaryRegionId);
}

std::string SwitchDBInstanceHARequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void SwitchDBInstanceHARequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string SwitchDBInstanceHARequest::getRegionId() const {
  return regionId_;
}

void SwitchDBInstanceHARequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SwitchDBInstanceHARequest::getTargetPrimaryAzoneId() const {
  return targetPrimaryAzoneId_;
}

void SwitchDBInstanceHARequest::setTargetPrimaryAzoneId(const std::string &targetPrimaryAzoneId) {
  targetPrimaryAzoneId_ = targetPrimaryAzoneId;
  setParameter(std::string("TargetPrimaryAzoneId"), targetPrimaryAzoneId);
}

std::string SwitchDBInstanceHARequest::getSwitchTime() const {
  return switchTime_;
}

void SwitchDBInstanceHARequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}


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

#include <alibabacloud/dts/model/DescribeDtsJobDetailRequest.h>

using AlibabaCloud::Dts::Model::DescribeDtsJobDetailRequest;

DescribeDtsJobDetailRequest::DescribeDtsJobDetailRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDtsJobDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDtsJobDetailRequest::~DescribeDtsJobDetailRequest() {}

bool DescribeDtsJobDetailRequest::getSyncSubJobHistory() const {
  return syncSubJobHistory_;
}

void DescribeDtsJobDetailRequest::setSyncSubJobHistory(bool syncSubJobHistory) {
  syncSubJobHistory_ = syncSubJobHistory;
  setParameter(std::string("SyncSubJobHistory"), syncSubJobHistory ? "true" : "false");
}

std::string DescribeDtsJobDetailRequest::getRegionId() const {
  return regionId_;
}

void DescribeDtsJobDetailRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDtsJobDetailRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeDtsJobDetailRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeDtsJobDetailRequest::getDtsInstanceID() const {
  return dtsInstanceID_;
}

void DescribeDtsJobDetailRequest::setDtsInstanceID(const std::string &dtsInstanceID) {
  dtsInstanceID_ = dtsInstanceID;
  setParameter(std::string("DtsInstanceID"), dtsInstanceID);
}

std::string DescribeDtsJobDetailRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void DescribeDtsJobDetailRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}


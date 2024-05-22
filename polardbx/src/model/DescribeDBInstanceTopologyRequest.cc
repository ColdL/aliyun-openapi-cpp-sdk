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

#include <alibabacloud/polardbx/model/DescribeDBInstanceTopologyRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeDBInstanceTopologyRequest;

DescribeDBInstanceTopologyRequest::DescribeDBInstanceTopologyRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeDBInstanceTopology") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceTopologyRequest::~DescribeDBInstanceTopologyRequest() {}

std::string DescribeDBInstanceTopologyRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeDBInstanceTopologyRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeDBInstanceTopologyRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBInstanceTopologyRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBInstanceTopologyRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceTopologyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBInstanceTopologyRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBInstanceTopologyRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}


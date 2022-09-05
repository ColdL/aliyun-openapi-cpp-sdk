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

#include <alibabacloud/arms/model/SyncRecordingRulesRequest.h>

using AlibabaCloud::ARMS::Model::SyncRecordingRulesRequest;

SyncRecordingRulesRequest::SyncRecordingRulesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SyncRecordingRules") {
  setMethod(HttpRequest::Method::Post);
}

SyncRecordingRulesRequest::~SyncRecordingRulesRequest() {}

std::string SyncRecordingRulesRequest::getRegionId() const {
  return regionId_;
}

void SyncRecordingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SyncRecordingRulesRequest::getClusterId() const {
  return clusterId_;
}

void SyncRecordingRulesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string SyncRecordingRulesRequest::getTargetClusters() const {
  return targetClusters_;
}

void SyncRecordingRulesRequest::setTargetClusters(const std::string &targetClusters) {
  targetClusters_ = targetClusters;
  setParameter(std::string("TargetClusters"), targetClusters);
}


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

#include <alibabacloud/nlb/model/CancelShiftLoadBalancerZonesRequest.h>

using AlibabaCloud::Nlb::Model::CancelShiftLoadBalancerZonesRequest;

CancelShiftLoadBalancerZonesRequest::CancelShiftLoadBalancerZonesRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "CancelShiftLoadBalancerZones") {
  setMethod(HttpRequest::Method::Post);
}

CancelShiftLoadBalancerZonesRequest::~CancelShiftLoadBalancerZonesRequest() {}

std::string CancelShiftLoadBalancerZonesRequest::getClientToken() const {
  return clientToken_;
}

void CancelShiftLoadBalancerZonesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CancelShiftLoadBalancerZonesRequest::getRegionId() const {
  return regionId_;
}

void CancelShiftLoadBalancerZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool CancelShiftLoadBalancerZonesRequest::getDryRun() const {
  return dryRun_;
}

void CancelShiftLoadBalancerZonesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<CancelShiftLoadBalancerZonesRequest::ZoneMappings> CancelShiftLoadBalancerZonesRequest::getZoneMappings() const {
  return zoneMappings_;
}

void CancelShiftLoadBalancerZonesRequest::setZoneMappings(const std::vector<CancelShiftLoadBalancerZonesRequest::ZoneMappings> &zoneMappings) {
  zoneMappings_ = zoneMappings;
  for(int dep1 = 0; dep1 != zoneMappings.size(); dep1++) {
  auto zoneMappingsObj = zoneMappings.at(dep1);
  std::string zoneMappingsObjStr = std::string("ZoneMappings") + "." + std::to_string(dep1 + 1);
    setBodyParameter(zoneMappingsObjStr + ".VSwitchId", zoneMappingsObj.vSwitchId);
    setBodyParameter(zoneMappingsObjStr + ".ZoneId", zoneMappingsObj.zoneId);
  }
}

std::string CancelShiftLoadBalancerZonesRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CancelShiftLoadBalancerZonesRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}


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

#include <alibabacloud/alb/model/ListLoadBalancersRequest.h>

using AlibabaCloud::Alb::Model::ListLoadBalancersRequest;

ListLoadBalancersRequest::ListLoadBalancersRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListLoadBalancers") {
  setMethod(HttpRequest::Method::Post);
}

ListLoadBalancersRequest::~ListLoadBalancersRequest() {}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getLoadBalancerNames() const {
  return loadBalancerNames_;
}

void ListLoadBalancersRequest::setLoadBalancerNames(const std::vector<ListLoadBalancersRequest::std::string> &loadBalancerNames) {
  loadBalancerNames_ = loadBalancerNames;
  for(int dep1 = 0; dep1 != loadBalancerNames.size(); dep1++) {
    setParameter(std::string("LoadBalancerNames") + "." + std::to_string(dep1 + 1), loadBalancerNames[dep1]);
  }
}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void ListLoadBalancersRequest::setLoadBalancerIds(const std::vector<ListLoadBalancersRequest::std::string> &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
  for(int dep1 = 0; dep1 != loadBalancerIds.size(); dep1++) {
    setParameter(std::string("LoadBalancerIds") + "." + std::to_string(dep1 + 1), loadBalancerIds[dep1]);
  }
}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getLoadBalancerEditions() const {
  return loadBalancerEditions_;
}

void ListLoadBalancersRequest::setLoadBalancerEditions(const std::vector<ListLoadBalancersRequest::std::string> &loadBalancerEditions) {
  loadBalancerEditions_ = loadBalancerEditions;
  for(int dep1 = 0; dep1 != loadBalancerEditions.size(); dep1++) {
    setParameter(std::string("LoadBalancerEditions") + "." + std::to_string(dep1 + 1), loadBalancerEditions[dep1]);
  }
}

std::string ListLoadBalancersRequest::getAddressIpVersion() const {
  return addressIpVersion_;
}

void ListLoadBalancersRequest::setAddressIpVersion(const std::string &addressIpVersion) {
  addressIpVersion_ = addressIpVersion;
  setParameter(std::string("AddressIpVersion"), addressIpVersion);
}

std::string ListLoadBalancersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListLoadBalancersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListLoadBalancersRequest::getNextToken() const {
  return nextToken_;
}

void ListLoadBalancersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListLoadBalancersRequest::getLoadBalancerBussinessStatus() const {
  return loadBalancerBussinessStatus_;
}

void ListLoadBalancersRequest::setLoadBalancerBussinessStatus(const std::string &loadBalancerBussinessStatus) {
  loadBalancerBussinessStatus_ = loadBalancerBussinessStatus;
  setParameter(std::string("LoadBalancerBussinessStatus"), loadBalancerBussinessStatus);
}

std::string ListLoadBalancersRequest::getAddressType() const {
  return addressType_;
}

void ListLoadBalancersRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setParameter(std::string("AddressType"), addressType);
}

std::vector<ListLoadBalancersRequest::std::string> ListLoadBalancersRequest::getVpcIds() const {
  return vpcIds_;
}

void ListLoadBalancersRequest::setVpcIds(const std::vector<ListLoadBalancersRequest::std::string> &vpcIds) {
  vpcIds_ = vpcIds;
  for(int dep1 = 0; dep1 != vpcIds.size(); dep1++) {
    setParameter(std::string("VpcIds") + "." + std::to_string(dep1 + 1), vpcIds[dep1]);
  }
}

std::vector<ListLoadBalancersRequest::Tag> ListLoadBalancersRequest::getTag() const {
  return tag_;
}

void ListLoadBalancersRequest::setTag(const std::vector<ListLoadBalancersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string ListLoadBalancersRequest::getAddress() const {
  return address_;
}

void ListLoadBalancersRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string ListLoadBalancersRequest::getLoadBalancerStatus() const {
  return loadBalancerStatus_;
}

void ListLoadBalancersRequest::setLoadBalancerStatus(const std::string &loadBalancerStatus) {
  loadBalancerStatus_ = loadBalancerStatus;
  setParameter(std::string("LoadBalancerStatus"), loadBalancerStatus);
}

std::string ListLoadBalancersRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void ListLoadBalancersRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

int ListLoadBalancersRequest::getMaxResults() const {
  return maxResults_;
}

void ListLoadBalancersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListLoadBalancersRequest::getZoneId() const {
  return zoneId_;
}

void ListLoadBalancersRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string ListLoadBalancersRequest::getIpv6AddressType() const {
  return ipv6AddressType_;
}

void ListLoadBalancersRequest::setIpv6AddressType(const std::string &ipv6AddressType) {
  ipv6AddressType_ = ipv6AddressType;
  setParameter(std::string("Ipv6AddressType"), ipv6AddressType);
}

std::string ListLoadBalancersRequest::getPayType() const {
  return payType_;
}

void ListLoadBalancersRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}


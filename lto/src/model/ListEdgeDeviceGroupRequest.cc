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

#include <alibabacloud/lto/model/ListEdgeDeviceGroupRequest.h>

using AlibabaCloud::Lto::Model::ListEdgeDeviceGroupRequest;

ListEdgeDeviceGroupRequest::ListEdgeDeviceGroupRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListEdgeDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListEdgeDeviceGroupRequest::~ListEdgeDeviceGroupRequest() {}

int ListEdgeDeviceGroupRequest::getNum() const {
  return num_;
}

void ListEdgeDeviceGroupRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

int ListEdgeDeviceGroupRequest::getSize() const {
  return size_;
}

void ListEdgeDeviceGroupRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListEdgeDeviceGroupRequest::getRegionId() const {
  return regionId_;
}

void ListEdgeDeviceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEdgeDeviceGroupRequest::getName() const {
  return name_;
}

void ListEdgeDeviceGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListEdgeDeviceGroupRequest::getStatus() const {
  return status_;
}

void ListEdgeDeviceGroupRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


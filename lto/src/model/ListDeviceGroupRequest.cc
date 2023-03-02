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

#include <alibabacloud/lto/model/ListDeviceGroupRequest.h>

using AlibabaCloud::Lto::Model::ListDeviceGroupRequest;

ListDeviceGroupRequest::ListDeviceGroupRequest()
    : RpcServiceRequest("lto", "2021-07-07", "ListDeviceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListDeviceGroupRequest::~ListDeviceGroupRequest() {}

int ListDeviceGroupRequest::getNum() const {
  return num_;
}

void ListDeviceGroupRequest::setNum(int num) {
  num_ = num;
  setParameter(std::string("Num"), std::to_string(num));
}

int ListDeviceGroupRequest::getSize() const {
  return size_;
}

void ListDeviceGroupRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListDeviceGroupRequest::getRegionId() const {
  return regionId_;
}

void ListDeviceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDeviceGroupRequest::getName() const {
  return name_;
}

void ListDeviceGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListDeviceGroupRequest::getMemberName() const {
  return memberName_;
}

void ListDeviceGroupRequest::setMemberName(const std::string &memberName) {
  memberName_ = memberName;
  setParameter(std::string("MemberName"), memberName);
}

std::string ListDeviceGroupRequest::getStatus() const {
  return status_;
}

void ListDeviceGroupRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}


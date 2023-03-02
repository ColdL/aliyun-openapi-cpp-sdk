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

#include <alibabacloud/swas-open/model/DescribeInvocationsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeInvocationsRequest;

DescribeInvocationsRequest::DescribeInvocationsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeInvocations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInvocationsRequest::~DescribeInvocationsRequest() {}

std::string DescribeInvocationsRequest::getInvokeStatus() const {
  return invokeStatus_;
}

void DescribeInvocationsRequest::setInvokeStatus(const std::string &invokeStatus) {
  invokeStatus_ = invokeStatus;
  setParameter(std::string("InvokeStatus"), invokeStatus);
}

int DescribeInvocationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInvocationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInvocationsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInvocationsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInvocationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeInvocationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeInvocationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInvocationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}


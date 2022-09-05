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

#include <alibabacloud/arms/model/DescribeContactGroupsRequest.h>

using AlibabaCloud::ARMS::Model::DescribeContactGroupsRequest;

DescribeContactGroupsRequest::DescribeContactGroupsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DescribeContactGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContactGroupsRequest::~DescribeContactGroupsRequest() {}

long DescribeContactGroupsRequest::getSize() const {
  return size_;
}

void DescribeContactGroupsRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

bool DescribeContactGroupsRequest::getIsDetail() const {
  return isDetail_;
}

void DescribeContactGroupsRequest::setIsDetail(bool isDetail) {
  isDetail_ = isDetail;
  setParameter(std::string("IsDetail"), isDetail ? "true" : "false");
}

long DescribeContactGroupsRequest::getPage() const {
  return page_;
}

void DescribeContactGroupsRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeContactGroupsRequest::getContactGroupName() const {
  return contactGroupName_;
}

void DescribeContactGroupsRequest::setContactGroupName(const std::string &contactGroupName) {
  contactGroupName_ = contactGroupName;
  setParameter(std::string("ContactGroupName"), contactGroupName);
}


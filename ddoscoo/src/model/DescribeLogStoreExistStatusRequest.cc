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

#include <alibabacloud/ddoscoo/model/DescribeLogStoreExistStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeLogStoreExistStatusRequest;

DescribeLogStoreExistStatusRequest::DescribeLogStoreExistStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeLogStoreExistStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogStoreExistStatusRequest::~DescribeLogStoreExistStatusRequest() {}

std::string DescribeLogStoreExistStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeLogStoreExistStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeLogStoreExistStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeLogStoreExistStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeLogStoreExistStatusRequest::getLang() const {
  return lang_;
}

void DescribeLogStoreExistStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


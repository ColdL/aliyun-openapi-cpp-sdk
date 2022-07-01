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

#include <alibabacloud/ddoscoo/model/DescribeWebAccessLogStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeWebAccessLogStatusRequest;

DescribeWebAccessLogStatusRequest::DescribeWebAccessLogStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeWebAccessLogStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebAccessLogStatusRequest::~DescribeWebAccessLogStatusRequest() {}

std::string DescribeWebAccessLogStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeWebAccessLogStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeWebAccessLogStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebAccessLogStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeWebAccessLogStatusRequest::getDomain() const {
  return domain_;
}

void DescribeWebAccessLogStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string DescribeWebAccessLogStatusRequest::getLang() const {
  return lang_;
}

void DescribeWebAccessLogStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


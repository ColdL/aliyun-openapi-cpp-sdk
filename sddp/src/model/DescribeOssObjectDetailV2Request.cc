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

#include <alibabacloud/sddp/model/DescribeOssObjectDetailV2Request.h>

using AlibabaCloud::Sddp::Model::DescribeOssObjectDetailV2Request;

DescribeOssObjectDetailV2Request::DescribeOssObjectDetailV2Request()
    : RpcServiceRequest("sddp", "2019-01-03", "DescribeOssObjectDetailV2") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOssObjectDetailV2Request::~DescribeOssObjectDetailV2Request() {}

int DescribeOssObjectDetailV2Request::getFeatureType() const {
  return featureType_;
}

void DescribeOssObjectDetailV2Request::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::string DescribeOssObjectDetailV2Request::getSourceIp() const {
  return sourceIp_;
}

void DescribeOssObjectDetailV2Request::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeOssObjectDetailV2Request::getId() const {
  return id_;
}

void DescribeOssObjectDetailV2Request::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string DescribeOssObjectDetailV2Request::getLang() const {
  return lang_;
}

void DescribeOssObjectDetailV2Request::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


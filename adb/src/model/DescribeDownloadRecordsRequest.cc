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

#include <alibabacloud/adb/model/DescribeDownloadRecordsRequest.h>

using AlibabaCloud::Adb::Model::DescribeDownloadRecordsRequest;

DescribeDownloadRecordsRequest::DescribeDownloadRecordsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeDownloadRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDownloadRecordsRequest::~DescribeDownloadRecordsRequest() {}

std::string DescribeDownloadRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDownloadRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDownloadRecordsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDownloadRecordsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDownloadRecordsRequest::getLang() const {
  return lang_;
}

void DescribeDownloadRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}


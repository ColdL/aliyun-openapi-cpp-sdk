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

#include <alibabacloud/sasti/model/DescribeFileReportRequest.h>

using AlibabaCloud::Sasti::Model::DescribeFileReportRequest;

DescribeFileReportRequest::DescribeFileReportRequest()
    : RpcServiceRequest("sasti", "2020-05-12", "DescribeFileReport") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFileReportRequest::~DescribeFileReportRequest() {}

std::string DescribeFileReportRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeFileReportRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeFileReportRequest::getField() const {
  return field_;
}

void DescribeFileReportRequest::setField(const std::string &field) {
  field_ = field;
  setParameter(std::string("Field"), field);
}

std::string DescribeFileReportRequest::getServiceLang() const {
  return serviceLang_;
}

void DescribeFileReportRequest::setServiceLang(const std::string &serviceLang) {
  serviceLang_ = serviceLang;
  setParameter(std::string("ServiceLang"), serviceLang);
}

std::string DescribeFileReportRequest::getFileHash() const {
  return fileHash_;
}

void DescribeFileReportRequest::setFileHash(const std::string &fileHash) {
  fileHash_ = fileHash;
  setParameter(std::string("FileHash"), fileHash);
}


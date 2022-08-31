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

#include <alibabacloud/scdn/model/DescribeScdnDomainRealTimeSrcTrafficDataRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainRealTimeSrcTrafficDataRequest;

DescribeScdnDomainRealTimeSrcTrafficDataRequest::DescribeScdnDomainRealTimeSrcTrafficDataRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainRealTimeSrcTrafficData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainRealTimeSrcTrafficDataRequest::~DescribeScdnDomainRealTimeSrcTrafficDataRequest() {}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeScdnDomainRealTimeSrcTrafficDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnDomainRealTimeSrcTrafficDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}


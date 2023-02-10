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

#include <alibabacloud/sas/model/GetInterceptionRuleDetailRequest.h>

using AlibabaCloud::Sas::Model::GetInterceptionRuleDetailRequest;

GetInterceptionRuleDetailRequest::GetInterceptionRuleDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetInterceptionRuleDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetInterceptionRuleDetailRequest::~GetInterceptionRuleDetailRequest() {}

std::string GetInterceptionRuleDetailRequest::getClusterId() const {
  return clusterId_;
}

void GetInterceptionRuleDetailRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetInterceptionRuleDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void GetInterceptionRuleDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetInterceptionRuleDetailRequest::getRuleId() const {
  return ruleId_;
}

void GetInterceptionRuleDetailRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}


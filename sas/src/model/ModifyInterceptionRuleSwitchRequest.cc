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

#include <alibabacloud/sas/model/ModifyInterceptionRuleSwitchRequest.h>

using AlibabaCloud::Sas::Model::ModifyInterceptionRuleSwitchRequest;

ModifyInterceptionRuleSwitchRequest::ModifyInterceptionRuleSwitchRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyInterceptionRuleSwitch") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInterceptionRuleSwitchRequest::~ModifyInterceptionRuleSwitchRequest() {}

std::string ModifyInterceptionRuleSwitchRequest::getClusterId() const {
  return clusterId_;
}

void ModifyInterceptionRuleSwitchRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ModifyInterceptionRuleSwitchRequest::getRuleIds() const {
  return ruleIds_;
}

void ModifyInterceptionRuleSwitchRequest::setRuleIds(const std::string &ruleIds) {
  ruleIds_ = ruleIds;
  setParameter(std::string("RuleIds"), ruleIds);
}

std::string ModifyInterceptionRuleSwitchRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyInterceptionRuleSwitchRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyInterceptionRuleSwitchRequest::getRuleSwitch() const {
  return ruleSwitch_;
}

void ModifyInterceptionRuleSwitchRequest::setRuleSwitch(int ruleSwitch) {
  ruleSwitch_ = ruleSwitch;
  setParameter(std::string("RuleSwitch"), std::to_string(ruleSwitch));
}


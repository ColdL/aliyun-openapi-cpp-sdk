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

#include <alibabacloud/ccc/model/GetCampaignRequest.h>

using AlibabaCloud::CCC::Model::GetCampaignRequest;

GetCampaignRequest::GetCampaignRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "GetCampaign") {
  setMethod(HttpRequest::Method::Post);
}

GetCampaignRequest::~GetCampaignRequest() {}

std::string GetCampaignRequest::getInstanceId() const {
  return instanceId_;
}

void GetCampaignRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetCampaignRequest::getCampaignId() const {
  return campaignId_;
}

void GetCampaignRequest::setCampaignId(const std::string &campaignId) {
  campaignId_ = campaignId;
  setParameter(std::string("CampaignId"), campaignId);
}


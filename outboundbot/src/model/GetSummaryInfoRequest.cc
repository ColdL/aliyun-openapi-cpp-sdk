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

#include <alibabacloud/outboundbot/model/GetSummaryInfoRequest.h>

using AlibabaCloud::OutboundBot::Model::GetSummaryInfoRequest;

GetSummaryInfoRequest::GetSummaryInfoRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "GetSummaryInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetSummaryInfoRequest::~GetSummaryInfoRequest()
{}

std::vector<std::string> GetSummaryInfoRequest::getInstanceIdList()const
{
	return instanceIdList_;
}

void GetSummaryInfoRequest::setInstanceIdList(const std::vector<std::string>& instanceIdList)
{
	instanceIdList_ = instanceIdList;
	for(int dep1 = 0; dep1!= instanceIdList.size(); dep1++) {
		setParameter("InstanceIdList."+ std::to_string(dep1), instanceIdList.at(dep1));
	}
}


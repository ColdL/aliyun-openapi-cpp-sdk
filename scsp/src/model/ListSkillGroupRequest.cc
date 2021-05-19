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

#include <alibabacloud/scsp/model/ListSkillGroupRequest.h>

using AlibabaCloud::Scsp::Model::ListSkillGroupRequest;

ListSkillGroupRequest::ListSkillGroupRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "ListSkillGroup")
{
	setMethod(HttpRequest::Method::Get);
}

ListSkillGroupRequest::~ListSkillGroupRequest()
{}

std::string ListSkillGroupRequest::getClientToken()const
{
	return clientToken_;
}

void ListSkillGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ListSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListSkillGroupRequest::getChannelType()const
{
	return channelType_;
}

void ListSkillGroupRequest::setChannelType(int channelType)
{
	channelType_ = channelType;
	setParameter("ChannelType", std::to_string(channelType));
}


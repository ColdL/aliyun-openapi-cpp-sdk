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

#include <alibabacloud/scsp/model/GetUserTokenRequest.h>

using AlibabaCloud::Scsp::Model::GetUserTokenRequest;

GetUserTokenRequest::GetUserTokenRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetUserToken")
{
	setMethod(HttpRequest::Method::Post);
}

GetUserTokenRequest::~GetUserTokenRequest()
{}

std::string GetUserTokenRequest::getNick()const
{
	return nick_;
}

void GetUserTokenRequest::setNick(const std::string& nick)
{
	nick_ = nick;
	setBodyParameter("Nick", nick);
}

std::string GetUserTokenRequest::getInstanceId()const
{
	return instanceId_;
}

void GetUserTokenRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetUserTokenRequest::getAppKey()const
{
	return appKey_;
}

void GetUserTokenRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string GetUserTokenRequest::getUserId()const
{
	return userId_;
}

void GetUserTokenRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setBodyParameter("UserId", userId);
}


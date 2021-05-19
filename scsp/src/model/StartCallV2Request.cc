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

#include <alibabacloud/scsp/model/StartCallV2Request.h>

using AlibabaCloud::Scsp::Model::StartCallV2Request;

StartCallV2Request::StartCallV2Request() :
	RpcServiceRequest("scsp", "2020-07-02", "StartCallV2")
{
	setMethod(HttpRequest::Method::Post);
}

StartCallV2Request::~StartCallV2Request()
{}

std::string StartCallV2Request::getClientToken()const
{
	return clientToken_;
}

void StartCallV2Request::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string StartCallV2Request::getInstanceId()const
{
	return instanceId_;
}

void StartCallV2Request::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string StartCallV2Request::getAccountName()const
{
	return accountName_;
}

void StartCallV2Request::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string StartCallV2Request::getCaller()const
{
	return caller_;
}

void StartCallV2Request::setCaller(const std::string& caller)
{
	caller_ = caller;
	setBodyParameter("Caller", caller);
}

std::string StartCallV2Request::getCallee()const
{
	return callee_;
}

void StartCallV2Request::setCallee(const std::string& callee)
{
	callee_ = callee;
	setBodyParameter("Callee", callee);
}

std::string StartCallV2Request::getJsonMsg()const
{
	return jsonMsg_;
}

void StartCallV2Request::setJsonMsg(const std::string& jsonMsg)
{
	jsonMsg_ = jsonMsg;
	setBodyParameter("JsonMsg", jsonMsg);
}


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

#include <alibabacloud/devops/model/GetApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetApplicationResult::GetApplicationResult() :
	ServiceResult()
{}

GetApplicationResult::GetApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationResult::~GetApplicationResult()
{}

void GetApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["name"].isNull())
		name_ = value["name"].asString();
	if(!value["gmtCreate"].isNull())
		gmtCreate_ = value["gmtCreate"].asString();
	if(!value["creatorAccountId"].isNull())
		creatorAccountId_ = value["creatorAccountId"].asString();
	if(!value["description"].isNull())
		description_ = value["description"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetApplicationResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string GetApplicationResult::getDescription()const
{
	return description_;
}

std::string GetApplicationResult::getRequestId()const
{
	return requestId_;
}

std::string GetApplicationResult::getCreatorAccountId()const
{
	return creatorAccountId_;
}

std::string GetApplicationResult::getName()const
{
	return name_;
}


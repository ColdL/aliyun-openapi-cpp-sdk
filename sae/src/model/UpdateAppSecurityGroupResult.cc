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

#include <alibabacloud/sae/model/UpdateAppSecurityGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

UpdateAppSecurityGroupResult::UpdateAppSecurityGroupResult() :
	ServiceResult()
{}

UpdateAppSecurityGroupResult::UpdateAppSecurityGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateAppSecurityGroupResult::~UpdateAppSecurityGroupResult()
{}

void UpdateAppSecurityGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateAppSecurityGroupResult::getMessage()const
{
	return message_;
}

std::string UpdateAppSecurityGroupResult::getTraceId()const
{
	return traceId_;
}

std::string UpdateAppSecurityGroupResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateAppSecurityGroupResult::getCode()const
{
	return code_;
}

bool UpdateAppSecurityGroupResult::getSuccess()const
{
	return success_;
}


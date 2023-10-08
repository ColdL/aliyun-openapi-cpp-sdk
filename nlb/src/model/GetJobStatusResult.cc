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

#include <alibabacloud/nlb/model/GetJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

GetJobStatusResult::GetJobStatusResult() :
	ServiceResult()
{}

GetJobStatusResult::GetJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobStatusResult::~GetJobStatusResult()
{}

void GetJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string GetJobStatusResult::getStatus()const
{
	return status_;
}

std::string GetJobStatusResult::getMessage()const
{
	return message_;
}

int GetJobStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetJobStatusResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetJobStatusResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string GetJobStatusResult::getCode()const
{
	return code_;
}

bool GetJobStatusResult::getSuccess()const
{
	return success_;
}


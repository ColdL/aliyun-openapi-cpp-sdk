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

#include <alibabacloud/devops/model/CreateFlowTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateFlowTagResult::CreateFlowTagResult() :
	ServiceResult()
{}

CreateFlowTagResult::CreateFlowTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFlowTagResult::~CreateFlowTagResult()
{}

void CreateFlowTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["id"].isNull())
		id_ = std::stol(value["id"].asString());

}

std::string CreateFlowTagResult::getRequestId()const
{
	return requestId_;
}

std::string CreateFlowTagResult::getErrorCode()const
{
	return errorCode_;
}

long CreateFlowTagResult::getId()const
{
	return id_;
}

std::string CreateFlowTagResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateFlowTagResult::getSuccess()const
{
	return success_;
}


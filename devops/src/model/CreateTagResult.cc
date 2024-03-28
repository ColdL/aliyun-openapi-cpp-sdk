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

#include <alibabacloud/devops/model/CreateTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateTagResult::CreateTagResult() :
	ServiceResult()
{}

CreateTagResult::CreateTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateTagResult::~CreateTagResult()
{}

void CreateTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["message"].isNull())
		result_.message = resultNode["message"].asString();
	auto commitNode = resultNode["commit"];
	if(!commitNode["id"].isNull())
		result_.commit.id = commitNode["id"].asString();
	if(!commitNode["shortId"].isNull())
		result_.commit.shortId = commitNode["shortId"].asString();
	if(!commitNode["title"].isNull())
		result_.commit.title = commitNode["title"].asString();
	if(!commitNode["message"].isNull())
		result_.commit.message = commitNode["message"].asString();
	if(!commitNode["createdAt"].isNull())
		result_.commit.createdAt = commitNode["createdAt"].asString();
	if(!commitNode["authorName"].isNull())
		result_.commit.authorName = commitNode["authorName"].asString();
	if(!commitNode["authorEmail"].isNull())
		result_.commit.authorEmail = commitNode["authorEmail"].asString();
	if(!commitNode["authoredDate"].isNull())
		result_.commit.authoredDate = commitNode["authoredDate"].asString();
	if(!commitNode["committerName"].isNull())
		result_.commit.committerName = commitNode["committerName"].asString();
	if(!commitNode["committerEmail"].isNull())
		result_.commit.committerEmail = commitNode["committerEmail"].asString();
	if(!commitNode["committedDate"].isNull())
		result_.commit.committedDate = commitNode["committedDate"].asString();
		auto allParentIds = commitNode["parentIds"]["parent_ids"];
		for (auto value : allParentIds)
			result_.commit.parentIds.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateTagResult::getRequestId()const
{
	return requestId_;
}

std::string CreateTagResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateTagResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateTagResult::getSuccess()const
{
	return success_;
}

CreateTagResult::Result CreateTagResult::getResult()const
{
	return result_;
}


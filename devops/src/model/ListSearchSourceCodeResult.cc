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

#include <alibabacloud/devops/model/ListSearchSourceCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListSearchSourceCodeResult::ListSearchSourceCodeResult() :
	ServiceResult()
{}

ListSearchSourceCodeResult::ListSearchSourceCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSearchSourceCodeResult::~ListSearchSourceCodeResult()
{}

void ListSearchSourceCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["docId"].isNull())
			resultObject.docId = valueresultresultItem["docId"].asString();
		auto highlightTextMapNode = value["highlightTextMap"];
		if(!highlightTextMapNode["organizationId"].isNull())
			resultObject.highlightTextMap.organizationId = highlightTextMapNode["organizationId"].asString();
		if(!highlightTextMapNode["fileName"].isNull())
			resultObject.highlightTextMap.fileName = highlightTextMapNode["fileName"].asString();
		if(!highlightTextMapNode["clob"].isNull())
			resultObject.highlightTextMap.clob = highlightTextMapNode["clob"].asString();
		if(!highlightTextMapNode["language"].isNull())
			resultObject.highlightTextMap.language = highlightTextMapNode["language"].asString();
		auto sourceNode = value["source"];
		if(!sourceNode["repoPath"].isNull())
			resultObject.source.repoPath = sourceNode["repoPath"].asString();
		if(!sourceNode["fileName"].isNull())
			resultObject.source.fileName = sourceNode["fileName"].asString();
		if(!sourceNode["filePath"].isNull())
			resultObject.source.filePath = sourceNode["filePath"].asString();
		if(!sourceNode["language"].isNull())
			resultObject.source.language = sourceNode["language"].asString();
		if(!sourceNode["checkinDate"].isNull())
			resultObject.source.checkinDate = sourceNode["checkinDate"].asString();
		if(!sourceNode["branch"].isNull())
			resultObject.source.branch = sourceNode["branch"].asString();
		if(!sourceNode["organizationId"].isNull())
			resultObject.source.organizationId = sourceNode["organizationId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListSearchSourceCodeResult::ResultItem> ListSearchSourceCodeResult::getresult()const
{
	return result_;
}

std::string ListSearchSourceCodeResult::getRequestId()const
{
	return requestId_;
}

long ListSearchSourceCodeResult::getTotal()const
{
	return total_;
}

std::string ListSearchSourceCodeResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSearchSourceCodeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListSearchSourceCodeResult::getSuccess()const
{
	return success_;
}


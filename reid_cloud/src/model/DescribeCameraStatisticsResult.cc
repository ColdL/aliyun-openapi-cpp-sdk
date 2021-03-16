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

#include <alibabacloud/reid_cloud/model/DescribeCameraStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

DescribeCameraStatisticsResult::DescribeCameraStatisticsResult() :
	ServiceResult()
{}

DescribeCameraStatisticsResult::DescribeCameraStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCameraStatisticsResult::~DescribeCameraStatisticsResult()
{}

void DescribeCameraStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPvStatisticResultsNode = value["PvStatisticResults"]["PvStatisticResult"];
	for (auto valuePvStatisticResultsPvStatisticResult : allPvStatisticResultsNode)
	{
		PvStatisticResult pvStatisticResultsObject;
		if(!valuePvStatisticResultsPvStatisticResult["IpcId"].isNull())
			pvStatisticResultsObject.ipcId = std::stol(valuePvStatisticResultsPvStatisticResult["IpcId"].asString());
		if(!valuePvStatisticResultsPvStatisticResult["MaxDataTime"].isNull())
			pvStatisticResultsObject.maxDataTime = std::stol(valuePvStatisticResultsPvStatisticResult["MaxDataTime"].asString());
		if(!valuePvStatisticResultsPvStatisticResult["PvCount"].isNull())
			pvStatisticResultsObject.pvCount = std::stol(valuePvStatisticResultsPvStatisticResult["PvCount"].asString());
		if(!valuePvStatisticResultsPvStatisticResult["PvType"].isNull())
			pvStatisticResultsObject.pvType = valuePvStatisticResultsPvStatisticResult["PvType"].asString();
		if(!valuePvStatisticResultsPvStatisticResult["LocationId"].isNull())
			pvStatisticResultsObject.locationId = std::stol(valuePvStatisticResultsPvStatisticResult["LocationId"].asString());
		auto allPvRectsNode = valuePvStatisticResultsPvStatisticResult["PvRects"]["Rect"];
		for (auto valuePvStatisticResultsPvStatisticResultPvRectsRect : allPvRectsNode)
		{
			PvStatisticResult::Rect pvRectsObject;
			if(!valuePvStatisticResultsPvStatisticResultPvRectsRect["Right"].isNull())
				pvRectsObject.right = std::stof(valuePvStatisticResultsPvStatisticResultPvRectsRect["Right"].asString());
			if(!valuePvStatisticResultsPvStatisticResultPvRectsRect["Left"].isNull())
				pvRectsObject.left = std::stof(valuePvStatisticResultsPvStatisticResultPvRectsRect["Left"].asString());
			if(!valuePvStatisticResultsPvStatisticResultPvRectsRect["Top"].isNull())
				pvRectsObject.top = std::stof(valuePvStatisticResultsPvStatisticResultPvRectsRect["Top"].asString());
			if(!valuePvStatisticResultsPvStatisticResultPvRectsRect["Bottom"].isNull())
				pvRectsObject.bottom = std::stof(valuePvStatisticResultsPvStatisticResultPvRectsRect["Bottom"].asString());
			pvStatisticResultsObject.pvRects.push_back(pvRectsObject);
		}
		pvStatisticResults_.push_back(pvStatisticResultsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::vector<DescribeCameraStatisticsResult::PvStatisticResult> DescribeCameraStatisticsResult::getPvStatisticResults()const
{
	return pvStatisticResults_;
}

std::string DescribeCameraStatisticsResult::getMessage()const
{
	return message_;
}

std::string DescribeCameraStatisticsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeCameraStatisticsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeCameraStatisticsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeCameraStatisticsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeCameraStatisticsResult::getCode()const
{
	return code_;
}

bool DescribeCameraStatisticsResult::getSuccess()const
{
	return success_;
}


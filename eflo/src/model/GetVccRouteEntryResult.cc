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

#include <alibabacloud/eflo/model/GetVccRouteEntryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetVccRouteEntryResult::GetVccRouteEntryResult() :
	ServiceResult()
{}

GetVccRouteEntryResult::GetVccRouteEntryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVccRouteEntryResult::~GetVccRouteEntryResult()
{}

void GetVccRouteEntryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["VccRouteEntryId"].isNull())
		content_.vccRouteEntryId = contentNode["VccRouteEntryId"].asString();
	if(!contentNode["TenantId"].isNull())
		content_.tenantId = contentNode["TenantId"].asString();
	if(!contentNode["VccId"].isNull())
		content_.vccId = contentNode["VccId"].asString();
	if(!contentNode["DestinationCidrBlock"].isNull())
		content_.destinationCidrBlock = contentNode["DestinationCidrBlock"].asString();
	if(!contentNode["NextHopType"].isNull())
		content_.nextHopType = contentNode["NextHopType"].asString();
	if(!contentNode["NextHopId"].isNull())
		content_.nextHopId = contentNode["NextHopId"].asString();
	if(!contentNode["RouteType"].isNull())
		content_.routeType = contentNode["RouteType"].asString();
	if(!contentNode["Status"].isNull())
		content_.status = contentNode["Status"].asString();
	if(!contentNode["GmtModified"].isNull())
		content_.gmtModified = contentNode["GmtModified"].asString();
	if(!contentNode["Message"].isNull())
		content_.message = contentNode["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVccRouteEntryResult::getMessage()const
{
	return message_;
}

GetVccRouteEntryResult::Content GetVccRouteEntryResult::getContent()const
{
	return content_;
}

int GetVccRouteEntryResult::getCode()const
{
	return code_;
}


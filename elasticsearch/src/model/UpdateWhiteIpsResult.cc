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

#include <alibabacloud/elasticsearch/model/UpdateWhiteIpsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

UpdateWhiteIpsResult::UpdateWhiteIpsResult() :
	ServiceResult()
{}

UpdateWhiteIpsResult::UpdateWhiteIpsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateWhiteIpsResult::~UpdateWhiteIpsResult()
{}

void UpdateWhiteIpsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto networkConfigNode = resultNode["networkConfig"];
	auto allwhiteIpGroupListNode = networkConfigNode["whiteIpGroupList"]["whiteIpGroupListItem"];
	for (auto networkConfigNodewhiteIpGroupListwhiteIpGroupListItem : allwhiteIpGroupListNode)
	{
		Result::NetworkConfig::WhiteIpGroupListItem whiteIpGroupListItemObject;
		if(!networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["groupName"].isNull())
			whiteIpGroupListItemObject.groupName = networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["groupName"].asString();
		if(!networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["whiteIpType"].isNull())
			whiteIpGroupListItemObject.whiteIpType = networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["whiteIpType"].asString();
		auto allIps = value["ips"]["ips"];
		for (auto value : allIps)
			whiteIpGroupListItemObject.ips.push_back(value.asString());
		result_.networkConfig.whiteIpGroupList.push_back(whiteIpGroupListItemObject);
	}
		auto allEsIPWhitelist = resultNode["esIPWhitelist"]["esIPWhitelist"];
		for (auto value : allEsIPWhitelist)
			result_.esIPWhitelist.push_back(value.asString());

}

UpdateWhiteIpsResult::Result UpdateWhiteIpsResult::getResult()const
{
	return result_;
}


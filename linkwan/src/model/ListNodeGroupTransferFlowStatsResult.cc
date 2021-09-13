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

#include <alibabacloud/linkwan/model/ListNodeGroupTransferFlowStatsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNodeGroupTransferFlowStatsResult::ListNodeGroupTransferFlowStatsResult() :
	ServiceResult()
{}

ListNodeGroupTransferFlowStatsResult::ListNodeGroupTransferFlowStatsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeGroupTransferFlowStatsResult::~ListNodeGroupTransferFlowStatsResult()
{}

void ListNodeGroupTransferFlowStatsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["FlowStat"];
	for (auto valueDataFlowStat : allDataNode)
	{
		FlowStat dataObject;
		if(!valueDataFlowStat["StatMillis"].isNull())
			dataObject.statMillis = std::stol(valueDataFlowStat["StatMillis"].asString());
		if(!valueDataFlowStat["UplinkCount"].isNull())
			dataObject.uplinkCount = std::stol(valueDataFlowStat["UplinkCount"].asString());
		if(!valueDataFlowStat["DownlinkCount"].isNull())
			dataObject.downlinkCount = std::stol(valueDataFlowStat["DownlinkCount"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListNodeGroupTransferFlowStatsResult::FlowStat> ListNodeGroupTransferFlowStatsResult::getData()const
{
	return data_;
}

bool ListNodeGroupTransferFlowStatsResult::getSuccess()const
{
	return success_;
}


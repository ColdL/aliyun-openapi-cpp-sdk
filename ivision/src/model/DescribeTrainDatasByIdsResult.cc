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

#include <alibabacloud/ivision/model/DescribeTrainDatasByIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeTrainDatasByIdsResult::DescribeTrainDatasByIdsResult() :
	ServiceResult()
{}

DescribeTrainDatasByIdsResult::DescribeTrainDatasByIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTrainDatasByIdsResult::~DescribeTrainDatasByIdsResult()
{}

void DescribeTrainDatasByIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTrainDatas = value["TrainDatas"]["TrainData"];
	for (auto value : allTrainDatas)
	{
		TrainData trainDatasObject;
		if(!value["ProjectId"].isNull())
			trainDatasObject.projectId = value["ProjectId"].asString();
		if(!value["IterationId"].isNull())
			trainDatasObject.iterationId = value["IterationId"].asString();
		if(!value["DataId"].isNull())
			trainDatasObject.dataId = value["DataId"].asString();
		if(!value["DataName"].isNull())
			trainDatasObject.dataName = value["DataName"].asString();
		if(!value["DataUrl"].isNull())
			trainDatasObject.dataUrl = value["DataUrl"].asString();
		if(!value["CreationTime"].isNull())
			trainDatasObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			trainDatasObject.status = value["Status"].asString();
		if(!value["TagStatus"].isNull())
			trainDatasObject.tagStatus = value["TagStatus"].asString();
		auto allTagItems = value["TagItems"]["TagItem"];
		for (auto value : allTagItems)
		{
			TrainData::TagItem tagItemsObject;
			if(!value["TagId"].isNull())
				tagItemsObject.tagId = value["TagId"].asString();
			if(!value["RegionType"].isNull())
				tagItemsObject.regionType = value["RegionType"].asString();
			auto regionNode = value["Region"];
			if(!regionNode["Left"].isNull())
				tagItemsObject.region.left = regionNode["Left"].asString();
			if(!regionNode["Top"].isNull())
				tagItemsObject.region.top = regionNode["Top"].asString();
			if(!regionNode["Width"].isNull())
				tagItemsObject.region.width = regionNode["Width"].asString();
			if(!regionNode["Height"].isNull())
				tagItemsObject.region.height = regionNode["Height"].asString();
			trainDatasObject.tagItems.push_back(tagItemsObject);
		}
		trainDatas_.push_back(trainDatasObject);
	}

}

std::vector<DescribeTrainDatasByIdsResult::TrainData> DescribeTrainDatasByIdsResult::getTrainDatas()const
{
	return trainDatas_;
}


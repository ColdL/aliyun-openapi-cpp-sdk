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

#include <alibabacloud/adb/model/DescribeDBClusterPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterPerformanceResult::DescribeDBClusterPerformanceResult() :
	ServiceResult()
{}

DescribeDBClusterPerformanceResult::DescribeDBClusterPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterPerformanceResult::~DescribeDBClusterPerformanceResult()
{}

void DescribeDBClusterPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformancesNode = value["Performances"]["PerformanceItem"];
	for (auto valuePerformancesPerformanceItem : allPerformancesNode)
	{
		PerformanceItem performancesObject;
		if(!valuePerformancesPerformanceItem["Key"].isNull())
			performancesObject.key = valuePerformancesPerformanceItem["Key"].asString();
		if(!valuePerformancesPerformanceItem["Unit"].isNull())
			performancesObject.unit = valuePerformancesPerformanceItem["Unit"].asString();
		auto allSeriesNode = allPerformancesNode["Series"]["SeriesItem"];
		for (auto allPerformancesNodeSeriesSeriesItem : allSeriesNode)
		{
			PerformanceItem::SeriesItem seriesObject;
			if(!allPerformancesNodeSeriesSeriesItem["Name"].isNull())
				seriesObject.name = allPerformancesNodeSeriesSeriesItem["Name"].asString();
			auto allValues = value["Values"]["Values"];
			for (auto value : allValues)
				seriesObject.values.push_back(value.asString());
			performancesObject.series.push_back(seriesObject);
		}
		performances_.push_back(performancesObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::string DescribeDBClusterPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBClusterPerformanceResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterPerformanceResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDBClusterPerformanceResult::PerformanceItem> DescribeDBClusterPerformanceResult::getPerformances()const
{
	return performances_;
}


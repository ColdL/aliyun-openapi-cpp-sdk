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

#include <alibabacloud/scdn/model/DescribeScdnDomainRegionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDomainRegionDataResult::DescribeScdnDomainRegionDataResult() :
	ServiceResult()
{}

DescribeScdnDomainRegionDataResult::DescribeScdnDomainRegionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDomainRegionDataResult::~DescribeScdnDomainRegionDataResult()
{}

void DescribeScdnDomainRegionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allValueNode = value["Value"]["RegionProportionData"];
	for (auto valueValueRegionProportionData : allValueNode)
	{
		RegionProportionData valueObject;
		if(!valueValueRegionProportionData["TotalQuery"].isNull())
			valueObject.totalQuery = valueValueRegionProportionData["TotalQuery"].asString();
		if(!valueValueRegionProportionData["TotalBytes"].isNull())
			valueObject.totalBytes = valueValueRegionProportionData["TotalBytes"].asString();
		if(!valueValueRegionProportionData["AvgResponseRate"].isNull())
			valueObject.avgResponseRate = valueValueRegionProportionData["AvgResponseRate"].asString();
		if(!valueValueRegionProportionData["AvgResponseTime"].isNull())
			valueObject.avgResponseTime = valueValueRegionProportionData["AvgResponseTime"].asString();
		if(!valueValueRegionProportionData["ReqErrRate"].isNull())
			valueObject.reqErrRate = valueValueRegionProportionData["ReqErrRate"].asString();
		if(!valueValueRegionProportionData["AvgObjectSize"].isNull())
			valueObject.avgObjectSize = valueValueRegionProportionData["AvgObjectSize"].asString();
		if(!valueValueRegionProportionData["Bps"].isNull())
			valueObject.bps = valueValueRegionProportionData["Bps"].asString();
		if(!valueValueRegionProportionData["Qps"].isNull())
			valueObject.qps = valueValueRegionProportionData["Qps"].asString();
		if(!valueValueRegionProportionData["RegionEname"].isNull())
			valueObject.regionEname = valueValueRegionProportionData["RegionEname"].asString();
		if(!valueValueRegionProportionData["Region"].isNull())
			valueObject.region = valueValueRegionProportionData["Region"].asString();
		if(!valueValueRegionProportionData["Proportion"].isNull())
			valueObject.proportion = valueValueRegionProportionData["Proportion"].asString();
		if(!valueValueRegionProportionData["BytesProportion"].isNull())
			valueObject.bytesProportion = valueValueRegionProportionData["BytesProportion"].asString();
		value_.push_back(valueObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeScdnDomainRegionDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnDomainRegionDataResult::getDomainName()const
{
	return domainName_;
}

std::vector<DescribeScdnDomainRegionDataResult::RegionProportionData> DescribeScdnDomainRegionDataResult::getValue()const
{
	return value_;
}

std::string DescribeScdnDomainRegionDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScdnDomainRegionDataResult::getDataInterval()const
{
	return dataInterval_;
}


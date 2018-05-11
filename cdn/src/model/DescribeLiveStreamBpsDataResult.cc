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

#include <alibabacloud/cdn/model/DescribeLiveStreamBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamBpsDataResult::DescribeLiveStreamBpsDataResult() :
	ServiceResult()
{}

DescribeLiveStreamBpsDataResult::DescribeLiveStreamBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamBpsDataResult::~DescribeLiveStreamBpsDataResult()
{}

void DescribeLiveStreamBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBpsDatas = value["BpsDatas"]["DomainBpsModel"];
	for (auto value : allBpsDatas)
	{
		DomainBpsModel bpsDatasObject;
		if(!value["Time"].isNull())
			bpsDatasObject.time = value["Time"].asString();
		if(!value["Bps"].isNull())
			bpsDatasObject.bps = std::stof(value["Bps"].asString());
		bpsDatas_.push_back(bpsDatasObject);
	}

}

std::vector<DescribeLiveStreamBpsDataResult::DomainBpsModel> DescribeLiveStreamBpsDataResult::getBpsDatas()const
{
	return bpsDatas_;
}


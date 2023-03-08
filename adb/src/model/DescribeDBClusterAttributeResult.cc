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

#include <alibabacloud/adb/model/DescribeDBClusterAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult() :
	ServiceResult()
{}

DescribeDBClusterAttributeResult::DescribeDBClusterAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAttributeResult::~DescribeDBClusterAttributeResult()
{}

void DescribeDBClusterAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBCluster"];
	for (auto valueItemsDBCluster : allItemsNode)
	{
		DBCluster itemsObject;
		if(!valueItemsDBCluster["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBCluster["CreationTime"].asString();
		if(!valueItemsDBCluster["Expired"].isNull())
			itemsObject.expired = valueItemsDBCluster["Expired"].asString();
		if(!valueItemsDBCluster["MaintainTime"].isNull())
			itemsObject.maintainTime = valueItemsDBCluster["MaintainTime"].asString();
		if(!valueItemsDBCluster["PayType"].isNull())
			itemsObject.payType = valueItemsDBCluster["PayType"].asString();
		if(!valueItemsDBCluster["Mode"].isNull())
			itemsObject.mode = valueItemsDBCluster["Mode"].asString();
		if(!valueItemsDBCluster["Port"].isNull())
			itemsObject.port = std::stoi(valueItemsDBCluster["Port"].asString());
		if(!valueItemsDBCluster["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBCluster["LockMode"].asString();
		if(!valueItemsDBCluster["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBCluster["EngineVersion"].asString();
		if(!valueItemsDBCluster["StorageResource"].isNull())
			itemsObject.storageResource = valueItemsDBCluster["StorageResource"].asString();
		if(!valueItemsDBCluster["DBClusterId"].isNull())
			itemsObject.dBClusterId = valueItemsDBCluster["DBClusterId"].asString();
		if(!valueItemsDBCluster["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsDBCluster["ConnectionString"].asString();
		if(!valueItemsDBCluster["DBClusterType"].isNull())
			itemsObject.dBClusterType = valueItemsDBCluster["DBClusterType"].asString();
		if(!valueItemsDBCluster["CommodityCode"].isNull())
			itemsObject.commodityCode = valueItemsDBCluster["CommodityCode"].asString();
		if(!valueItemsDBCluster["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBCluster["ExpireTime"].asString();
		if(!valueItemsDBCluster["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBCluster["LockReason"].asString();
		if(!valueItemsDBCluster["VPCId"].isNull())
			itemsObject.vPCId = valueItemsDBCluster["VPCId"].asString();
		if(!valueItemsDBCluster["ComputeResource"].isNull())
			itemsObject.computeResource = valueItemsDBCluster["ComputeResource"].asString();
		if(!valueItemsDBCluster["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBCluster["RegionId"].asString();
		if(!valueItemsDBCluster["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBCluster["VSwitchId"].asString();
		if(!valueItemsDBCluster["DBVersion"].isNull())
			itemsObject.dBVersion = valueItemsDBCluster["DBVersion"].asString();
		if(!valueItemsDBCluster["DBClusterStatus"].isNull())
			itemsObject.dBClusterStatus = valueItemsDBCluster["DBClusterStatus"].asString();
		if(!valueItemsDBCluster["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBCluster["ResourceGroupId"].asString();
		if(!valueItemsDBCluster["DBClusterNetworkType"].isNull())
			itemsObject.dBClusterNetworkType = valueItemsDBCluster["DBClusterNetworkType"].asString();
		if(!valueItemsDBCluster["DBClusterDescription"].isNull())
			itemsObject.dBClusterDescription = valueItemsDBCluster["DBClusterDescription"].asString();
		if(!valueItemsDBCluster["UserENIStatus"].isNull())
			itemsObject.userENIStatus = valueItemsDBCluster["UserENIStatus"].asString() == "true";
		if(!valueItemsDBCluster["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBCluster["ZoneId"].asString();
		if(!valueItemsDBCluster["Engine"].isNull())
			itemsObject.engine = valueItemsDBCluster["Engine"].asString();
		if(!valueItemsDBCluster["ReservedACU"].isNull())
			itemsObject.reservedACU = valueItemsDBCluster["ReservedACU"].asString();
		if(!valueItemsDBCluster["ComputeResourceTotal"].isNull())
			itemsObject.computeResourceTotal = valueItemsDBCluster["ComputeResourceTotal"].asString();
		if(!valueItemsDBCluster["StorageResourceTotal"].isNull())
			itemsObject.storageResourceTotal = valueItemsDBCluster["StorageResourceTotal"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterAttributeResult::DBCluster> DescribeDBClusterAttributeResult::getItems()const
{
	return items_;
}


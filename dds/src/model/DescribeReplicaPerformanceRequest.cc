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

#include <alibabacloud/dds/model/DescribeReplicaPerformanceRequest.h>

using AlibabaCloud::Dds::Model::DescribeReplicaPerformanceRequest;

DescribeReplicaPerformanceRequest::DescribeReplicaPerformanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeReplicaPerformance")
{}

DescribeReplicaPerformanceRequest::~DescribeReplicaPerformanceRequest()
{}

long DescribeReplicaPerformanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicaPerformanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeReplicaPerformanceRequest::getDestinationDBInstanceId()const
{
	return destinationDBInstanceId_;
}

void DescribeReplicaPerformanceRequest::setDestinationDBInstanceId(const std::string& destinationDBInstanceId)
{
	destinationDBInstanceId_ = destinationDBInstanceId;
	setCoreParameter("DestinationDBInstanceId", destinationDBInstanceId);
}

std::string DescribeReplicaPerformanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicaPerformanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeReplicaPerformanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicaPerformanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeReplicaPerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeReplicaPerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeReplicaPerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeReplicaPerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeReplicaPerformanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicaPerformanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeReplicaPerformanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicaPerformanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeReplicaPerformanceRequest::getSourceDBInstanceId()const
{
	return sourceDBInstanceId_;
}

void DescribeReplicaPerformanceRequest::setSourceDBInstanceId(const std::string& sourceDBInstanceId)
{
	sourceDBInstanceId_ = sourceDBInstanceId;
	setCoreParameter("SourceDBInstanceId", sourceDBInstanceId);
}

std::string DescribeReplicaPerformanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicaPerformanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeReplicaPerformanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicaPerformanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeReplicaPerformanceRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeReplicaPerformanceRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

std::string DescribeReplicaPerformanceRequest::getKey()const
{
	return key_;
}

void DescribeReplicaPerformanceRequest::setKey(const std::string& key)
{
	key_ = key;
	setCoreParameter("Key", key);
}


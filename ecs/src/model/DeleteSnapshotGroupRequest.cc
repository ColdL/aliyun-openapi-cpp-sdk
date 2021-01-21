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

#include <alibabacloud/ecs/model/DeleteSnapshotGroupRequest.h>

using AlibabaCloud::Ecs::Model::DeleteSnapshotGroupRequest;

DeleteSnapshotGroupRequest::DeleteSnapshotGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteSnapshotGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSnapshotGroupRequest::~DeleteSnapshotGroupRequest()
{}

long DeleteSnapshotGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSnapshotGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSnapshotGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteSnapshotGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteSnapshotGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSnapshotGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteSnapshotGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteSnapshotGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteSnapshotGroupRequest::getSnapshotGroupId()const
{
	return snapshotGroupId_;
}

void DeleteSnapshotGroupRequest::setSnapshotGroupId(const std::string& snapshotGroupId)
{
	snapshotGroupId_ = snapshotGroupId;
	setParameter("SnapshotGroupId", snapshotGroupId);
}

long DeleteSnapshotGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSnapshotGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}


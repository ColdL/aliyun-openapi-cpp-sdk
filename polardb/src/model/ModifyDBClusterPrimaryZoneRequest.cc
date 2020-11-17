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

#include <alibabacloud/polardb/model/ModifyDBClusterPrimaryZoneRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterPrimaryZoneRequest;

ModifyDBClusterPrimaryZoneRequest::ModifyDBClusterPrimaryZoneRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterPrimaryZone")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterPrimaryZoneRequest::~ModifyDBClusterPrimaryZoneRequest()
{}

long ModifyDBClusterPrimaryZoneRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterPrimaryZoneRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterPrimaryZoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterPrimaryZoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterPrimaryZoneRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterPrimaryZoneRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterPrimaryZoneRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterPrimaryZoneRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterPrimaryZoneRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterPrimaryZoneRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterPrimaryZoneRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyDBClusterPrimaryZoneRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string ModifyDBClusterPrimaryZoneRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyDBClusterPrimaryZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}


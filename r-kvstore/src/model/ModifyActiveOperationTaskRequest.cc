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

#include <alibabacloud/r-kvstore/model/ModifyActiveOperationTaskRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyActiveOperationTaskRequest;

ModifyActiveOperationTaskRequest::ModifyActiveOperationTaskRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyActiveOperationTask")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyActiveOperationTaskRequest::~ModifyActiveOperationTaskRequest()
{}

long ModifyActiveOperationTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyActiveOperationTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyActiveOperationTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyActiveOperationTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyActiveOperationTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyActiveOperationTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyActiveOperationTaskRequest::getSwitchTime()const
{
	return switchTime_;
}

void ModifyActiveOperationTaskRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

std::string ModifyActiveOperationTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyActiveOperationTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyActiveOperationTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyActiveOperationTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyActiveOperationTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyActiveOperationTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyActiveOperationTaskRequest::getIds()const
{
	return ids_;
}

void ModifyActiveOperationTaskRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}


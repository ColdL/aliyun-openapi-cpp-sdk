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

#include <alibabacloud/rds/model/RestartDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::RestartDBInstanceRequest;

RestartDBInstanceRequest::RestartDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RestartDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RestartDBInstanceRequest::~RestartDBInstanceRequest()
{}

long RestartDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestartDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestartDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RestartDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RestartDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RestartDBInstanceRequest::getRestartMethod()const
{
	return restartMethod_;
}

void RestartDBInstanceRequest::setRestartMethod(const std::string& restartMethod)
{
	restartMethod_ = restartMethod;
	setParameter("RestartMethod", restartMethod);
}

std::string RestartDBInstanceRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void RestartDBInstanceRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

std::string RestartDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestartDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string RestartDBInstanceRequest::getSwitchTime()const
{
	return switchTime_;
}

void RestartDBInstanceRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

std::string RestartDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestartDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestartDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestartDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RestartDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestartDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}


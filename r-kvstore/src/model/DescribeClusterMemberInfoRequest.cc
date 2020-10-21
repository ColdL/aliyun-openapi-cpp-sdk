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

#include <alibabacloud/r-kvstore/model/DescribeClusterMemberInfoRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeClusterMemberInfoRequest;

DescribeClusterMemberInfoRequest::DescribeClusterMemberInfoRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeClusterMemberInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterMemberInfoRequest::~DescribeClusterMemberInfoRequest()
{}

long DescribeClusterMemberInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterMemberInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterMemberInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterMemberInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeClusterMemberInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeClusterMemberInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeClusterMemberInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeClusterMemberInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeClusterMemberInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeClusterMemberInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeClusterMemberInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeClusterMemberInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeClusterMemberInfoRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeClusterMemberInfoRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}


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

#include <alibabacloud/dbfs/model/CreateSnapshotRequest.h>

using AlibabaCloud::DBFS::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "CreateSnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSnapshotRequest::~CreateSnapshotRequest()
{}

std::string CreateSnapshotRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSnapshotRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSnapshotRequest::getDescription()const
{
	return description_;
}

void CreateSnapshotRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateSnapshotRequest::getSnapshotName()const
{
	return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setParameter("SnapshotName", snapshotName);
}

std::string CreateSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void CreateSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSnapshotRequest::getFsId()const
{
	return fsId_;
}

void CreateSnapshotRequest::setFsId(const std::string& fsId)
{
	fsId_ = fsId;
	setParameter("FsId", fsId);
}

int CreateSnapshotRequest::getRetentionDays()const
{
	return retentionDays_;
}

void CreateSnapshotRequest::setRetentionDays(int retentionDays)
{
	retentionDays_ = retentionDays;
	setParameter("RetentionDays", std::to_string(retentionDays));
}


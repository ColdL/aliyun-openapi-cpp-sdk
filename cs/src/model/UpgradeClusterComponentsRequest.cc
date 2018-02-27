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

#include <alibabacloud/cs/model/UpgradeClusterComponentsRequest.h>

using AlibabaCloud::CS::Model::UpgradeClusterComponentsRequest;

UpgradeClusterComponentsRequest::UpgradeClusterComponentsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{}

UpgradeClusterComponentsRequest::~UpgradeClusterComponentsRequest()
{}

std::string UpgradeClusterComponentsRequest::getComponentId()const
{
	return componentId_;
}

void UpgradeClusterComponentsRequest::setComponentId(const std::string& componentId)
{
	componentId_ = componentId;
	setParameter("ComponentId", componentId);
}

std::string UpgradeClusterComponentsRequest::getClusterId()const
{
	return clusterId_;
}

void UpgradeClusterComponentsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}


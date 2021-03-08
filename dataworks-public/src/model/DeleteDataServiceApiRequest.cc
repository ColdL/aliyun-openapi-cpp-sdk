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

#include <alibabacloud/dataworks-public/model/DeleteDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::DeleteDataServiceApiRequest;

DeleteDataServiceApiRequest::DeleteDataServiceApiRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "DeleteDataServiceApi")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDataServiceApiRequest::~DeleteDataServiceApiRequest()
{}

long DeleteDataServiceApiRequest::getTenantId()const
{
	return tenantId_;
}

void DeleteDataServiceApiRequest::setTenantId(long tenantId)
{
	tenantId_ = tenantId;
	setBodyParameter("TenantId", std::to_string(tenantId));
}

long DeleteDataServiceApiRequest::getProjectId()const
{
	return projectId_;
}

void DeleteDataServiceApiRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

long DeleteDataServiceApiRequest::getApiId()const
{
	return apiId_;
}

void DeleteDataServiceApiRequest::setApiId(long apiId)
{
	apiId_ = apiId;
	setBodyParameter("ApiId", std::to_string(apiId));
}


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

#include <alibabacloud/qualitycheck/model/UpdateUserConfigRequest.h>

using AlibabaCloud::Qualitycheck::Model::UpdateUserConfigRequest;

UpdateUserConfigRequest::UpdateUserConfigRequest() :
	RpcServiceRequest("qualitycheck", "2019-01-15", "UpdateUserConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserConfigRequest::~UpdateUserConfigRequest()
{}

long UpdateUserConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateUserConfigRequest::getJsonStr()const
{
	return jsonStr_;
}

void UpdateUserConfigRequest::setJsonStr(const std::string& jsonStr)
{
	jsonStr_ = jsonStr;
	setParameter("JsonStr", jsonStr);
}

std::string UpdateUserConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


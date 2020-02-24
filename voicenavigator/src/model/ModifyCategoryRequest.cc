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

#include <alibabacloud/voicenavigator/model/ModifyCategoryRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyCategoryRequest;

ModifyCategoryRequest::ModifyCategoryRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyCategory")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyCategoryRequest::~ModifyCategoryRequest()
{}

std::string ModifyCategoryRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyCategoryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyCategoryRequest::getName()const
{
	return name_;
}

void ModifyCategoryRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyCategoryRequest::getCategoryId()const
{
	return categoryId_;
}

void ModifyCategoryRequest::setCategoryId(const std::string& categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", categoryId);
}


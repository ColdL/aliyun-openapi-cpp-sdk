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

#include <alibabacloud/ddoscoo/model/ListAsyncTaskRequest.h>

using AlibabaCloud::Ddoscoo::Model::ListAsyncTaskRequest;

ListAsyncTaskRequest::ListAsyncTaskRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ListAsyncTask")
{
	setMethod(HttpRequest::Method::Post);
}

ListAsyncTaskRequest::~ListAsyncTaskRequest()
{}

std::string ListAsyncTaskRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListAsyncTaskRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListAsyncTaskRequest::getSourceIp()const
{
	return sourceIp_;
}

void ListAsyncTaskRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ListAsyncTaskRequest::getPageNo()const
{
	return pageNo_;
}

void ListAsyncTaskRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int ListAsyncTaskRequest::getPageSize()const
{
	return pageSize_;
}

void ListAsyncTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListAsyncTaskRequest::getLang()const
{
	return lang_;
}

void ListAsyncTaskRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}


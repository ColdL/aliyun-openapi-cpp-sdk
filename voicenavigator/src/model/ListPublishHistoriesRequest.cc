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

#include <alibabacloud/voicenavigator/model/ListPublishHistoriesRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ListPublishHistoriesRequest;

ListPublishHistoriesRequest::ListPublishHistoriesRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ListPublishHistories")
{
	setMethod(HttpRequest::Method::Get);
}

ListPublishHistoriesRequest::~ListPublishHistoriesRequest()
{}

int ListPublishHistoriesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPublishHistoriesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListPublishHistoriesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListPublishHistoriesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListPublishHistoriesRequest::getPageSize()const
{
	return pageSize_;
}

void ListPublishHistoriesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}


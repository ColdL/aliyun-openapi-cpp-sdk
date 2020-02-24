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

#include <alibabacloud/voicenavigator/model/ListInstancesRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "ListInstances")
{
	setMethod(HttpRequest::Method::Get);
}

ListInstancesRequest::~ListInstancesRequest()
{}

int ListInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void ListInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}


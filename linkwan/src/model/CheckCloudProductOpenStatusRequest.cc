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

#include <alibabacloud/linkwan/model/CheckCloudProductOpenStatusRequest.h>

using AlibabaCloud::LinkWAN::Model::CheckCloudProductOpenStatusRequest;

CheckCloudProductOpenStatusRequest::CheckCloudProductOpenStatusRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CheckCloudProductOpenStatus")
{
	setMethod(HttpRequest::Method::Post);
}

CheckCloudProductOpenStatusRequest::~CheckCloudProductOpenStatusRequest()
{}

std::string CheckCloudProductOpenStatusRequest::getServiceCode()const
{
	return serviceCode_;
}

void CheckCloudProductOpenStatusRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setParameter("ServiceCode", serviceCode);
}

std::string CheckCloudProductOpenStatusRequest::getApiProduct()const
{
	return apiProduct_;
}

void CheckCloudProductOpenStatusRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CheckCloudProductOpenStatusRequest::getApiRevision()const
{
	return apiRevision_;
}

void CheckCloudProductOpenStatusRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}


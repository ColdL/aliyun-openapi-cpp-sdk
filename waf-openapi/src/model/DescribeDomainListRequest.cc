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

#include <alibabacloud/waf-openapi/model/DescribeDomainListRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeDomainListRequest;

DescribeDomainListRequest::DescribeDomainListRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeDomainList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainListRequest::~DescribeDomainListRequest()
{}

std::vector<std::string> DescribeDomainListRequest::getDomainNames()const
{
	return domainNames_;
}

void DescribeDomainListRequest::setDomainNames(const std::vector<std::string>& domainNames)
{
	domainNames_ = domainNames;
	for(int dep1 = 0; dep1!= domainNames.size(); dep1++) {
		setParameter("DomainNames."+ std::to_string(dep1), domainNames.at(dep1));
	}
}

int DescribeDomainListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDomainListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDomainListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDomainListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDomainListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDomainListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeDomainListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDomainListRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

int DescribeDomainListRequest::getIsSub()const
{
	return isSub_;
}

void DescribeDomainListRequest::setIsSub(int isSub)
{
	isSub_ = isSub;
	setParameter("IsSub", std::to_string(isSub));
}

std::string DescribeDomainListRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDomainListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}


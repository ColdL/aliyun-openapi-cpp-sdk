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

#ifndef ALIBABACLOUD_EAIS_MODEL_DESCRIBEEAISREQUEST_H_
#define ALIBABACLOUD_EAIS_MODEL_DESCRIBEEAISREQUEST_H_

#include <alibabacloud/eais/EaisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eais {
namespace Model {
class ALIBABACLOUD_EAIS_EXPORT DescribeEaisRequest : public RpcServiceRequest {
public:
	DescribeEaisRequest();
	~DescribeEaisRequest();
	std::string getElasticAcceleratedInstanceIds() const;
	void setElasticAcceleratedInstanceIds(const std::string &elasticAcceleratedInstanceIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string elasticAcceleratedInstanceIds_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string instanceName_;
	std::string regionId_;
	int pageSize_;
	std::string instanceType_;
	std::string status_;
};
} // namespace Model
} // namespace Eais
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAIS_MODEL_DESCRIBEEAISREQUEST_H_

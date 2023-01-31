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

#ifndef ALIBABACLOUD_VPC_MODEL_UPDATEVPCGATEWAYENDPOINTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_UPDATEVPCGATEWAYENDPOINTATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT UpdateVpcGatewayEndpointAttributeRequest : public RpcServiceRequest {
public:
	UpdateVpcGatewayEndpointAttributeRequest();
	~UpdateVpcGatewayEndpointAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getEndpointId() const;
	void setEndpointId(const std::string &endpointId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndpointDescription() const;
	void setEndpointDescription(const std::string &endpointDescription);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getEndpointName() const;
	void setEndpointName(const std::string &endpointName);
	std::string getPolicyDocument() const;
	void setPolicyDocument(const std::string &policyDocument);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string endpointId_;
	std::string regionId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endpointDescription_;
	long ownerId_;
	std::string endpointName_;
	std::string policyDocument_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_UPDATEVPCGATEWAYENDPOINTATTRIBUTEREQUEST_H_

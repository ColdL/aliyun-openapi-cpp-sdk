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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATENATIPCIDRREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATENATIPCIDRREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateNatIpCidrRequest : public RpcServiceRequest {
public:
	CreateNatIpCidrRequest();
	~CreateNatIpCidrRequest();
	std::string getNatIpCidrDescription() const;
	void setNatIpCidrDescription(const std::string &natIpCidrDescription);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getNatIpCidrName() const;
	void setNatIpCidrName(const std::string &natIpCidrName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getNatIpCidr() const;
	void setNatIpCidr(const std::string &natIpCidr);

private:
	std::string natIpCidrDescription_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string regionId_;
	std::string natGatewayId_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string natIpCidrName_;
	long ownerId_;
	std::string natIpCidr_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATENATIPCIDRREQUEST_H_

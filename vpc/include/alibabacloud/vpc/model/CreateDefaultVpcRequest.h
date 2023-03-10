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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEDEFAULTVPCREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEDEFAULTVPCREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateDefaultVpcRequest : public RpcServiceRequest {
public:
	CreateDefaultVpcRequest();
	~CreateDefaultVpcRequest();
	bool getEnableDefaultVSwitch() const;
	void setEnableDefaultVSwitch(bool enableDefaultVSwitch);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getEnableIpv6() const;
	void setEnableIpv6(bool enableIpv6);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getIpv6CidrBlock() const;
	void setIpv6CidrBlock(const std::string &ipv6CidrBlock);
	std::vector<std::string> getZoneId() const;
	void setZoneId(const std::vector<std::string> &zoneId);

private:
	bool enableDefaultVSwitch_;
	long resourceOwnerId_;
	std::string clientToken_;
	bool enableIpv6_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string ipv6CidrBlock_;
	std::vector<std::string> zoneId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEDEFAULTVPCREQUEST_H_

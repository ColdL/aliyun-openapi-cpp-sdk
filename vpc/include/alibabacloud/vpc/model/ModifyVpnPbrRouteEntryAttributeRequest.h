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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYVPNPBRROUTEENTRYATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYVPNPBRROUTEENTRYATTRIBUTEREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ModifyVpnPbrRouteEntryAttributeRequest : public RpcServiceRequest {
public:
	ModifyVpnPbrRouteEntryAttributeRequest();
	~ModifyVpnPbrRouteEntryAttributeRequest();
	std::string getRouteSource() const;
	void setRouteSource(const std::string &routeSource);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getNewWeight() const;
	void setNewWeight(int newWeight);
	int getNewPriority() const;
	void setNewPriority(int newPriority);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getWeight() const;
	void setWeight(int weight);
	std::string getVpnGatewayId() const;
	void setVpnGatewayId(const std::string &vpnGatewayId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getPriority() const;
	void setPriority(int priority);
	std::string getRouteDest() const;
	void setRouteDest(const std::string &routeDest);
	std::string getNextHop() const;
	void setNextHop(const std::string &nextHop);

private:
	std::string routeSource_;
	long resourceOwnerId_;
	std::string clientToken_;
	int newWeight_;
	int newPriority_;
	std::string regionId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int weight_;
	std::string vpnGatewayId_;
	long ownerId_;
	int priority_;
	std::string routeDest_;
	std::string nextHop_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYVPNPBRROUTEENTRYATTRIBUTEREQUEST_H_

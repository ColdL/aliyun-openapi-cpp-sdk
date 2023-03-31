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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATESHARDINGDBINSTANCEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATESHARDINGDBINSTANCEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT CreateShardingDBInstanceRequest : public RpcServiceRequest {
public:
	struct ReplicaSet {
		int readonlyReplicas;
		int storage;
		std::string _class;
	};
	struct ConfigServer {
		int storage;
		std::string _class;
	};
	struct Mongos {
		std::string _class;
	};
	CreateShardingDBInstanceRequest();
	~CreateShardingDBInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSecondaryZoneId() const;
	void setSecondaryZoneId(const std::string &secondaryZoneId);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::vector<ReplicaSet> getReplicaSet() const;
	void setReplicaSet(const std::vector<ReplicaSet> &replicaSet);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::string getGlobalSecurityGroupIds() const;
	void setGlobalSecurityGroupIds(const std::string &globalSecurityGroupIds);
	int getPeriod() const;
	void setPeriod(int period);
	std::vector<ConfigServer> getConfigServer() const;
	void setConfigServer(const std::vector<ConfigServer> &configServer);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityIPList() const;
	void setSecurityIPList(const std::string &securityIPList);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::vector<Mongos> getMongos() const;
	void setMongos(const std::vector<Mongos> &mongos);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getStorageEngine() const;
	void setStorageEngine(const std::string &storageEngine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getHiddenZoneId() const;
	void setHiddenZoneId(const std::string &hiddenZoneId);
	std::string getRestoreTime() const;
	void setRestoreTime(const std::string &restoreTime);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getSrcDBInstanceId() const;
	void setSrcDBInstanceId(const std::string &srcDBInstanceId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string secondaryZoneId_;
	std::string engineVersion_;
	std::string networkType_;
	std::vector<ReplicaSet> replicaSet_;
	std::string storageType_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string dBInstanceDescription_;
	std::string globalSecurityGroupIds_;
	int period_;
	std::vector<ConfigServer> configServer_;
	long ownerId_;
	std::string securityIPList_;
	std::string vSwitchId_;
	std::vector<Mongos> mongos_;
	std::string autoRenew_;
	std::string zoneId_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string storageEngine_;
	std::string regionId_;
	std::string engine_;
	std::string hiddenZoneId_;
	std::string restoreTime_;
	std::string resourceOwnerAccount_;
	std::string srcDBInstanceId_;
	std::string ownerAccount_;
	std::string accountPassword_;
	std::string vpcId_;
	std::string protocolType_;
	std::string chargeType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_CREATESHARDINGDBINSTANCEREQUEST_H_

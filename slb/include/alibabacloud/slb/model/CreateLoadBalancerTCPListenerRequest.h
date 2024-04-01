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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERTCPLISTENERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERTCPLISTENERREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerTCPListenerRequest : public RpcServiceRequest {
public:
	CreateLoadBalancerTCPListenerRequest();
	~CreateLoadBalancerTCPListenerRequest();
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getHealthCheckURI() const;
	void setHealthCheckURI(const std::string &healthCheckURI);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getHealthCheck() const;
	void setHealthCheck(const std::string &healthCheck);
	int getEstablishedTimeout() const;
	void setEstablishedTimeout(int establishedTimeout);
	int getMaxConnection() const;
	void setMaxConnection(int maxConnection);
	int getPersistenceTimeout() const;
	void setPersistenceTimeout(int persistenceTimeout);
	std::string getVServerGroupId() const;
	void setVServerGroupId(const std::string &vServerGroupId);
	int getConnectTimeout() const;
	void setConnectTimeout(int connectTimeout);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getHealthCheckType() const;
	void setHealthCheckType(const std::string &healthCheckType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	int getConnectPort() const;
	void setConnectPort(int connectPort);
	std::string getHealthCheckDomain() const;
	void setHealthCheckDomain(const std::string &healthCheckDomain);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getListenerStatus() const;
	void setListenerStatus(const std::string &listenerStatus);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::string getMasterSlaveServerGroupId() const;
	void setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId);
	int getBackendServerPort() const;
	void setBackendServerPort(int backendServerPort);
	int getInterval() const;
	void setInterval(int interval);
	std::string getHealthCheckHttpCode() const;
	void setHealthCheckHttpCode(const std::string &healthCheckHttpCode);

private:
	std::string access_key_id_;
	long resourceOwnerId_;
	std::string healthCheckURI_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string accessKeyId_;
	std::string scheduler_;
	std::string healthCheck_;
	int establishedTimeout_;
	int maxConnection_;
	int persistenceTimeout_;
	std::string vServerGroupId_;
	int connectTimeout_;
	int listenerPort_;
	std::string healthCheckType_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	int connectPort_;
	std::string healthCheckDomain_;
	std::string ownerAccount_;
	long ownerId_;
	std::string listenerStatus_;
	std::string tags_;
	std::string loadBalancerId_;
	std::string masterSlaveServerGroupId_;
	int backendServerPort_;
	int interval_;
	std::string healthCheckHttpCode_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERTCPLISTENERREQUEST_H_

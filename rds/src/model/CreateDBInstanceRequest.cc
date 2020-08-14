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

#include <alibabacloud/rds/model/CreateDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateDBInstanceRequest;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBInstanceRequest::~CreateDBInstanceRequest()
{}

std::string CreateDBInstanceRequest::getDBParamGroupId()const
{
	return dBParamGroupId_;
}

void CreateDBInstanceRequest::setDBParamGroupId(const std::string& dBParamGroupId)
{
	dBParamGroupId_ = dBParamGroupId;
	setParameter("DBParamGroupId", dBParamGroupId);
}

long CreateDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateDBInstanceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void CreateDBInstanceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string CreateDBInstanceRequest::getSystemDBCharset()const
{
	return systemDBCharset_;
}

void CreateDBInstanceRequest::setSystemDBCharset(const std::string& systemDBCharset)
{
	systemDBCharset_ = systemDBCharset;
	setParameter("SystemDBCharset", systemDBCharset);
}

std::string CreateDBInstanceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateDBInstanceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string CreateDBInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDBInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForMaster()const
{
	return targetDedicatedHostIdForMaster_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForMaster(const std::string& targetDedicatedHostIdForMaster)
{
	targetDedicatedHostIdForMaster_ = targetDedicatedHostIdForMaster;
	setParameter("TargetDedicatedHostIdForMaster", targetDedicatedHostIdForMaster);
}

std::string CreateDBInstanceRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void CreateDBInstanceRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string CreateDBInstanceRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateDBInstanceRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setParameter("BusinessInfo", businessInfo);
}

std::string CreateDBInstanceRequest::getPeriod()const
{
	return period_;
}

void CreateDBInstanceRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string CreateDBInstanceRequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void CreateDBInstanceRequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setParameter("EncryptionKey", encryptionKey);
}

long CreateDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBInstanceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void CreateDBInstanceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string CreateDBInstanceRequest::getSecurityIPList()const
{
	return securityIPList_;
}

void CreateDBInstanceRequest::setSecurityIPList(const std::string& securityIPList)
{
	securityIPList_ = securityIPList;
	setParameter("SecurityIPList", securityIPList);
}

std::string CreateDBInstanceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDBInstanceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateDBInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void CreateDBInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForLog()const
{
	return targetDedicatedHostIdForLog_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForLog(const std::string& targetDedicatedHostIdForLog)
{
	targetDedicatedHostIdForLog_ = targetDedicatedHostIdForLog;
	setParameter("TargetDedicatedHostIdForLog", targetDedicatedHostIdForLog);
}

std::string CreateDBInstanceRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateDBInstanceRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", autoRenew);
}

std::string CreateDBInstanceRequest::getRoleARN()const
{
	return roleARN_;
}

void CreateDBInstanceRequest::setRoleARN(const std::string& roleARN)
{
	roleARN_ = roleARN;
	setParameter("RoleARN", roleARN);
}

std::string CreateDBInstanceRequest::getTunnelId()const
{
	return tunnelId_;
}

void CreateDBInstanceRequest::setTunnelId(const std::string& tunnelId)
{
	tunnelId_ = tunnelId;
	setParameter("TunnelId", tunnelId);
}

std::string CreateDBInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDBInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDBInstanceRequest::getStorageAutoScale()const
{
	return storageAutoScale_;
}

void CreateDBInstanceRequest::setStorageAutoScale(const std::string& storageAutoScale)
{
	storageAutoScale_ = storageAutoScale;
	setParameter("StorageAutoScale", storageAutoScale);
}

std::string CreateDBInstanceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void CreateDBInstanceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

std::string CreateDBInstanceRequest::getConnectionMode()const
{
	return connectionMode_;
}

void CreateDBInstanceRequest::setConnectionMode(const std::string& connectionMode)
{
	connectionMode_ = connectionMode;
	setParameter("ConnectionMode", connectionMode);
}

std::string CreateDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDBInstanceRequest::getTargetDedicatedHostIdForSlave()const
{
	return targetDedicatedHostIdForSlave_;
}

void CreateDBInstanceRequest::setTargetDedicatedHostIdForSlave(const std::string& targetDedicatedHostIdForSlave)
{
	targetDedicatedHostIdForSlave_ = targetDedicatedHostIdForSlave;
	setParameter("TargetDedicatedHostIdForSlave", targetDedicatedHostIdForSlave);
}

std::string CreateDBInstanceRequest::getZoneIdSlave1()const
{
	return zoneIdSlave1_;
}

void CreateDBInstanceRequest::setZoneIdSlave1(const std::string& zoneIdSlave1)
{
	zoneIdSlave1_ = zoneIdSlave1;
	setParameter("ZoneIdSlave1", zoneIdSlave1);
}

std::string CreateDBInstanceRequest::getZoneIdSlave2()const
{
	return zoneIdSlave2_;
}

void CreateDBInstanceRequest::setZoneIdSlave2(const std::string& zoneIdSlave2)
{
	zoneIdSlave2_ = zoneIdSlave2;
	setParameter("ZoneIdSlave2", zoneIdSlave2);
}

std::string CreateDBInstanceRequest::getDBIsIgnoreCase()const
{
	return dBIsIgnoreCase_;
}

void CreateDBInstanceRequest::setDBIsIgnoreCase(const std::string& dBIsIgnoreCase)
{
	dBIsIgnoreCase_ = dBIsIgnoreCase;
	setParameter("DBIsIgnoreCase", dBIsIgnoreCase);
}

std::string CreateDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDBInstanceRequest::getEngine()const
{
	return engine_;
}

void CreateDBInstanceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string CreateDBInstanceRequest::getDBTimeZone()const
{
	return dBTimeZone_;
}

void CreateDBInstanceRequest::setDBTimeZone(const std::string& dBTimeZone)
{
	dBTimeZone_ = dBTimeZone;
	setParameter("DBTimeZone", dBTimeZone);
}

std::string CreateDBInstanceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void CreateDBInstanceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string CreateDBInstanceRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void CreateDBInstanceRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string CreateDBInstanceRequest::getDBInstanceNetType()const
{
	return dBInstanceNetType_;
}

void CreateDBInstanceRequest::setDBInstanceNetType(const std::string& dBInstanceNetType)
{
	dBInstanceNetType_ = dBInstanceNetType;
	setParameter("DBInstanceNetType", dBInstanceNetType);
}

std::string CreateDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBInstanceRequest::getUsedTime()const
{
	return usedTime_;
}

void CreateDBInstanceRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
}

std::string CreateDBInstanceRequest::getTargetMinorVersion()const
{
	return targetMinorVersion_;
}

void CreateDBInstanceRequest::setTargetMinorVersion(const std::string& targetMinorVersion)
{
	targetMinorVersion_ = targetMinorVersion;
	setParameter("TargetMinorVersion", targetMinorVersion);
}

int CreateDBInstanceRequest::getStorageUpperBound()const
{
	return storageUpperBound_;
}

void CreateDBInstanceRequest::setStorageUpperBound(int storageUpperBound)
{
	storageUpperBound_ = storageUpperBound;
	setParameter("StorageUpperBound", std::to_string(storageUpperBound));
}

int CreateDBInstanceRequest::getStorageThreshold()const
{
	return storageThreshold_;
}

void CreateDBInstanceRequest::setStorageThreshold(int storageThreshold)
{
	storageThreshold_ = storageThreshold;
	setParameter("StorageThreshold", std::to_string(storageThreshold));
}

std::string CreateDBInstanceRequest::getVPCId()const
{
	return vPCId_;
}

void CreateDBInstanceRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string CreateDBInstanceRequest::getCategory()const
{
	return category_;
}

void CreateDBInstanceRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string CreateDBInstanceRequest::getPayType()const
{
	return payType_;
}

void CreateDBInstanceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}


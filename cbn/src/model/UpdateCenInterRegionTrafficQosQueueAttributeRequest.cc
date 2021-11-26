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

#include <alibabacloud/cbn/model/UpdateCenInterRegionTrafficQosQueueAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateCenInterRegionTrafficQosQueueAttributeRequest;

UpdateCenInterRegionTrafficQosQueueAttributeRequest::UpdateCenInterRegionTrafficQosQueueAttributeRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "UpdateCenInterRegionTrafficQosQueueAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateCenInterRegionTrafficQosQueueAttributeRequest::~UpdateCenInterRegionTrafficQosQueueAttributeRequest()
{}

std::vector<int> UpdateCenInterRegionTrafficQosQueueAttributeRequest::getDscps()const
{
	return dscps_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setDscps(const std::vector<int>& dscps)
{
	dscps_ = dscps;
	for(int dep1 = 0; dep1!= dscps.size(); dep1++) {
		setParameter("Dscps."+ std::to_string(dep1), std::to_string(dscps.at(dep1)));
	}
}

long UpdateCenInterRegionTrafficQosQueueAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getQosQueueName()const
{
	return qosQueueName_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setQosQueueName(const std::string& qosQueueName)
{
	qosQueueName_ = qosQueueName;
	setParameter("QosQueueName", qosQueueName);
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getRemainBandwidthPercent()const
{
	return remainBandwidthPercent_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setRemainBandwidthPercent(const std::string& remainBandwidthPercent)
{
	remainBandwidthPercent_ = remainBandwidthPercent;
	setParameter("RemainBandwidthPercent", remainBandwidthPercent);
}

bool UpdateCenInterRegionTrafficQosQueueAttributeRequest::getDryRun()const
{
	return dryRun_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpdateCenInterRegionTrafficQosQueueAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getQosQueueId()const
{
	return qosQueueId_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setQosQueueId(const std::string& qosQueueId)
{
	qosQueueId_ = qosQueueId;
	setParameter("QosQueueId", qosQueueId);
}

std::string UpdateCenInterRegionTrafficQosQueueAttributeRequest::getQosQueueDescription()const
{
	return qosQueueDescription_;
}

void UpdateCenInterRegionTrafficQosQueueAttributeRequest::setQosQueueDescription(const std::string& qosQueueDescription)
{
	qosQueueDescription_ = qosQueueDescription;
	setParameter("QosQueueDescription", qosQueueDescription);
}


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

#ifndef ALIBABACLOUD_CBN_MODEL_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT UpdateTrafficMarkingPolicyAttributeRequest : public RpcServiceRequest
			{

			public:
				UpdateTrafficMarkingPolicyAttributeRequest();
				~UpdateTrafficMarkingPolicyAttributeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getTrafficMarkingPolicyDescription()const;
				void setTrafficMarkingPolicyDescription(const std::string& trafficMarkingPolicyDescription);
				std::string getTrafficMarkingPolicyId()const;
				void setTrafficMarkingPolicyId(const std::string& trafficMarkingPolicyId);
				std::string getTrafficMarkingPolicyName()const;
				void setTrafficMarkingPolicyName(const std::string& trafficMarkingPolicyName);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string trafficMarkingPolicyDescription_;
				std::string trafficMarkingPolicyId_;
				std::string trafficMarkingPolicyName_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_H_
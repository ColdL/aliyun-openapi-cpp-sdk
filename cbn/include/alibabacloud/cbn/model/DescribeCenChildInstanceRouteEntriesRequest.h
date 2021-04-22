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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENCHILDINSTANCEROUTEENTRIESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENCHILDINSTANCEROUTEENTRIESREQUEST_H_

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
			class ALIBABACLOUD_CBN_EXPORT DescribeCenChildInstanceRouteEntriesRequest : public RpcServiceRequest
			{

			public:
				DescribeCenChildInstanceRouteEntriesRequest();
				~DescribeCenChildInstanceRouteEntriesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getChildInstanceRegionId()const;
				void setChildInstanceRegionId(const std::string& childInstanceRegionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDestinationCidrBlock()const;
				void setDestinationCidrBlock(const std::string& destinationCidrBlock);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getChildInstanceType()const;
				void setChildInstanceType(const std::string& childInstanceType);
				std::string getChildInstanceId()const;
				void setChildInstanceId(const std::string& childInstanceId);
				std::string getChildInstanceRouteTableId()const;
				void setChildInstanceRouteTableId(const std::string& childInstanceRouteTableId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string cenId_;
				int pageNumber_;
				int pageSize_;
				std::string childInstanceRegionId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string destinationCidrBlock_;
				long ownerId_;
				std::string childInstanceType_;
				std::string childInstanceId_;
				std::string childInstanceRouteTableId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENCHILDINSTANCEROUTEENTRIESREQUEST_H_
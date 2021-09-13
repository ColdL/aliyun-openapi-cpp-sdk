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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_LISTGATEWAYSREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_LISTGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT ListGatewaysRequest : public RpcServiceRequest
			{

			public:
				ListGatewaysRequest();
				~ListGatewaysRequest();

				std::string getFuzzyGwEui()const;
				void setFuzzyGwEui(const std::string& fuzzyGwEui);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				long getLimit()const;
				void setLimit(long limit);
				std::string getFuzzyCity()const;
				void setFuzzyCity(const std::string& fuzzyCity);
				std::string getOnlineState()const;
				void setOnlineState(const std::string& onlineState);
				bool getIsEnabled()const;
				void setIsEnabled(bool isEnabled);
				std::string getFuzzyName()const;
				void setFuzzyName(const std::string& fuzzyName);
				long getOffset()const;
				void setOffset(long offset);
				bool getAscending()const;
				void setAscending(bool ascending);
				long getFreqBandPlanGroupId()const;
				void setFreqBandPlanGroupId(long freqBandPlanGroupId);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getSortingField()const;
				void setSortingField(const std::string& sortingField);

            private:
				std::string fuzzyGwEui_;
				std::string iotInstanceId_;
				long limit_;
				std::string fuzzyCity_;
				std::string onlineState_;
				bool isEnabled_;
				std::string fuzzyName_;
				long offset_;
				bool ascending_;
				long freqBandPlanGroupId_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string sortingField_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_LISTGATEWAYSREQUEST_H_
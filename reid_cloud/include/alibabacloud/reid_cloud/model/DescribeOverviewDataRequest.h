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

#ifndef ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBEOVERVIEWDATAREQUEST_H_
#define ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBEOVERVIEWDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/reid_cloud/Reid_cloudExport.h>

namespace AlibabaCloud
{
	namespace Reid_cloud
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_CLOUD_EXPORT DescribeOverviewDataRequest : public RpcServiceRequest
			{

			public:
				DescribeOverviewDataRequest();
				~DescribeOverviewDataRequest();

				std::string getDate()const;
				void setDate(const std::string& date);
				std::string getStoreIds()const;
				void setStoreIds(const std::string& storeIds);

            private:
				std::string date_;
				std::string storeIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_CLOUD_MODEL_DESCRIBEOVERVIEWDATAREQUEST_H_
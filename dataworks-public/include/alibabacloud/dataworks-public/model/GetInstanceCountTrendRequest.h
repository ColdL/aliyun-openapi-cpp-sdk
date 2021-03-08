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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCECOUNTTRENDREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCECOUNTTRENDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetInstanceCountTrendRequest : public RpcServiceRequest
			{

			public:
				GetInstanceCountTrendRequest();
				~GetInstanceCountTrendRequest();

				std::string getBeginDate()const;
				void setBeginDate(const std::string& beginDate);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				long getProjectId()const;
				void setProjectId(long projectId);

            private:
				std::string beginDate_;
				std::string endDate_;
				long projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCECOUNTTRENDREQUEST_H_
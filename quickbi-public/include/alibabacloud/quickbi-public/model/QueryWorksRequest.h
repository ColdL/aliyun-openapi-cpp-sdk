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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT QueryWorksRequest : public RpcServiceRequest
			{

			public:
				QueryWorksRequest();
				~QueryWorksRequest();

				std::string getApiLevel()const;
				void setApiLevel(const std::string& apiLevel);
				std::string getWorksId()const;
				void setWorksId(const std::string& worksId);
				std::string getAccessPoint()const;
				void setAccessPoint(const std::string& accessPoint);
				std::string getSignType()const;
				void setSignType(const std::string& signType);

            private:
				std::string apiLevel_;
				std::string worksId_;
				std::string accessPoint_;
				std::string signType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_QUERYWORKSREQUEST_H_
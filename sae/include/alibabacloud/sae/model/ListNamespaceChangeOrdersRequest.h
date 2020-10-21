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

#ifndef ALIBABACLOUD_SAE_MODEL_LISTNAMESPACECHANGEORDERSREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_LISTNAMESPACECHANGEORDERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT ListNamespaceChangeOrdersRequest : public RoaServiceRequest
			{

			public:
				ListNamespaceChangeOrdersRequest();
				~ListNamespaceChangeOrdersRequest();

				std::string getCoType()const;
				void setCoType(const std::string& coType);
				std::string getNamespaceId()const;
				void setNamespaceId(const std::string& namespaceId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getCoStatus()const;
				void setCoStatus(const std::string& coStatus);
				std::string getKey()const;
				void setKey(const std::string& key);

            private:
				std::string coType_;
				std::string namespaceId_;
				int pageSize_;
				int currentPage_;
				std::string coStatus_;
				std::string key_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_LISTNAMESPACECHANGEORDERSREQUEST_H_
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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTAPPGROUPRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTAPPGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListAppGroupResult : public ServiceResult
			{
			public:
				struct AppGroupDetail
				{
					std::string bizName;
					long id;
					std::string name;
				};


				ListAppGroupResult();
				explicit ListAppGroupResult(const std::string &payload);
				~ListAppGroupResult();
				long getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getErrorMsg()const;
				std::vector<AppGroupDetail> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				int pageSize_;
				int pageNumber_;
				std::string errorMsg_;
				std::vector<AppGroupDetail> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTAPPGROUPRESULT_H_
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

#ifndef ALIBABACLOUD_DBFS_MODEL_PUBLISHUPGRADETASKREQUEST_H_
#define ALIBABACLOUD_DBFS_MODEL_PUBLISHUPGRADETASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT PublishUpgradeTaskRequest : public RpcServiceRequest
			{

			public:
				PublishUpgradeTaskRequest();
				~PublishUpgradeTaskRequest();

				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getBatchStrategyList()const;
				void setBatchStrategyList(const std::string& batchStrategyList);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				int pageNumber_;
				std::string batchStrategyList_;
				std::string regionId_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_PUBLISHUPGRADETASKREQUEST_H_
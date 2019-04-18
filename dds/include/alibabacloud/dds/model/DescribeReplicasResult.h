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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEREPLICASRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEREPLICASRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeReplicasResult : public ServiceResult
			{
			public:
				struct Items
				{
					struct Items1
					{
						std::string role;
						std::string dBInstanceStatus;
						std::string dBInstanceId;
						std::string readWriteType;
						std::string regionId;
						std::string dBInstanceDescription;
						std::string engine;
						std::string instanceNetworkType;
					};
					std::string replicaDescription;
					std::string replicaStatus;
					std::vector<Items::Items1> dBInstances;
					std::string domainMode;
					std::string replicaId;
					std::string replicaMode;
				};


				DescribeReplicasResult();
				explicit DescribeReplicasResult(const std::string &payload);
				~DescribeReplicasResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::string getPageNumber()const;
				std::vector<Items> getReplicas()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string pageNumber_;
				std::vector<Items> replicas_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEREPLICASRESULT_H_
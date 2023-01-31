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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEECGRANTRELATIONRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEECGRANTRELATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeEcGrantRelationResult : public ServiceResult
			{
			public:
				struct EcGrantRelationModel
				{
					std::string status;
					std::string instanceName;
					std::string regionNo;
					std::string instanceRouterId;
					std::string gmtCreate;
					std::string vbrInstanceId;
					std::string vbrRegionNo;
					long vbrOwnerUid;
					std::string instanceId;
					long aliUid;
				};


				DescribeEcGrantRelationResult();
				explicit DescribeEcGrantRelationResult(const std::string &payload);
				~DescribeEcGrantRelationResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<EcGrantRelationModel> getEcGrantRelations()const;
				int getPage()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<EcGrantRelationModel> ecGrantRelations_;
				int page_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEECGRANTRELATIONRESULT_H_
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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTDETAILV2RESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTDETAILV2RESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeOssObjectDetailV2Result : public ServiceResult
			{
			public:
				struct OssObjectDetail
				{
					struct Rule
					{
						struct ModelTagsItem
						{
							long id;
							std::string name;
						};
						int category;
						std::vector<Rule::ModelTagsItem> modelTags;
						std::string categoryName;
						std::string riskLevelName;
						long count;
						long riskLevelId;
						std::string ruleName;
						std::vector<std::string> sampleList;
					};
					std::vector<Rule> ruleList;
					std::string bucketName;
					std::string categoryName;
					std::string riskLevelName;
					std::string regionId;
					std::string name;
				};


				DescribeOssObjectDetailV2Result();
				explicit DescribeOssObjectDetailV2Result(const std::string &payload);
				~DescribeOssObjectDetailV2Result();
				OssObjectDetail getOssObjectDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				OssObjectDetail ossObjectDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEOSSOBJECTDETAILV2RESULT_H_
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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_BINDGROUPRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_BINDGROUPRESULT_H_

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
			class ALIBABACLOUD_RETAILCLOUD_EXPORT BindGroupResult : public ServiceResult
			{
			public:
				struct Result
				{
					bool success;
				};


				BindGroupResult();
				explicit BindGroupResult(const std::string &payload);
				~BindGroupResult();
				std::string getErrMsg()const;
				int getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMsg_;
				int code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_BINDGROUPRESULT_H_
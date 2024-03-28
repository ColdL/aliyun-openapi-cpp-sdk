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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_DELETEPROJECTRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_DELETEPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT DeleteProjectResult : public ServiceResult
			{
			public:


				DeleteProjectResult();
				explicit DeleteProjectResult(const std::string &payload);
				~DeleteProjectResult();
				std::string getRequestId()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;
				bool getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;
				bool result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_DELETEPROJECTRESULT_H_
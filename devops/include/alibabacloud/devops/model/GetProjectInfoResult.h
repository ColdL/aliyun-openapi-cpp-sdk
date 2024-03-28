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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETPROJECTINFORESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETPROJECTINFORESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetProjectInfoResult : public ServiceResult
			{
			public:
				struct Project
				{
					std::string iconBig;
					std::string identifierPath;
					std::string typeIdentifier;
					std::string category;
					std::string description;
					std::string statusStageIdentifier;
					std::string subType;
					std::string categoryIdentifier;
					long gmtModified;
					std::string creator;
					std::string iconSmall;
					std::string parentIdentifier;
					std::string name;
					std::string organizationIdentifier;
					long gmtCreate;
					std::string identifier;
					std::string scope;
					std::string logicalStatus;
					std::string iconGroup;
					std::string icon;
					std::string id;
					std::string customCode;
					std::string modifier;
					std::string statusIdentifier;
				};


				GetProjectInfoResult();
				explicit GetProjectInfoResult(const std::string &payload);
				~GetProjectInfoResult();
				Project getProject()const;
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Project project_;
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETPROJECTINFORESULT_H_
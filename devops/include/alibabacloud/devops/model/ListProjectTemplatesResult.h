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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTPROJECTTEMPLATESRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTPROJECTTEMPLATESRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT ListProjectTemplatesResult : public ServiceResult
			{
			public:
				struct _Template
				{
					std::string description;
					long gmtModified;
					std::string resourceType;
					std::string creator;
					std::string resourceCategory;
					std::string name;
					long gmtCreate;
					long type;
					std::string identifier;
					std::string copyFrom;
					std::string spaceIdentifier;
					std::string nameEn;
					std::string spaceType;
					std::string icon;
					std::string modifier;
				};


				ListProjectTemplatesResult();
				explicit ListProjectTemplatesResult(const std::string &payload);
				~ListProjectTemplatesResult();
				std::string getRequestId()const;
				std::vector<_Template> gettemplates()const;
				std::string getErrorMsg()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::vector<_Template> templates_;
				std::string errorMsg_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTPROJECTTEMPLATESRESULT_H_
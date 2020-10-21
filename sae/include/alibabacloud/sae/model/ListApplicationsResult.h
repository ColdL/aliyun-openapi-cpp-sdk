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

#ifndef ALIBABACLOUD_SAE_MODEL_LISTAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_LISTAPPLICATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT ListApplicationsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Application
					{
						struct TagsItem
						{
							std::string value;
							std::string key;
						};
						int instances;
						bool scaleRuleEnabled;
						std::string appId;
						int runningInstances;
						std::string regionId;
						std::string namespaceId;
						bool appDeletingStatus;
						std::string scaleRuleType;
						std::vector<Application::TagsItem> tags;
						std::string appName;
					};
					std::vector<Application> applications;
					int pageSize;
					int currentPage;
					int totalSize;
				};


				ListApplicationsResult();
				explicit ListApplicationsResult(const std::string &payload);
				~ListApplicationsResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_LISTAPPLICATIONSRESULT_H_
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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBECATEGORYTREERESULT_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBECATEGORYTREERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT DescribeCategoryTreeResult : public ServiceResult
			{
			public:
				struct Level
				{
					struct Category
					{
						std::string categoryId;
						std::string parentId;
						std::string previousSiblingId;
						std::string instanceId;
						long level;
						std::string nextSiblingId;
						std::string name;
					};
					std::vector<Level::Category> categories;
				};


				DescribeCategoryTreeResult();
				explicit DescribeCategoryTreeResult(const std::string &payload);
				~DescribeCategoryTreeResult();
				std::vector<Level> getLevels()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Level> levels_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_DESCRIBECATEGORYTREERESULT_H_
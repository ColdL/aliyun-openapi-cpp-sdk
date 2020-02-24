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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYGREETINGCONFIGREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYGREETINGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ModifyGreetingConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyGreetingConfigRequest();
				~ModifyGreetingConfigRequest();

				std::string getGreetingWords()const;
				void setGreetingWords(const std::string& greetingWords);
				std::string getIntentTrigger()const;
				void setIntentTrigger(const std::string& intentTrigger);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);

            private:
				std::string greetingWords_;
				std::string intentTrigger_;
				std::string instanceId_;
				std::string sourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYGREETINGCONFIGREQUEST_H_
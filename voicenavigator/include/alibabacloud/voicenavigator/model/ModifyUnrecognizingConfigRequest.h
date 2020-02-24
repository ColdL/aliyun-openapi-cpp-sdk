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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYUNRECOGNIZINGCONFIGREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYUNRECOGNIZINGCONFIGREQUEST_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ModifyUnrecognizingConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyUnrecognizingConfigRequest();
				~ModifyUnrecognizingConfigRequest();

				std::string getFinalAction()const;
				void setFinalAction(const std::string& finalAction);
				std::string getFinalPrompt()const;
				void setFinalPrompt(const std::string& finalPrompt);
				int getThreshold()const;
				void setThreshold(int threshold);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getFinalActionParams()const;
				void setFinalActionParams(const std::string& finalActionParams);
				std::string getPrompt()const;
				void setPrompt(const std::string& prompt);

            private:
				std::string finalAction_;
				std::string finalPrompt_;
				int threshold_;
				std::string instanceId_;
				std::string finalActionParams_;
				std::string prompt_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYUNRECOGNIZINGCONFIGREQUEST_H_
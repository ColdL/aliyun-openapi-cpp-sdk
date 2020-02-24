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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_AUDITTTSVOICEREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_AUDITTTSVOICEREQUEST_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT AuditTTSVoiceRequest : public RpcServiceRequest
			{

			public:
				AuditTTSVoiceRequest();
				~AuditTTSVoiceRequest();

				std::string getVoice()const;
				void setVoice(const std::string& voice);
				std::string getVolume()const;
				void setVolume(const std::string& volume);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getText()const;
				void setText(const std::string& text);
				std::string getSpeechRate()const;
				void setSpeechRate(const std::string& speechRate);

            private:
				std::string voice_;
				std::string volume_;
				std::string instanceId_;
				std::string text_;
				std::string speechRate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_AUDITTTSVOICEREQUEST_H_
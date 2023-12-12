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

#ifndef ALIBABACLOUD_TINGWU_MODEL_GETTRANSCRIPTIONPHRASESRESULT_H_
#define ALIBABACLOUD_TINGWU_MODEL_GETTRANSCRIPTIONPHRASESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/tingwu/TingwuExport.h>

namespace AlibabaCloud
{
	namespace Tingwu
	{
		namespace Model
		{
			class ALIBABACLOUD_TINGWU_EXPORT GetTranscriptionPhrasesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct 热词列表
					{
						std::string description;
						std::string wordWeights;
						std::string phraseId;
						std::string name;
					};
					std::string status;
					std::vector<热词列表> phrases;
					std::string errorCode;
					std::string errorMessage;
				};


				GetTranscriptionPhrasesResult();
				explicit GetTranscriptionPhrasesResult(const std::string &payload);
				~GetTranscriptionPhrasesResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TINGWU_MODEL_GETTRANSCRIPTIONPHRASESRESULT_H_
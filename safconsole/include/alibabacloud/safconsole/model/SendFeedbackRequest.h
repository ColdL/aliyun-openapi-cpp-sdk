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

#ifndef ALIBABACLOUD_SAFCONSOLE_MODEL_SENDFEEDBACKREQUEST_H_
#define ALIBABACLOUD_SAFCONSOLE_MODEL_SENDFEEDBACKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/safconsole/SafconsoleExport.h>

namespace AlibabaCloud
{
	namespace Safconsole
	{
		namespace Model
		{
			class ALIBABACLOUD_SAFCONSOLE_EXPORT SendFeedbackRequest : public RpcServiceRequest
			{

			public:
				SendFeedbackRequest();
				~SendFeedbackRequest();

				std::string getRiskLabel()const;
				void setRiskLabel(const std::string& riskLabel);
				std::string getSampleType()const;
				void setSampleType(const std::string& sampleType);
				std::string getValue()const;
				void setValue(const std::string& value);

            private:
				std::string riskLabel_;
				std::string sampleType_;
				std::string value_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAFCONSOLE_MODEL_SENDFEEDBACKREQUEST_H_
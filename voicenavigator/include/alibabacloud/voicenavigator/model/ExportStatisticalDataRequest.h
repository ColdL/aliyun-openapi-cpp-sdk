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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_EXPORTSTATISTICALDATAREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_EXPORTSTATISTICALDATAREQUEST_H_

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
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ExportStatisticalDataRequest : public RpcServiceRequest
			{

			public:
				ExportStatisticalDataRequest();
				~ExportStatisticalDataRequest();

				long getBeginTimeLeftRange()const;
				void setBeginTimeLeftRange(long beginTimeLeftRange);
				std::string getExportType()const;
				void setExportType(const std::string& exportType);
				std::string getTimeUnit()const;
				void setTimeUnit(const std::string& timeUnit);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				long getBeginTimeRightRange()const;
				void setBeginTimeRightRange(long beginTimeRightRange);

            private:
				long beginTimeLeftRange_;
				std::string exportType_;
				std::string timeUnit_;
				std::string instanceId_;
				long beginTimeRightRange_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_EXPORTSTATISTICALDATAREQUEST_H_
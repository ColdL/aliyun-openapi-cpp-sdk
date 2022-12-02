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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEALARMEVENTLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEALARMEVENTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeAlarmEventListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct SuspEventsItem
				{
					struct TacticItem
					{
						std::string tacticId;
						std::string tacticDisplayName;
					};
					std::string description;
					std::string k8sNodeId;
					bool containHwMode;
					long endTime;
					std::string k8sNodeName;
					std::string operateErrorCode;
					std::string alarmEventName;
					std::string securityEventIds;
					long gmtModified;
					std::vector<std::string> traceBackInfoList;
					bool hasTraceInfo;
					std::string intranetIp;
					std::string k8sClusterId;
					std::string appName;
					std::string k8sNamespace;
					std::string internetIp;
					std::string containerId;
					std::string alarmEventType;
					std::string solution;
					bool canCancelFault;
					std::string alarmEventNameOriginal;
					std::string instanceId;
					std::string stages;
					long startTime;
					std::string saleVersion;
					std::string k8sPodName;
					bool dealed;
					std::string containerImageId;
					std::string dataSource;
					std::string instanceName;
					long operateTime;
					bool canBeDealOnLine;
					int assetType;
					std::string k8sClusterName;
					std::string uuid;
					std::string containerImageName;
					int suspiciousEventCount;
					std::string alarmUniqueInfo;
					bool autoBreaking;
					std::string level;
					std::string regionId;
					std::vector<SuspEventsItem::TacticItem> tacticItems;
				};


				DescribeAlarmEventListResult();
				explicit DescribeAlarmEventListResult(const std::string &payload);
				~DescribeAlarmEventListResult();
				PageInfo getPageInfo()const;
				std::vector<SuspEventsItem> getSuspEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<SuspEventsItem> suspEvents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEALARMEVENTLISTRESULT_H_
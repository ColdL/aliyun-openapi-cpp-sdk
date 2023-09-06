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

#ifndef ALIBABACLOUD_EHPC_MODEL_GETAUTOSCALECONFIGRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_GETAUTOSCALECONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT GetAutoScaleConfigResult : public ServiceResult
			{
			public:
				struct QueueInfo
				{
					struct InstanceTypeInfo
					{
						std::string spotInterruptionBehavior;
						std::string zoneId;
						std::string vSwitchId;
						std::string hostNamePrefix;
						float spotPriceLimit;
						int spotDuration;
						std::string instanceType;
						std::string spotStrategy;
					};
					struct DataDisksInfo
					{
						std::string dataDiskPerformanceLevel;
						std::string dataDiskKMSKeyId;
						bool dataDiskDeleteWithInstance;
						bool dataDiskEncrypted;
						int dataDiskSize;
						std::string dataDiskCategory;
					};
					std::string hostNameSuffix;
					int minNodesInQueue;
					int maxNodesInQueue;
					bool sortedByInventory;
					std::vector<QueueInfo::DataDisksInfo> dataDisks;
					bool enableAutoGrow;
					std::string resourceGroupId;
					std::string queueImageId;
					int systemDiskSize;
					std::string systemDiskLevel;
					long minNodesPerCycle;
					long maxNodesPerCycle;
					bool enableAutoShrink;
					std::string systemDiskCategory;
					bool autoMinNodesPerCycle;
					std::string hostNamePrefix;
					float spotPriceLimit;
					std::vector<QueueInfo::InstanceTypeInfo> instanceTypes;
					std::string instanceType;
					std::string queueName;
					std::string spotStrategy;
				};


				GetAutoScaleConfigResult();
				explicit GetAutoScaleConfigResult(const std::string &payload);
				~GetAutoScaleConfigResult();
				int getExtraNodesGrowRatio()const;
				bool getEnableAutoGrow()const;
				bool getComputeEnableHt()const;
				std::string getClusterId()const;
				int getMaxNodesInCluster()const;
				int getShrinkIdleTimes()const;
				bool getEnableAutoShrink()const;
				std::string getClusterType()const;
				int getGrowRatio()const;
				int getGrowIntervalInMinutes()const;
				std::string getUid()const;
				int getGrowTimeoutInMinutes()const;
				std::string getDnsConfig()const;
				std::string getImageId()const;
				int getShrinkIntervalInMinutes()const;
				float getSpotPriceLimit()const;
				std::vector<QueueInfo> getQueues()const;
				std::string getExcludeNodes()const;
				std::string getSpotStrategy()const;

			protected:
				void parse(const std::string &payload);
			private:
				int extraNodesGrowRatio_;
				bool enableAutoGrow_;
				bool computeEnableHt_;
				std::string clusterId_;
				int maxNodesInCluster_;
				int shrinkIdleTimes_;
				bool enableAutoShrink_;
				std::string clusterType_;
				int growRatio_;
				int growIntervalInMinutes_;
				std::string uid_;
				int growTimeoutInMinutes_;
				std::string dnsConfig_;
				std::string imageId_;
				int shrinkIntervalInMinutes_;
				float spotPriceLimit_;
				std::vector<QueueInfo> queues_;
				std::string excludeNodes_;
				std::string spotStrategy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_GETAUTOSCALECONFIGRESULT_H_
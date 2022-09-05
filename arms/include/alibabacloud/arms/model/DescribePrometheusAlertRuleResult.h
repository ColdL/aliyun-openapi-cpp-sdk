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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBEPROMETHEUSALERTRULERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBEPROMETHEUSALERTRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT DescribePrometheusAlertRuleResult : public ServiceResult
			{
			public:
				struct PrometheusAlertRule
				{
					struct Label
					{
						std::string value;
						std::string name;
					};
					struct Annotation
					{
						std::string value;
						std::string name;
					};
					int status;
					std::string notifyType;
					std::string type;
					long alertId;
					std::vector<Annotation> annotations;
					std::string alertName;
					std::string message;
					std::string expression;
					std::string clusterId;
					long dispatchRuleId;
					std::vector<Label> labels;
					std::string duration;
				};


				DescribePrometheusAlertRuleResult();
				explicit DescribePrometheusAlertRuleResult(const std::string &payload);
				~DescribePrometheusAlertRuleResult();
				PrometheusAlertRule getPrometheusAlertRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				PrometheusAlertRule prometheusAlertRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBEPROMETHEUSALERTRULERESULT_H_
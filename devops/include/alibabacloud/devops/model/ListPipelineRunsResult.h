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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINERUNSRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINERUNSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/devops/DevopsExport.h>

namespace AlibabaCloud
{
	namespace Devops
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_EXPORT ListPipelineRunsResult : public ServiceResult
			{
			public:
				struct PipelineRun
				{
					std::string status;
					long endTime;
					long pipelineRunId;
					long startTime;
					long pipelineId;
					long triggerMode;
					std::string creatorAccountId;
				};


				ListPipelineRunsResult();
				explicit ListPipelineRunsResult(const std::string &payload);
				~ListPipelineRunsResult();
				long getTotalCount()const;
				std::string getRequestId()const;
				std::string getNextToken()const;
				std::vector<PipelineRun> getpipelineRuns()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string requestId_;
				std::string nextToken_;
				std::vector<PipelineRun> pipelineRuns_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTPIPELINERUNSRESULT_H_
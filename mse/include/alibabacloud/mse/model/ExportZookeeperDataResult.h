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

#ifndef ALIBABACLOUD_MSE_MODEL_EXPORTZOOKEEPERDATARESULT_H_
#define ALIBABACLOUD_MSE_MODEL_EXPORTZOOKEEPERDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ExportZookeeperDataResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string status;
					std::string instanceId;
					std::string contentMap;
					std::string extend;
					std::string exportType;
					long createTime;
					long updateTime;
					int id;
					std::string kubeoneTaskIds;
				};


				ExportZookeeperDataResult();
				explicit ExportZookeeperDataResult(const std::string &payload);
				~ExportZookeeperDataResult();
				std::string getMessage()const;
				std::string getHttpStatusCode()const;
				Data getData()const;
				std::string getDynamicMessage()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string httpStatusCode_;
				Data data_;
				std::string dynamicMessage_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_EXPORTZOOKEEPERDATARESULT_H_
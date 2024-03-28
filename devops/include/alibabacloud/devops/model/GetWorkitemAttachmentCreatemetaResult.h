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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMATTACHMENTCREATEMETARESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMATTACHMENTCREATEMETARESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT GetWorkitemAttachmentCreatemetaResult : public ServiceResult
			{
			public:
				struct UploadInfo
				{
					std::string policy;
					std::string accessid;
					std::string signature;
					std::string host;
					std::string dir;
				};


				GetWorkitemAttachmentCreatemetaResult();
				explicit GetWorkitemAttachmentCreatemetaResult(const std::string &payload);
				~GetWorkitemAttachmentCreatemetaResult();
				UploadInfo getUploadInfo()const;
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				UploadInfo uploadInfo_;
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETWORKITEMATTACHMENTCREATEMETARESULT_H_
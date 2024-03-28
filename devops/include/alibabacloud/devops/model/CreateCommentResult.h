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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATECOMMENTRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATECOMMENTRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT CreateCommentResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct Author
					{
						std::string avatarUrl;
						std::string email;
						std::string aliyunPk;
						std::string username;
						std::string state;
						long id;
						std::string name;
					};
					struct RelatedPatchSet
					{
						std::string patchSetNo;
						std::string commitId;
						std::string patchSetBizId;
						std::string createdAt;
						std::string shortId;
						std::string relatedMergeItemType;
						std::string patchSetName;
					};
					RelatedPatchSet relatedPatchSet;
					std::string filePath;
					std::string parentCommentBizId;
					std::string commentTime;
					std::string lineNumber;
					std::string rootCommentBizId;
					std::string lastEditTime;
					std::string commentType;
					std::string commentBizId;
					std::string state;
					std::string content;
					Author author;
					bool resolved;
					bool deleted;
				};


				CreateCommentResult();
				explicit CreateCommentResult(const std::string &payload);
				~CreateCommentResult();
				std::string getRequestId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATECOMMENTRESULT_H_
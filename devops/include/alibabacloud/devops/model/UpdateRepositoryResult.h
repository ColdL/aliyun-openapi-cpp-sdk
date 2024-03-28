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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATEREPOSITORYRESULT_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATEREPOSITORYRESULT_H_

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
			class ALIBABACLOUD_DEVOPS_EXPORT UpdateRepositoryResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct _Namespace
					{
						std::string path;
						std::string description;
						long ownerId;
						std::string createdAt;
						int visibilityLevel;
						long id;
						std::string updatedAt;
						std::string avatar;
						std::string name;
					};
					std::string path;
					std::string pathWithNamespace;
					std::string defaultBranch;
					std::string lastActivityAt;
					std::string httpUrlToRepo;
					bool issuesEnabled;
					std::string description;
					long creatorId;
					bool wikiEnabled;
					std::string createdAt;
					std::string nameWithNamespace;
					std::string webUrl;
					_Namespace _namespace;
					int visibilityLevel;
					std::string name;
					bool archived;
					std::string sshUrlToRepo;
					std::string avatarUrl;
					bool snippetsEnabled;
					bool buildsEnabled;
					long id;
					bool mergeRequestsEnabled;
				};


				UpdateRepositoryResult();
				explicit UpdateRepositoryResult(const std::string &payload);
				~UpdateRepositoryResult();
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
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATEREPOSITORYRESULT_H_
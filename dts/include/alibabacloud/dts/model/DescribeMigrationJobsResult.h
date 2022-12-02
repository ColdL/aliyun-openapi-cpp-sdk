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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeMigrationJobsResult : public ServiceResult
			{
			public:
				struct MigrationJob
				{
					struct DataInitialization
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct DataSynchronization
					{
						std::string status;
						std::string percent;
						std::string errorMessage;
						std::string delay;
					};
					struct DestinationEndpoint
					{
						std::string oracleSID;
						std::string userName;
						std::string instanceID;
						std::string port;
						std::string iP;
						std::string databaseName;
						std::string instanceType;
						std::string engineName;
					};
					struct MigrationMode
					{
						bool dataInitialization;
						bool dataSynchronization;
						bool structureInitialization;
					};
					struct Precheck
					{
						std::string status;
						std::string percent;
					};
					struct SourceEndpoint
					{
						std::string oracleSID;
						std::string userName;
						std::string instanceID;
						std::string port;
						std::string iP;
						std::string databaseName;
						std::string instanceType;
						std::string engineName;
					};
					struct StructureInitialization
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct SynchronousObject
					{
						std::string databaseName;
						std::string wholeDatabase;
						std::vector<std::string> tableList;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					DataSynchronization dataSynchronization;
					Precheck precheck;
					std::string instanceCreateTime;
					std::string jobCreateTime;
					std::string migrationJobName;
					std::string payType;
					MigrationMode migrationMode;
					std::string migrationJobStatus;
					std::string migrationJobID;
					std::vector<MigrationJob::SynchronousObject> migrationObject;
					DataInitialization dataInitialization;
					DestinationEndpoint destinationEndpoint;
					SourceEndpoint sourceEndpoint;
					std::string migrationJobClass;
					StructureInitialization structureInitialization;
					std::vector<MigrationJob::Tag> tags;
				};


				DescribeMigrationJobsResult();
				explicit DescribeMigrationJobsResult(const std::string &payload);
				~DescribeMigrationJobsResult();
				long getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<MigrationJob> getMigrationJobs()const;
				std::string getErrMessage()const;
				std::string getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<MigrationJob> migrationJobs_;
				std::string errMessage_;
				std::string success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBSRESULT_H_
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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_VERIFYSENTENCERESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_VERIFYSENTENCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT VerifySentenceResult : public ServiceResult
			{
			public:
				struct Delta
				{
					struct Source
					{
						std::vector<std::string> line;
						int position;
					};
					struct Target
					{
						int position;
						std::vector<std::string> line1;
					};
					Target target;
					std::string type;
					Source source;
				};


				VerifySentenceResult();
				explicit VerifySentenceResult(const std::string &payload);
				~VerifySentenceResult();
				int getSourceRole()const;
				int getIncorrectWords()const;
				std::string getMessage()const;
				int getTargetRole()const;
				std::vector<Delta> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int sourceRole_;
				int incorrectWords_;
				std::string message_;
				int targetRole_;
				std::vector<Delta> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_VERIFYSENTENCERESULT_H_
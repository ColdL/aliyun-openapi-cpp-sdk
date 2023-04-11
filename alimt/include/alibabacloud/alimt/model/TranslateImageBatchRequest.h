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

#ifndef ALIBABACLOUD_ALIMT_MODEL_TRANSLATEIMAGEBATCHREQUEST_H_
#define ALIBABACLOUD_ALIMT_MODEL_TRANSLATEIMAGEBATCHREQUEST_H_

#include <alibabacloud/alimt/AlimtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alimt {
namespace Model {
class ALIBABACLOUD_ALIMT_EXPORT TranslateImageBatchRequest : public RpcServiceRequest {
public:
	TranslateImageBatchRequest();
	~TranslateImageBatchRequest();
	std::string getExt() const;
	void setExt(const std::string &ext);
	std::string getSourceLanguage() const;
	void setSourceLanguage(const std::string &sourceLanguage);
	std::string getImageUrls() const;
	void setImageUrls(const std::string &imageUrls);
	std::string getCustomTaskId() const;
	void setCustomTaskId(const std::string &customTaskId);
	std::string getField() const;
	void setField(const std::string &field);
	std::string getTargetLanguage() const;
	void setTargetLanguage(const std::string &targetLanguage);

private:
	std::string ext_;
	std::string sourceLanguage_;
	std::string imageUrls_;
	std::string customTaskId_;
	std::string field_;
	std::string targetLanguage_;
};
} // namespace Model
} // namespace Alimt
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIMT_MODEL_TRANSLATEIMAGEBATCHREQUEST_H_

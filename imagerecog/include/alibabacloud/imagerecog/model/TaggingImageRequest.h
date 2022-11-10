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

#ifndef ALIBABACLOUD_IMAGERECOG_MODEL_TAGGINGIMAGEREQUEST_H_
#define ALIBABACLOUD_IMAGERECOG_MODEL_TAGGINGIMAGEREQUEST_H_

#include <alibabacloud/imagerecog/ImagerecogExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imagerecog {
namespace Model {
class ALIBABACLOUD_IMAGERECOG_EXPORT TaggingImageRequest : public RpcServiceRequest {
public:
	TaggingImageRequest();
	~TaggingImageRequest();
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	int getImageType() const;
	void setImageType(int imageType);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getImageURL() const;
	void setImageURL(const std::string &imageURL);

private:
	bool formatResultToJson_;
	std::string mode_;
	std::string ossFile_;
	int imageType_;
	std::string requestProxyBy_;
	bool async_;
	std::string imageURL_;
};
} // namespace Model
} // namespace Imagerecog
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMAGERECOG_MODEL_TAGGINGIMAGEREQUEST_H_

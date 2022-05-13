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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateApplicationRequest : public RpcServiceRequest {
public:
	CreateApplicationRequest();
	~CreateApplicationRequest();
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getExtraInfo() const;
	void setExtraInfo(const std::string &extraInfo);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getSwitchEnable() const;
	void setSwitchEnable(const std::string &switchEnable);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getSentinelEnable() const;
	void setSentinelEnable(const std::string &sentinelEnable);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string language_;
	std::string source_;
	std::string extraInfo_;
	std::string appName_;
	std::string switchEnable_;
	std::string acceptLanguage_;
	std::string sentinelEnable_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEAPPLICATIONREQUEST_H_

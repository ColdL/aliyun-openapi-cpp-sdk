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

#ifndef ALIBABACLOUD_ADB_MODEL_MODIFYCLUSTERCONNECTIONSTRINGREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_MODIFYCLUSTERCONNECTIONSTRINGREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT ModifyClusterConnectionStringRequest : public RpcServiceRequest {
public:
	ModifyClusterConnectionStringRequest();
	~ModifyClusterConnectionStringRequest();
	std::string getConnectionStringPrefix() const;
	void setConnectionStringPrefix(const std::string &connectionStringPrefix);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getCurrentConnectionString() const;
	void setCurrentConnectionString(const std::string &currentConnectionString);
	int getPort() const;
	void setPort(int port);

private:
	std::string connectionStringPrefix_;
	std::string accessKeyId_;
	std::string dBClusterId_;
	std::string currentConnectionString_;
	int port_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_MODIFYCLUSTERCONNECTIONSTRINGREQUEST_H_

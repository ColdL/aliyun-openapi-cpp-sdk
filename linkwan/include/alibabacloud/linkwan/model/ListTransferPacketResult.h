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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_LISTTRANSFERPACKETRESULT_H_
#define ALIBABACLOUD_LINKWAN_MODEL_LISTTRANSFERPACKETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT ListTransferPacketResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Packet
					{
						std::string classMode;
						std::string base64EncodedMacPayload;
						long fcntUp;
						std::string processEvent;
						int fPort;
						std::string devEui;
						bool hasMacCommand;
						float lsnr;
						int rssi;
						long macPayloadSize;
						std::string gwEui;
						long fcntDown;
						std::string devAddr;
						float freq;
						std::string datr;
						long freqBandPlanGroupId;
						long logMillis;
						std::string messageType;
						bool hasData;
					};
					long totalCount;
					std::vector<Packet> list;
				};


				ListTransferPacketResult();
				explicit ListTransferPacketResult(const std::string &payload);
				~ListTransferPacketResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_LISTTRANSFERPACKETRESULT_H_
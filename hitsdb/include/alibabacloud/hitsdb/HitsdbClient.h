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

#ifndef ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
#define ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HitsdbExport.h"
#include "model/CreateLdpsNamespaceRequest.h"
#include "model/CreateLdpsNamespaceResult.h"
#include "model/CreateLindormInstanceRequest.h"
#include "model/CreateLindormInstanceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetInstanceIpWhiteListRequest.h"
#include "model/GetInstanceIpWhiteListResult.h"
#include "model/GetLdpsNamespacedQuotaRequest.h"
#include "model/GetLdpsNamespacedQuotaResult.h"
#include "model/GetLdpsResourceCostRequest.h"
#include "model/GetLdpsResourceCostResult.h"
#include "model/GetLindormInstanceRequest.h"
#include "model/GetLindormInstanceResult.h"
#include "model/GetLindormInstanceEngineListRequest.h"
#include "model/GetLindormInstanceEngineListResult.h"
#include "model/GetLindormInstanceListRequest.h"
#include "model/GetLindormInstanceListResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyInstancePayTypeRequest.h"
#include "model/ModifyInstancePayTypeResult.h"
#include "model/ReleaseLindormInstanceRequest.h"
#include "model/ReleaseLindormInstanceResult.h"
#include "model/RenewLindormInstanceRequest.h"
#include "model/RenewLindormInstanceResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateInstanceIpWhiteListRequest.h"
#include "model/UpdateInstanceIpWhiteListResult.h"
#include "model/UpgradeLindormInstanceRequest.h"
#include "model/UpgradeLindormInstanceResult.h"


namespace AlibabaCloud
{
	namespace Hitsdb
	{
		class ALIBABACLOUD_HITSDB_EXPORT HitsdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateLdpsNamespaceResult> CreateLdpsNamespaceOutcome;
			typedef std::future<CreateLdpsNamespaceOutcome> CreateLdpsNamespaceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::CreateLdpsNamespaceRequest&, const CreateLdpsNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLdpsNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateLindormInstanceResult> CreateLindormInstanceOutcome;
			typedef std::future<CreateLindormInstanceOutcome> CreateLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::CreateLindormInstanceRequest&, const CreateLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceIpWhiteListResult> GetInstanceIpWhiteListOutcome;
			typedef std::future<GetInstanceIpWhiteListOutcome> GetInstanceIpWhiteListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetInstanceIpWhiteListRequest&, const GetInstanceIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::GetLdpsNamespacedQuotaResult> GetLdpsNamespacedQuotaOutcome;
			typedef std::future<GetLdpsNamespacedQuotaOutcome> GetLdpsNamespacedQuotaOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLdpsNamespacedQuotaRequest&, const GetLdpsNamespacedQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLdpsNamespacedQuotaAsyncHandler;
			typedef Outcome<Error, Model::GetLdpsResourceCostResult> GetLdpsResourceCostOutcome;
			typedef std::future<GetLdpsResourceCostOutcome> GetLdpsResourceCostOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLdpsResourceCostRequest&, const GetLdpsResourceCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLdpsResourceCostAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceResult> GetLindormInstanceOutcome;
			typedef std::future<GetLindormInstanceOutcome> GetLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceRequest&, const GetLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceEngineListResult> GetLindormInstanceEngineListOutcome;
			typedef std::future<GetLindormInstanceEngineListOutcome> GetLindormInstanceEngineListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceEngineListRequest&, const GetLindormInstanceEngineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceEngineListAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceListResult> GetLindormInstanceListOutcome;
			typedef std::future<GetLindormInstanceListOutcome> GetLindormInstanceListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceListRequest&, const GetLindormInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceListAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstancePayTypeResult> ModifyInstancePayTypeOutcome;
			typedef std::future<ModifyInstancePayTypeOutcome> ModifyInstancePayTypeOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ModifyInstancePayTypeRequest&, const ModifyInstancePayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePayTypeAsyncHandler;
			typedef Outcome<Error, Model::ReleaseLindormInstanceResult> ReleaseLindormInstanceOutcome;
			typedef std::future<ReleaseLindormInstanceOutcome> ReleaseLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ReleaseLindormInstanceRequest&, const ReleaseLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewLindormInstanceResult> RenewLindormInstanceOutcome;
			typedef std::future<RenewLindormInstanceOutcome> RenewLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::RenewLindormInstanceRequest&, const RenewLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceIpWhiteListResult> UpdateInstanceIpWhiteListOutcome;
			typedef std::future<UpdateInstanceIpWhiteListOutcome> UpdateInstanceIpWhiteListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpdateInstanceIpWhiteListRequest&, const UpdateInstanceIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::UpgradeLindormInstanceResult> UpgradeLindormInstanceOutcome;
			typedef std::future<UpgradeLindormInstanceOutcome> UpgradeLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpgradeLindormInstanceRequest&, const UpgradeLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLindormInstanceAsyncHandler;

			HitsdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HitsdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HitsdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HitsdbClient();
			CreateLdpsNamespaceOutcome createLdpsNamespace(const Model::CreateLdpsNamespaceRequest &request)const;
			void createLdpsNamespaceAsync(const Model::CreateLdpsNamespaceRequest& request, const CreateLdpsNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLdpsNamespaceOutcomeCallable createLdpsNamespaceCallable(const Model::CreateLdpsNamespaceRequest& request) const;
			CreateLindormInstanceOutcome createLindormInstance(const Model::CreateLindormInstanceRequest &request)const;
			void createLindormInstanceAsync(const Model::CreateLindormInstanceRequest& request, const CreateLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLindormInstanceOutcomeCallable createLindormInstanceCallable(const Model::CreateLindormInstanceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetInstanceIpWhiteListOutcome getInstanceIpWhiteList(const Model::GetInstanceIpWhiteListRequest &request)const;
			void getInstanceIpWhiteListAsync(const Model::GetInstanceIpWhiteListRequest& request, const GetInstanceIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceIpWhiteListOutcomeCallable getInstanceIpWhiteListCallable(const Model::GetInstanceIpWhiteListRequest& request) const;
			GetLdpsNamespacedQuotaOutcome getLdpsNamespacedQuota(const Model::GetLdpsNamespacedQuotaRequest &request)const;
			void getLdpsNamespacedQuotaAsync(const Model::GetLdpsNamespacedQuotaRequest& request, const GetLdpsNamespacedQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLdpsNamespacedQuotaOutcomeCallable getLdpsNamespacedQuotaCallable(const Model::GetLdpsNamespacedQuotaRequest& request) const;
			GetLdpsResourceCostOutcome getLdpsResourceCost(const Model::GetLdpsResourceCostRequest &request)const;
			void getLdpsResourceCostAsync(const Model::GetLdpsResourceCostRequest& request, const GetLdpsResourceCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLdpsResourceCostOutcomeCallable getLdpsResourceCostCallable(const Model::GetLdpsResourceCostRequest& request) const;
			GetLindormInstanceOutcome getLindormInstance(const Model::GetLindormInstanceRequest &request)const;
			void getLindormInstanceAsync(const Model::GetLindormInstanceRequest& request, const GetLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceOutcomeCallable getLindormInstanceCallable(const Model::GetLindormInstanceRequest& request) const;
			GetLindormInstanceEngineListOutcome getLindormInstanceEngineList(const Model::GetLindormInstanceEngineListRequest &request)const;
			void getLindormInstanceEngineListAsync(const Model::GetLindormInstanceEngineListRequest& request, const GetLindormInstanceEngineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceEngineListOutcomeCallable getLindormInstanceEngineListCallable(const Model::GetLindormInstanceEngineListRequest& request) const;
			GetLindormInstanceListOutcome getLindormInstanceList(const Model::GetLindormInstanceListRequest &request)const;
			void getLindormInstanceListAsync(const Model::GetLindormInstanceListRequest& request, const GetLindormInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceListOutcomeCallable getLindormInstanceListCallable(const Model::GetLindormInstanceListRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyInstancePayTypeOutcome modifyInstancePayType(const Model::ModifyInstancePayTypeRequest &request)const;
			void modifyInstancePayTypeAsync(const Model::ModifyInstancePayTypeRequest& request, const ModifyInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstancePayTypeOutcomeCallable modifyInstancePayTypeCallable(const Model::ModifyInstancePayTypeRequest& request) const;
			ReleaseLindormInstanceOutcome releaseLindormInstance(const Model::ReleaseLindormInstanceRequest &request)const;
			void releaseLindormInstanceAsync(const Model::ReleaseLindormInstanceRequest& request, const ReleaseLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseLindormInstanceOutcomeCallable releaseLindormInstanceCallable(const Model::ReleaseLindormInstanceRequest& request) const;
			RenewLindormInstanceOutcome renewLindormInstance(const Model::RenewLindormInstanceRequest &request)const;
			void renewLindormInstanceAsync(const Model::RenewLindormInstanceRequest& request, const RenewLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewLindormInstanceOutcomeCallable renewLindormInstanceCallable(const Model::RenewLindormInstanceRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateInstanceIpWhiteListOutcome updateInstanceIpWhiteList(const Model::UpdateInstanceIpWhiteListRequest &request)const;
			void updateInstanceIpWhiteListAsync(const Model::UpdateInstanceIpWhiteListRequest& request, const UpdateInstanceIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceIpWhiteListOutcomeCallable updateInstanceIpWhiteListCallable(const Model::UpdateInstanceIpWhiteListRequest& request) const;
			UpgradeLindormInstanceOutcome upgradeLindormInstance(const Model::UpgradeLindormInstanceRequest &request)const;
			void upgradeLindormInstanceAsync(const Model::UpgradeLindormInstanceRequest& request, const UpgradeLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeLindormInstanceOutcomeCallable upgradeLindormInstanceCallable(const Model::UpgradeLindormInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_

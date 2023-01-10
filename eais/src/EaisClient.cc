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

#include <alibabacloud/eais/EaisClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Eais;
using namespace AlibabaCloud::Eais::Model;

namespace
{
	const std::string SERVICE_NAME = "eais";
}

EaisClient::EaisClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eais");
}

EaisClient::EaisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eais");
}

EaisClient::EaisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "eais");
}

EaisClient::~EaisClient()
{}

EaisClient::AttachEaiOutcome EaisClient::attachEai(const AttachEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachEaiOutcome(AttachEaiResult(outcome.result()));
	else
		return AttachEaiOutcome(outcome.error());
}

void EaisClient::attachEaiAsync(const AttachEaiRequest& request, const AttachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::AttachEaiOutcomeCallable EaisClient::attachEaiCallable(const AttachEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachEaiOutcome()>>(
			[this, request]()
			{
			return this->attachEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::ChangeResourceGroupOutcome EaisClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void EaisClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::ChangeResourceGroupOutcomeCallable EaisClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiOutcome EaisClient::createEai(const CreateEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiOutcome(CreateEaiResult(outcome.result()));
	else
		return CreateEaiOutcome(outcome.error());
}

void EaisClient::createEaiAsync(const CreateEaiRequest& request, const CreateEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiOutcomeCallable EaisClient::createEaiCallable(const CreateEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiOutcome()>>(
			[this, request]()
			{
			return this->createEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiAllOutcome EaisClient::createEaiAll(const CreateEaiAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiAllOutcome(CreateEaiAllResult(outcome.result()));
	else
		return CreateEaiAllOutcome(outcome.error());
}

void EaisClient::createEaiAllAsync(const CreateEaiAllRequest& request, const CreateEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEaiAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiAllOutcomeCallable EaisClient::createEaiAllCallable(const CreateEaiAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiAllOutcome()>>(
			[this, request]()
			{
			return this->createEaiAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiEciOutcome EaisClient::createEaiEci(const CreateEaiEciRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiEciOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiEciOutcome(CreateEaiEciResult(outcome.result()));
	else
		return CreateEaiEciOutcome(outcome.error());
}

void EaisClient::createEaiEciAsync(const CreateEaiEciRequest& request, const CreateEaiEciAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEaiEci(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiEciOutcomeCallable EaisClient::createEaiEciCallable(const CreateEaiEciRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiEciOutcome()>>(
			[this, request]()
			{
			return this->createEaiEci(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiEcsOutcome EaisClient::createEaiEcs(const CreateEaiEcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiEcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiEcsOutcome(CreateEaiEcsResult(outcome.result()));
	else
		return CreateEaiEcsOutcome(outcome.error());
}

void EaisClient::createEaiEcsAsync(const CreateEaiEcsRequest& request, const CreateEaiEcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEaiEcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiEcsOutcomeCallable EaisClient::createEaiEcsCallable(const CreateEaiEcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiEcsOutcome()>>(
			[this, request]()
			{
			return this->createEaiEcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::CreateEaiJupyterOutcome EaisClient::createEaiJupyter(const CreateEaiJupyterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEaiJupyterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEaiJupyterOutcome(CreateEaiJupyterResult(outcome.result()));
	else
		return CreateEaiJupyterOutcome(outcome.error());
}

void EaisClient::createEaiJupyterAsync(const CreateEaiJupyterRequest& request, const CreateEaiJupyterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEaiJupyter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::CreateEaiJupyterOutcomeCallable EaisClient::createEaiJupyterCallable(const CreateEaiJupyterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEaiJupyterOutcome()>>(
			[this, request]()
			{
			return this->createEaiJupyter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DeleteEaiOutcome EaisClient::deleteEai(const DeleteEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEaiOutcome(DeleteEaiResult(outcome.result()));
	else
		return DeleteEaiOutcome(outcome.error());
}

void EaisClient::deleteEaiAsync(const DeleteEaiRequest& request, const DeleteEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DeleteEaiOutcomeCallable EaisClient::deleteEaiCallable(const DeleteEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEaiOutcome()>>(
			[this, request]()
			{
			return this->deleteEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DeleteEaiAllOutcome EaisClient::deleteEaiAll(const DeleteEaiAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEaiAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEaiAllOutcome(DeleteEaiAllResult(outcome.result()));
	else
		return DeleteEaiAllOutcome(outcome.error());
}

void EaisClient::deleteEaiAllAsync(const DeleteEaiAllRequest& request, const DeleteEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEaiAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DeleteEaiAllOutcomeCallable EaisClient::deleteEaiAllCallable(const DeleteEaiAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEaiAllOutcome()>>(
			[this, request]()
			{
			return this->deleteEaiAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DescribeEaisOutcome EaisClient::describeEais(const DescribeEaisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEaisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEaisOutcome(DescribeEaisResult(outcome.result()));
	else
		return DescribeEaisOutcome(outcome.error());
}

void EaisClient::describeEaisAsync(const DescribeEaisRequest& request, const DescribeEaisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEais(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DescribeEaisOutcomeCallable EaisClient::describeEaisCallable(const DescribeEaisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEaisOutcome()>>(
			[this, request]()
			{
			return this->describeEais(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DescribeRegionsOutcome EaisClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void EaisClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DescribeRegionsOutcomeCallable EaisClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::DetachEaiOutcome EaisClient::detachEai(const DetachEaiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachEaiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachEaiOutcome(DetachEaiResult(outcome.result()));
	else
		return DetachEaiOutcome(outcome.error());
}

void EaisClient::detachEaiAsync(const DetachEaiRequest& request, const DetachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachEai(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::DetachEaiOutcomeCallable EaisClient::detachEaiCallable(const DetachEaiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachEaiOutcome()>>(
			[this, request]()
			{
			return this->detachEai(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EaisClient::GetInstanceMetricsOutcome EaisClient::getInstanceMetrics(const GetInstanceMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceMetricsOutcome(GetInstanceMetricsResult(outcome.result()));
	else
		return GetInstanceMetricsOutcome(outcome.error());
}

void EaisClient::getInstanceMetricsAsync(const GetInstanceMetricsRequest& request, const GetInstanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EaisClient::GetInstanceMetricsOutcomeCallable EaisClient::getInstanceMetricsCallable(const GetInstanceMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceMetricsOutcome()>>(
			[this, request]()
			{
			return this->getInstanceMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}


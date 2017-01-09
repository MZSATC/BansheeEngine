//********************************** Banshee Engine (www.banshee3d.com) **************************************************//
//**************** Copyright (c) 2016 Marko Pintera (marko.pintera@gmail.com). All rights reserved. **********************//
#pragma once

#include "BsD3D11Prerequisites.h"
#include "BsCommandBufferManager.h"

namespace bs { namespace ct
{
	/** @addtogroup D3D11
	 *  @{
	 */

	/** 
	 * Handles creation of DirectX 11 command buffers. See CommandBuffer. 
	 *
	 * @note Core thread only.
	 */
	class D3D11CommandBufferManager : public CommandBufferManager
	{
	public:
		/** @copydoc CommandBufferManager::createInternal() */
		SPtr<CommandBuffer> createInternal(GpuQueueType type, UINT32 deviceIdx = 0, UINT32 queueIdx = 0,
			bool secondary = false) override;
	};

	/** @} */
}}
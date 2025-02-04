/*******************************************************************************
 * Copyright 2009-2015 Jörg Müller
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "devices/DefaultSynchronizer.h"
#include "devices/IHandle.h"

AUD_NAMESPACE_BEGIN

void DefaultSynchronizer::seek(std::shared_ptr<IHandle> handle, float time)
{
	handle->seek(time);
}

float DefaultSynchronizer::getPosition(std::shared_ptr<IHandle> handle)
{
	return handle->getPosition();
}

void DefaultSynchronizer::play()
{
}

void DefaultSynchronizer::stop()
{
}

void DefaultSynchronizer::setSyncCallback(ISynchronizer::syncFunction function, void* data)
{
}

int DefaultSynchronizer::isPlaying()
{
	return -1;
}

AUD_NAMESPACE_END

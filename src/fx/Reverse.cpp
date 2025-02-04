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

#include "fx/Reverse.h"
#include "fx/ReverseReader.h"

AUD_NAMESPACE_BEGIN

Reverse::Reverse(std::shared_ptr<ISound> sound) :
		Effect(sound)
{
}

std::shared_ptr<IReader> Reverse::createReader()
{
	return std::shared_ptr<IReader>(new ReverseReader(getReader()));
}

AUD_NAMESPACE_END

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

#include "generator/Square.h"
#include "generator/SquareReader.h"

AUD_NAMESPACE_BEGIN

Square::Square(float frequency, SampleRate sampleRate) :
	m_frequency(frequency),
	m_sampleRate(sampleRate)
{
}

float Square::getFrequency() const
{
	return m_frequency;
}

std::shared_ptr<IReader> Square::createReader()
{
	return std::shared_ptr<IReader>(new SquareReader(m_frequency, m_sampleRate));
}

AUD_NAMESPACE_END

/*******************************************************************************
 * Copyright 2009-2015 Rongcui Dong
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

#include "fx/PhaseVocoderReader.h"

AUD_NAMESPACE_BEGIN

PhaseVocoderReader::PhaseVocoderReader(std::shared_ptr<IReader> reader, float pitch, float speed) :
		EffectReader(reader), m_pitch(pitch), m_speed(speed)
{
}

Specs PhaseVocoderReader::getSpecs() const
{
	Specs specs = m_reader->getSpecs();
	specs.rate *= m_pitch;
	return specs;
}

float PhaseVocoderReader::getPitch() const
{
	return m_pitch;
}

void PhaseVocoderReader::setPitch(float pitch)
{
	if(pitch > 0.0f)
		m_pitch = pitch;
}

float PhaseVocoderReader::getSpeed() const
{
	return m_speed;
}

void PhaseVocoderReader::setSpeed(float speed)
{
  m_speed = speed;
}
AUD_NAMESPACE_END

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

#pragma once

/**
 * @file Triangle.h
 * @ingroup generator
 * The Triangle class.
 */

#include "ISound.h"
#include "respec/Specification.h"

AUD_NAMESPACE_BEGIN

/**
 * This sound creates a reader that plays a triangle tone.
 */
class AUD_API Triangle : public ISound
{
private:
	/**
	 * The frequence of the triangle wave.
	 */
	const float m_frequency;

	/**
	 * The target sample rate for output.
	 */
	const SampleRate m_sampleRate;

	// delete copy constructor and operator=
	Triangle(const Triangle&) = delete;
	Triangle& operator=(const Triangle&) = delete;

public:
	/**
	 * Creates a new triangle sound.
	 * \param frequency The desired frequency.
	 * \param sampleRate The target sample rate for playback.
	 */
	Triangle(float frequency,
					 SampleRate sampleRate = RATE_44100);

	/**
	 * Returns the frequency of the triangle wave.
	 */
	float getFrequency() const;

	virtual std::shared_ptr<IReader> createReader();
};

AUD_NAMESPACE_END

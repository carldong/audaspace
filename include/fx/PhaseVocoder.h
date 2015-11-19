
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

#pragma once

/**
 * @file PhaseVocoder.h
 * @ingroup fx
 * The PhaseVocoder class.
 */

#include "fx/Effect.h"

AUD_NAMESPACE_BEGIN

/**
 * This sound changes the pitch and speed of another sound with phase
 * vocoder algorithm.
 */
class AUD_API PhaseVocoder : public Effect
{
private:
	/**
	 * The phase vocoder.
	 */
	const float m_pitch;
  const float m_speed;

	// delete copy constructor and operator=
	PhaseVocoder(const PhaseVocoder&) = delete;
	PhaseVocoder& operator=(const PhaseVocoder&) = delete;

public:
	/**
	 * Creates a new phase vocoder sound.
	 * \param sound The input sound.
	 * \param pitch The desired pitch.
   * \param speed The desired speed
	 */
	PhaseVocoder(std::shared_ptr<ISound> sound, float pitch, float speed);

	virtual std::shared_ptr<IReader> createReader();
};

AUD_NAMESPACE_END

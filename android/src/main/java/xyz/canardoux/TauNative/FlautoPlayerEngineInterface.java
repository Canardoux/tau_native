package xyz.canardoux.TauNative;
/*
 * Copyright 2021 Canardoux.
 *
 * This file is part of the τ Sound project.
 *
 * τ Sound is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Public License version 3 (GPL3.0), 
 * as published by the Free Software Foundation.
 *
 * τ Sound is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * This Source Code Form is subject to the terms of the GNU Public
 * License, v. 3.0. If a copy of the GPL was not distributed with this
 * file, You can obtain one at https://www.gnu.org/licenses/.
 */

abstract class FlautoPlayerEngineInterface
{
	abstract void _startPlayer(String path, int sampleRate, int numChannels, int blockSize, FlautoPlayer theSession) throws Exception;
	abstract void _stop();
	abstract void _pausePlayer() throws Exception;
	abstract void _resumePlayer() throws Exception;
	abstract void _setVolume(double volume) throws Exception;
	abstract void _setSpeed(double speed) throws Exception;
	abstract void _seekTo(long millisec);
	abstract boolean _isPlaying();
	abstract long _getDuration();
	abstract long _getCurrentPosition();
	abstract int feed(byte[] data) throws Exception;
	abstract void _finish() ;
	abstract void _play();


}

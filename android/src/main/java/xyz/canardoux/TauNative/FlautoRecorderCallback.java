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

import xyz.canardoux.TauNative.Flauto.*;

public interface FlautoRecorderCallback
{
        public abstract void openRecorderCompleted(boolean success);
        public abstract void closeRecorderCompleted(boolean success);
        public abstract void startRecorderCompleted(boolean success);
        public abstract void stopRecorderCompleted(boolean success, String url);
        public abstract void pauseRecorderCompleted(boolean success);
        public abstract void resumeRecorderCompleted(boolean success);
        public abstract void updateRecorderProgressDbPeakLevel(double normalizedPeakLevel, long duration);
        public abstract void recordingData ( byte[] data);
        abstract public void log(t_LOG_LEVEL level, String msg);

}
//
//  AudioRecorder.h
//  
//
//  Created by larpoux on 02/05/2020.
//
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

#ifndef FlautoRecorderEngine_h
#define FlautoRecorderEngine_h


#import <AVFoundation/AVFoundation.h>
#import "FlautoRecorder.h"

#ifdef __cplusplus

class AudioRecInterface
{
public:
        /* ctor */ //AudioRecInterface(t_CODEC coder, NSString* path, NSMutableDictionary* audioSettings) = 0;
        virtual ~AudioRecInterface(){};
        virtual void stopRecorder() = 0;
        virtual void startRecorder() = 0;
        virtual void resumeRecorder() = 0;
        virtual void pauseRecorder() = 0;
        virtual NSNumber* recorderProgress() = 0;
        virtual NSNumber* dbPeakProgress() = 0;
        virtual int getStatus() = 0;

        int16_t maxAmplitude = 0;
        FlautoRecorder* flautoRecorder; // Owner

};



class AudioRecorderEngine : public AudioRecInterface
{
private:
        AVAudioRecorder* audioRecorder;
        AVAudioEngine* engine;
        NSFileHandle * fileHandle;
        AVAudioConverterInputStatus inputStatus = AVAudioConverterInputStatus_NoDataNow;
        long dateCumul = 0;
        long previousTS;
        int status;

public:


       /* ctor */ AudioRecorderEngine(t_CODEC coder, NSString* path, NSMutableDictionary* audioSettings, FlautoRecorder* owner);
        virtual void startRecorder();
        virtual void stopRecorder();
        virtual void pauseRecorder();
        NSNumber* recorderProgress();
        virtual void resumeRecorder();
        virtual NSNumber* dbPeakProgress();
        virtual int getStatus();
        


};


class avAudioRec : public AudioRecInterface
{

private:
        AVAudioRecorder* audioRecorder;
        bool isPaused;
        
public:
        /* ctor */avAudioRec( t_CODEC coder, NSString* path, NSMutableDictionary *audioSettings, FlautoRecorder* owner);
        /* dtor */virtual ~avAudioRec();
        void startRecorder();
        void stopRecorder();
        void resumeRecorder();
        void pauseRecorder();
        NSNumber* recorderProgress();
        virtual NSNumber* dbPeakProgress();
        virtual int getStatus();

};

#endif // #ifdef __cplusplus
#endif /* FlautoRecorderEngine_h */

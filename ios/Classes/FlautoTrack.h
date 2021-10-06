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

@interface FlautoTrack : NSObject
{
    NSString* path;
    NSString* title;
    NSString* author;
    NSString* albumArtUrl;
    NSString* albumArtAsset;
    NSData* dataBuffer;
}

@property(nonatomic, retain) NSString* _Nullable path;
@property(nonatomic, retain) NSString* _Nullable title;
@property(nonatomic, retain) NSString* _Nullable author;
@property(nonatomic, retain) NSString* _Nullable albumArtUrl;
@property(nonatomic, retain) NSString* _Nullable albumArtAsset;
@property(nonatomic, retain) NSString* _Nullable albumArtFile;
@property(nonatomic, retain) NSData* _Nullable dataBuffer;

- (_Nullable id)initFromJson:(NSString* _Nullable )jsonString;
- (_Nullable id)initFromDictionary:(NSDictionary* _Nullable )jsonData;
- (bool)isUsingPath;

@end

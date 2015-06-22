//
//  MusicLibrary.h
//  Algorhythm
//
//  Created by XCodeClub on 2015-06-21.
//  Copyright (c) 2015 XCodeClub. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackground;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;


@end

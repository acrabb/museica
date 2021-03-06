//
//  Project.h
//  Museica
//
//  Created by Andre on 10/13/13.
//  Copyright (c) 2013 Musecia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Track.h"
#import "Constants.h"
#import "AEAudioFilePlayer.h"

@class MuseicaModel;

@interface Project : NSObject

// -- Properties -------------------------------------
@property (strong, nonatomic) MuseicaModel  *museModel;
@property (weak, nonatomic) NSString    *name;
@property (nonatomic) int               number;
@property (nonatomic) int               numTracks;
@property (strong, nonatomic) NSMutableArray *tracks;
@property (strong, nonatomic) Track       *currentTrack;

// -- Methods ----------------------------------------
-(id) initWithNumber:(int)number;
-(Track *) createTrack;

@end

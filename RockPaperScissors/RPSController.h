//
//  RPSController.h
//  RockPaperScissors
//
//  Created by Jena Grafton on 1/25/17.
//  Copyright © 2017 Bella Voce Productions. All rights reserved.
//

//This class is used to start an RPSGame and keep track of the results

#import <Foundation/Foundation.h>
#import "RPSGame.h"


@interface RPSController : NSObject

@property (nonatomic) RPSGame* game;

-(void)throwDown:(Move)playersMove;
-(NSString*)resultString:(RPSGame*) game;
-(NSString*)messageForGame:(RPSGame*) game;

@end

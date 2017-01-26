//
//  RPSGame.h
//  RockPaperScissors
//
//  Created by Jena Grafton on 1/25/17.
//  Copyright © 2017 Bella Voce Productions. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"


@interface RPSGame : NSObject

@property (nonatomic) RPSTurn* firstTurn;
@property (nonatomic) RPSTurn* secondTurn;

-(instancetype)initWithFirstTurn:(RPSTurn *) firstTurn
                      SecondTurn:(RPSTurn *) secondTurn;

-(RPSTurn *)winner;
-(RPSTurn *)loser;

@end

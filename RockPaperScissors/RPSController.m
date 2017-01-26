//
//  RPSController.m
//  RockPaperScissors
//
//  Created by Jena Grafton on 1/25/17.
//  Copyright © 2017 Bella Voce Productions. All rights reserved.
//

#import "RPSController.h"
#import "RPSTurn.h"

@implementation RPSController

-(void)setGame:(RPSGame*)game {
    _game = game;
}

-(void)throwDown:(Move)playersMove {
    
    //Here the RPSTurn class generates the player's turn
    RPSTurn *playersTurn = [[RPSTurn alloc] initWithMove:playersMove];
    RPSTurn *computersTurn = [[RPSTurn alloc] init];
    
    
    
    // The RPSGame class stores the results of a game
    self.game = [[RPSGame alloc] initWithFirstTurn:playersTurn
                                        SecondTurn:computersTurn];
    
}

-(NSString*)resultString:(RPSGame*) game {
    
    return [game.firstTurn defeats:game.secondTurn] ? @"You Win!" : @"You Lose!";
}


-(NSString*)messageForGame:(RPSGame*) game {
    // First, handle the tie
    if (game.firstTurn.move == game.secondTurn.move) {
        return @"It's a tie!";
    } else {
    
        // Here we build up the results message "Rock crushes Scissors. You Win!" etc.
        NSString *winnerString = [[game winner] description];
        NSString *loserString = [[game loser]  description];
        NSString *resultsString = [self resultString: game];
        
        NSString *wholeString =  [NSString stringWithFormat:@"%@ %@ %@ %@ %@", winnerString, @" defeats ", loserString, @".",  resultsString];
    
        return wholeString;
    }
}


@end

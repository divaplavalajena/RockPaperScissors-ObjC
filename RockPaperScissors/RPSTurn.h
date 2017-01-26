//
//  RPSTurn.h
//  RockPaperScissors
//
//  Created by Jena Grafton on 1/25/17.
//  Copyright © 2017 Bella Voce Productions. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, Move) {
    Rock,
    Paper,
    Scissors,
    Invalid
    
};

@interface RPSTurn : NSObject

@property (nonatomic) Move move;

-(instancetype)initWithMove:(Move) move;
-(instancetype)init;
-(Move)generateMove;
-(NSString*)description;
-(BOOL)defeats:(RPSTurn *)opponent;

@end

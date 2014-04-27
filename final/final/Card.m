//
//  Card.m
//  Test1b
//
//  Created by Vincent Pillinger on 2/27/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import "Card.h"

@implementation Card

-(int)match:(Card *)aCard {
    if ([aCard.contents isEqualToString:self.contents]) {
        return 1;
    }
    else {
        return 0;
    }
}

@end

//
//  InteractablePoint2D.m
//  Interactable
//
//  Created by Quan Nguyen on 10/24/18.
//  Copyright © 2018 Wix. All rights reserved.
//

#import "InteractablePoint2D.h"

@implementation InteractablePoint2D

- (id)copyWithZone:(__unused NSZone *)zone
{
    return self;
}

- (CGPoint) CGPointValue
{
    return CGPointMake(self.x, self.y);
}

@end

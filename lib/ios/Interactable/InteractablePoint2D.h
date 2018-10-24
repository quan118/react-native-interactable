//
//  InteractablePoint2D.h
//  Interactable
//
//  Created by Quan Nguyen on 10/24/18.
//  Copyright © 2018 Wix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InteractablePoint2D : NSObject<NSCopying>

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;

- (CGPoint)CGPointValue;

@end

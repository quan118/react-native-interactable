//
//  RCTConvert+Interactable.h
//  Interactable
//
//  Created by Tal Kol on 1/27/17.
//  Copyright © 2017 Wix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTConvert.h>

@class InteractablePoint;
@class InteractablePoint2D;

@interface RCTConvert (Interactable)

+ (NSArray<InteractablePoint *> *)InteractablePointArray:(id)json;
+ (NSArray<InteractablePoint2D *> *) InteractablePoint2DArray:(id)json;
@end

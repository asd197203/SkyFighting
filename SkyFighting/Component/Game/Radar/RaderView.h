//
//  RaderView.h
//  testCamera
//
//  Created by lxx on 15/12/22.
//  Copyright © 2015年 lxx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RaderView : UIView
-(void)setRadius:(CGFloat)radius;
-(void)setRorate:(float)angle;
-(NSInteger)addSpot:(float)angle Len:(float)len;
-(void)updateSpot:(NSInteger)id Len:(float)len;
-(void)removeSpot:(NSInteger)id;
@end

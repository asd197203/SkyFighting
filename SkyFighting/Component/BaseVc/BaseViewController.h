//
//  BaseViewController.h
//  RunMan-User
//
//  Created by lxx on 15/5/19.
//  Copyright (c) 2015年 lxx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController
-(void)onBack;
-(void)hideBackButton;
-(void)removeHud;
@property (assign,readonly,nonatomic) BOOL bFirstAppear;
@property (assign,nonatomic) BOOL bHud;
@property (assign,nonatomic) BOOL bAutoHiddenBar;
@property (strong,nonatomic) UIScrollView* viewScrollAutoHidden;
@end

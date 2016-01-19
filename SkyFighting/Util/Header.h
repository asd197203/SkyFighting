//
//  Header.h
//  wg-buyer
//
//  Created by lxx on 15/3/12.
//  Copyright (c) 2015年 WeiGuang. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "Util.h"
#import "UserDefaults.h"
#import <SVProgressHUD.h>
#import <POP.h>
#import "TipView.h"
#define E(msg) [SVProgressHUD showErrorWithStatus:msg maskType:SVProgressHUDMaskTypeGradient]
#define S(msg) [SVProgressHUD showSuccessWithStatus:msg maskType:SVProgressHUDMaskTypeGradient]
#define COL(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
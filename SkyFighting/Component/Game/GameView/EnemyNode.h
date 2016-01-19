//
//  EnemyNode.h
//  SkyFighting
//
//  Created by lxx on 15/12/27.
//  Copyright © 2015年 lxx. All rights reserved.
//

#import <SceneKit/SceneKit.h>

@interface EnemyNode : SCNNode
@property (assign,nonatomic) NSInteger raderID;
@property (assign,nonatomic) NSInteger blood;
-(void)fire;
@end

//
//  CouresCollectionViewLayout.h
//  超级课程表
//
//  Created by 黄文海 on 16/5/24.
//  Copyright © 2016年 huang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CouresCollectionViewLayout : UICollectionViewLayout
@property(nonatomic,assign)CGFloat width;
@property(nonatomic,assign)CGFloat height;
@property(nonatomic,strong)NSMutableArray*array;
@end

//
//  DragTableViewCell.h
//  WYDragLayout
//
//  Created by 薇谙 on 2018/7/17.
//  Copyright © 2018年 WY. All rights reserved.
//

#import "BaseTableViewCell.h"

typedef void(^PullUpBlock) ();

@interface DragTableViewCell : BaseTableViewCell

@property (strong, nonatomic)UIButton* pullUpBtn;

@property (copy, nonatomic)PullUpBlock block;


@end

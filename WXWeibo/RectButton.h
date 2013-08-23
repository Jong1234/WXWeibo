//
//  RectButton.h
//  WXWeibo
//
//  Created by 张 启迪 on 13-8-23.
//  Copyright (c) 2013年 张 启迪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RectButton : UIButton

@property(nonatomic,retain)UILabel *rectTitleLabel;
@property(nonatomic,retain)UILabel *subtitleLabel;

@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)NSString *subtitle;

@end

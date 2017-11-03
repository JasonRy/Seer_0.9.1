//
//  DBMProjectView.h
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/19.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DBMProjectViewDelegate <NSObject>

@optional

- (void)DBMProjectViewSelected:(NSString *)indexStr;

@end


@interface DBMProjectView : UIView

-(instancetype)initProjectViewWithFrame:(CGRect)frame data:(NSDictionary *)dataDict;


@property (assign, nonatomic)id<DBMProjectViewDelegate>theDelegate;


@end

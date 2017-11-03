//
//  DBMTopView.h
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/23.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DBMTopViewDelegate <NSObject>

@optional

- (void)DBMTopViewQuitAction;

@end


@interface DBMTopView : UIImageView

-(instancetype)initTopViewWithFrame:(CGRect)frame data:(NSArray *)dataArray;

@property (assign, nonatomic)id<DBMTopViewDelegate>theDelegate;

-(void)updateViewsData;

@property (nonatomic, strong) NSDateFormatter *formatter;


@end

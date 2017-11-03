//
//  DBMEquipView.h
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/22.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DBMEquipViewDelegate <NSObject>

@optional

- (void)DBMEquipView:(NSString *)indexStr;

@end

@interface DBMEquipView : UIView

-(instancetype)initEquipViewWithFrame:(CGRect)frame data:(NSDictionary *)dataDict;

@property (assign, nonatomic)id<DBMEquipViewDelegate>theDelegate;

@end

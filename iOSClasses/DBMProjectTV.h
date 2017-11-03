//
//  DBMProjectTV.h
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/22.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProjectModel.h"

@protocol DBMProjectTVDelegate <NSObject>

@optional

- (void)DBMProjectTVSelected:(ProjectModel *)projectModel;

@end


@interface DBMProjectTV : UIImageView<UITableViewDelegate,UITableViewDataSource>

-(instancetype)initProjectTVWithFrame:(CGRect)frame data:(NSArray *)dataArray;

@property (assign, nonatomic)id<DBMProjectTVDelegate>theDelegate;

-(void)reloadTVDataWithData:(NSArray *)dataArray;

-(void)reloadTVWithModel:(ProjectModel *)model;


@end

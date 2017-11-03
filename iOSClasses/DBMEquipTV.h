//
//  DBMEquipTV.h
//  Unity-iPhone
//
//  Created by 陶晨麟 on 2017/5/24.
//
//  

#import <UIKit/UIKit.h>

#import "ProjectModel.h"

@protocol DBMEquipTVDelegate <NSObject>

@optional

- (void)DBMEquipTVSelected:(ProjectModel *)projectModel;

@end


@interface DBMEquipTV : UIImageView<UITableViewDelegate,UITableViewDataSource>

-(instancetype)initEquipTVWithFrame:(CGRect)frame data:(NSArray *)dataArray selsectStatus:(NSString *)status;

@property (assign, nonatomic)id<DBMEquipTVDelegate>theDelegate;

-(void)reloadTVDataWithData:(NSArray *)dataArray selsectStatus:theSelectStatus;

-(void)reloadTVWithModel:(ProjectModel *)model;


@end

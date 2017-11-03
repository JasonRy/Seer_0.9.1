//
//  DBMEquipNameTV.h
//  Unity-iPhone
//
//  Created by 陶晨麟 on 2017/5/24.
//
//

#import <UIKit/UIKit.h>

@protocol DBMEquipNameTVDelegate <NSObject>

@optional

- (void)DBMEquipNameTV:(float )equipNameImageView_f;

@end



@interface DBMEquipNameTV : UIImageView<UITableViewDelegate,UITableViewDataSource>

-(instancetype)initEquipNameTVWithFrame:(CGRect)frame data:(NSArray *)dataArray;

@property (assign, nonatomic)id<DBMEquipNameTVDelegate>theDelegate;

-(void)reloadTVDataWithData:(NSArray *)dataArray;


@end

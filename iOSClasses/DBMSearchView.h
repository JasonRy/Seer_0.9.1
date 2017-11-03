//
//  DBMSearchView.h
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/23.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol DBMSearchViewDelegate <NSObject>

@optional

- (void)DBMSearchView:(NSString *)SearchTxtStr;

@end


@interface DBMSearchView : UIImageView<UITextFieldDelegate>


-(instancetype)initSearchViewWithFrame:(CGRect)frame data:(NSArray *)dataArray;

@property (assign, nonatomic)id<DBMSearchViewDelegate>theDelegate;


@end

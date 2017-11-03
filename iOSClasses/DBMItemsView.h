//
//  DBMItemsView.h
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/19.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DBMItemsViewDelegate <NSObject>

@optional


- (void)DBMItemsViewSelected:(NSString *)indexStr;

- (void)DBMItemsViewQiut;

@end


@interface DBMItemsView : UIView

@property (assign, nonatomic)id<DBMItemsViewDelegate>theDelegate;

@property (retain,nonatomic) UIImageView *img1;
@property (retain,nonatomic) UIImageView *img2;
@property (retain,nonatomic) UIImageView *img3;
@property (retain,nonatomic) UIImageView *img4;
@property (retain,nonatomic) UIImageView *img5;
@property (retain,nonatomic) UIImageView *img6;
@property (retain,nonatomic) UIImageView *img7;
@property (retain,nonatomic) UIImageView *img8;
@property (retain,nonatomic) UIImageView *img9;
@property (retain,nonatomic) UIImageView *img10;
@property (retain,nonatomic) UIImageView *img11;

@property (assign,nonatomic)  __block  int i ;

-(instancetype)initItemsViewWithFrame:(CGRect)frame data:(NSArray *)dataArray;

@end

//
//  SelectBuildingView.h
//  IphoneMapSdkDemo
//
//  Created by 陶晨麟 on 16/11/17.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SelectBuildingViewDelegate <NSObject>

- (void)SelectBuildingViewDelegate:(NSUInteger )view_tag;

@end


@interface SelectBuildingView : UIView

@property (assign, nonatomic)id<SelectBuildingViewDelegate>theDelegate;



@property (assign,nonatomic) NSUInteger view_tag;

@property (assign,nonatomic) float count_fault;

@property (assign,nonatomic) float count_total;

@property (assign,nonatomic) float power_amount;


//第二个界面
@property (weak, nonatomic) IBOutlet UIImageView *bgImageView;

@property (weak, nonatomic) IBOutlet UIImageView *cheweiImg;

@property (weak, nonatomic) IBOutlet UILabel *cheweiLabel;

@property (weak, nonatomic) IBOutlet UIImageView *renyuanImg;

@property (weak, nonatomic) IBOutlet UILabel *renyuanLabel;

@property (weak, nonatomic) IBOutlet UIImageView *shebeiImg;

@property (weak, nonatomic) IBOutlet UILabel *shebeiLabel;

@property (weak, nonatomic) IBOutlet UIImageView *haodianImg;

@property (weak, nonatomic) IBOutlet UILabel *haodianLabel;

@property (weak, nonatomic) IBOutlet UILabel *cheweiNumLabel;

@property (weak, nonatomic) IBOutlet UILabel *renyuanNumLabel;

@property (weak, nonatomic) IBOutlet UILabel *shebeiNumLabel;

@property (weak, nonatomic) IBOutlet UILabel *haodianNumLabel;


@property (weak, nonatomic) IBOutlet UIImageView *cheweiNumImg;

@property (weak, nonatomic) IBOutlet UIImageView *renyuanNumImg;


@property (weak, nonatomic) IBOutlet UIImageView *shebeiNumImg;

@property (weak, nonatomic) IBOutlet UIImageView *haodianNumImg;

//button

@property (weak, nonatomic) IBOutlet UIButton *ssxxBtn;

@property (weak, nonatomic) IBOutlet UIButton *fzxxBtn;


@property (weak, nonatomic) IBOutlet UIImageView *cheweiBGImg;

@property (weak, nonatomic) IBOutlet UIImageView *renyuanBGImg;

@property (weak, nonatomic) IBOutlet UIImageView *shebeiBGImg;

@property (weak, nonatomic) IBOutlet UIImageView *haodianBGImg;



//第二个界面

@property (weak, nonatomic) IBOutlet UIImageView *buleImg1;

@property (weak, nonatomic) IBOutlet UILabel *xxxxLabel;

@property (weak, nonatomic) IBOutlet UILabel *xxxxTextLabel;


@property (weak, nonatomic) IBOutlet UIImageView *buleImg2;

@property (weak, nonatomic) IBOutlet UILabel *wygsLabel;

@property (weak, nonatomic) IBOutlet UILabel *wygsTextLabel;


@property (weak, nonatomic) IBOutlet UIButton *viewChangeBtn;

@property (assign,nonatomic) NSUInteger signNum;



@end

//
//  DBMItemsView.m
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/19.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import "DBMItemsView.h"
#import "UIColor+Hex.h"
#import "NDHudView.h"


@implementation DBMItemsView

{
    //数据源
    CGRect backViewFrame;
    UIImageView *backView;
    
    UIImageView *topIconView;
    
    
    UIButton *dbm_projectBtn;
    UIButton *dbm_deviceBtn;
    UIButton *dbm_orderBtn;
    
    
    UIImageView *dbm_projectIV;
    UIImageView *dbm_deviceIV;
    UIImageView *dbm_orderIV;
    
    UILabel *dbm_projectLB;
    UILabel *dbm_deviceLB;
    UILabel *dbm_orderLB;
    
    
    UIImageView *dbm_projectLineIV;
    UIImageView *dbm_deviceLineIV;
    
    NSString *indexStr;
    
    int jbxs;
    
    int dianji;
    
    float dianji_i;
    
    
}

-(instancetype)initItemsViewWithFrame:(CGRect)frame data:(NSArray *)dataArray
{
    if (self = [super init]) {
        
        [self setFrame:frame];
        
        backViewFrame= frame;
        
        [self createUI];
    }
    return self;
}


-(void)createUI
{
    
    jbxs = 5;
    
    dianji = 0;
    
    dianji_i = 0.0;
    
    
    
//    [self setFrame:backViewFrame];
    
    backView = [[UIImageView alloc]init];
    
    [backView setImage:[UIImage imageNamed:@"cdl"]];
    
    [backView setFrame:CGRectMake(0, 0, 201.5, 1024.0)];
    
    [backView setUserInteractionEnabled:YES];

    topIconView = [[UIImageView alloc]initWithFrame:CGRectMake(38, 34, 254.0/2, 276.0/2.0)];
    [topIconView setImage:[UIImage imageNamed:@"logo-dbm_new"]];
    [backView addSubview:topIconView];
    
    [self setUserInteractionEnabled:YES];
    
    [self addSubview:backView];
    
    
    
    //项目总数
    dbm_projectIV = [[UIImageView alloc]initWithFrame:CGRectMake(24, 226, 27, 27)];
    [dbm_projectIV setImage:[UIImage imageNamed:@"icon_xmzu_hui"]];
    [dbm_projectIV setUserInteractionEnabled:YES];
    
    [backView addSubview:dbm_projectIV];
    
    dbm_projectLB = [[UILabel alloc]initWithFrame:CGRectMake(51+32, 231.5, 90, 25)];
    [dbm_projectLB setText:@"项目状态"];
    [dbm_projectLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_projectLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    [backView addSubview:dbm_projectLB];
    
    dbm_projectLineIV = [[UIImageView alloc]initWithFrame:CGRectMake(24, 226+30+35, 140, 1)];
    [dbm_projectLineIV setImage:[UIImage imageNamed:@"fdf_sd"]];
//    [dbm_projectLineIV setBackgroundColor:[UIColor lightGrayColor]];
    [backView addSubview:dbm_projectLineIV];
    
    
    dbm_projectBtn = [[UIButton alloc]initWithFrame:CGRectMake(24, 226, backViewFrame.size.width-48, 40)];
    [dbm_projectBtn addTarget:self action:@selector(dbm_projectAction) forControlEvents:UIControlEventTouchUpInside];
    
//    [dbm_projectBtn setBackgroundColor:[UIColor whiteColor]];
    
//    bringSubviewToFront
    
    [backView addSubview:dbm_projectBtn];
    
    
    //设备总数
    dbm_deviceIV = [[UIImageView alloc]initWithFrame:CGRectMake(24, 226 + 90, 29, 25)];
    [dbm_deviceIV setImage:[UIImage imageNamed:@"icon_sbzs"]];
    [backView addSubview:dbm_deviceIV];
    
    
    dbm_deviceLB = [[UILabel alloc]initWithFrame:CGRectMake(51+32, 231.5 + 90, 90, 25)];
    [dbm_deviceLB setText:@"设备状态"];
    [dbm_deviceLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_deviceLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    [backView addSubview:dbm_deviceLB];
    
    
    dbm_deviceLineIV = [[UIImageView alloc]initWithFrame:CGRectMake(24, 226 + 30+ 90 + 35, 140, 1)];
    [dbm_deviceLineIV setImage:[UIImage imageNamed:@"fdf_sd"]];
//    [dbm_deviceLineIV setBackgroundColor:[UIColor lightGrayColor]];
    [backView addSubview:dbm_deviceLineIV];
    
    dbm_deviceBtn = [[UIButton alloc]initWithFrame:CGRectMake(24, 226+ 90, backViewFrame.size.width-48, 40)];
    [dbm_deviceBtn addTarget:self action:@selector(dbm_deviceAction) forControlEvents:UIControlEventTouchUpInside];
    [backView addSubview:dbm_deviceBtn];
    
    
    //工单数量
    dbm_orderIV = [[UIImageView alloc]initWithFrame:CGRectMake(24, 226 + 90*2, 29, 28)];
    [dbm_orderIV setImage:[UIImage imageNamed:@"icon_gdsl_hui"]];
    [backView addSubview:dbm_orderIV];
    
    dbm_orderLB = [[UILabel alloc]initWithFrame:CGRectMake(51+32, 231.5 + 90*2, 90, 25)];
    [dbm_orderLB setText:@"工单状态"];
    [dbm_orderLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_orderLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    [backView addSubview:dbm_orderLB];
    
    
    dbm_orderBtn = [[UIButton alloc]initWithFrame:CGRectMake(24, 226+ 90*2, backViewFrame.size.width-48, 40)];
    [dbm_orderBtn addTarget:self action:@selector(dbm_orderAction) forControlEvents:UIControlEventTouchUpInside];
    
    [backView addSubview:dbm_orderBtn];
    
    
    //旋转图片组
    self.img1 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
//    self.img2 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img3 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img4 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img5 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img6 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img7 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img8 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img9 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img10 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    self.img11 =  [[UIImageView alloc] initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    
    [self.img1 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
//    [self.img2 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img3 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img4 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img5 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img6 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img7 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img8 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img9 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img10 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    [self.img11 setCenter:CGPointMake((58.0+110.0/2.0), backViewFrame.size.height - 84-55)];
    
    [self.img1 setImage:[UIImage imageNamed:@"底-2.png"]];
//    [self.img2 setImage:[UIImage imageNamed:@"底.png"]];
    [self.img3 setImage:[UIImage imageNamed:@"里-1.png"]];
    [self.img4 setImage:[UIImage imageNamed:@"里-2.png"]];
    [self.img5 setImage:[UIImage imageNamed:@"外-1.png"]];
    [self.img6 setImage:[UIImage imageNamed:@"外-2.png"]];
    [self.img7 setImage:[UIImage imageNamed:@"外-3.png"]];
    [self.img8 setImage:[UIImage imageNamed:@"外-4.png"]];
    [self.img9 setImage:[UIImage imageNamed:@"外-5.png"]];
    [self.img10 setImage:[UIImage imageNamed:@"外-6.png"]];
    [self.img11 setImage:[UIImage imageNamed:@"外-7.png"]];
    
    
    [self addSubview:self.img1];
//    [self addSubview:self.img2];
//    [self addSubview:self.img3];
    [self addSubview:self.img4];
    [self addSubview:self.img5];
//    [self addSubview:self.img6];
    [self addSubview:self.img7];
    [self addSubview:self.img8];
    [self addSubview:self.img9];
//    [self addSubview:self.img10];
//    [self addSubview:self.img11];
    
    
    UIButton *tiaozhuanBtn = [[UIButton alloc]initWithFrame:(CGRectMake(58.0, backViewFrame.size.height - 84-110, 110, 110))];
    
    [tiaozhuanBtn addTarget:self action:@selector(tiaozhuanBtnAction) forControlEvents:UIControlEventTouchUpInside];
    
    [self addSubview:tiaozhuanBtn];
    
    [self startAnimation];
    
}

-(void)tiaozhuanBtnAction
{
    
    dianji = 1;
    
    NSLog(@"点击了旋转按钮");
    
    [self startAnimation];

}


- (void)startAnimation
{
    
    
    // UIViewAnimationOptionCurveLinear匀速执行(默认就是它)
    
    [UIView animateWithDuration:0.5 delay:0 options:UIViewAnimationOptionCurveLinear animations:^{
        
//        NSLog(@"%d",_i);
        
        [self.img1 setTransform:CGAffineTransformMakeRotation(-_i * M_PI *1.0 / 180.f)];
        
//        self.img2.transform = CGAffineTransformMakeRotation(_i * M_PI *0.4 / 180.f);
        self.img3.transform = CGAffineTransformMakeRotation(_i * M_PI *0.8 / 180.f);
        self.img4.transform = CGAffineTransformMakeRotation(-_i * M_PI *6.0 / 180.f);
        self.img5.transform = CGAffineTransformMakeRotation(_i * M_PI *8.0/ 180.f);
        self.img6.transform = CGAffineTransformMakeRotation(-_i * M_PI *0.4/ 180.f);
        self.img7.transform = CGAffineTransformMakeRotation(-_i * M_PI *2.5 / 180.f);
        self.img8.transform = CGAffineTransformMakeRotation(_i * M_PI *2.0/ 180.f);
        self.img9.transform = CGAffineTransformMakeRotation(_i * M_PI *2.0/ 180.f);
//        self.img10.transform = CGAffineTransformMakeRotation(_i * M_PI *0.4/ 180.f);
        self.img11.transform = CGAffineTransformMakeRotation(_i * M_PI *3.0/ 180.f);
        
        
        
    } completion:^(BOOL finished) {
        
        
//        NSLog(@"jbxs 基本系数 %d",jbxs);
        
        if (dianji) {
            
            //幂函数
            dianji_i += 0.5;
            
            if (dianji_i >2.0) {
                
                if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMItemsViewQiut)]) {
                    [_theDelegate DBMItemsViewQiut];
                }
                //超过 2.0秒之后，依然旋转。
                _i +=200;
                [self startAnimation];
            }
            else
            {
                jbxs = 50 * pow(dianji_i, 2);
                
                _i +=jbxs;
                
                [self startAnimation];
                
            }
        }
        else
        {
            _i +=jbxs;
            
            [self startAnimation];
        }
        
    }];
}


-(void)dbm_projectAction
{
    NSLog(@"dbm_projectAction");
    [dbm_projectIV setImage:[UIImage imageNamed:@"icon_xmzs"]];
    [dbm_projectLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    
    [dbm_deviceIV setImage:[UIImage imageNamed:@"icon_sbzs"]];
    [dbm_deviceLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    [dbm_orderIV setImage:[UIImage imageNamed:@"icon_gdsl_hui"]];
    [dbm_orderLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    indexStr = @"0";
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMItemsViewSelected:)]) {
        [_theDelegate DBMItemsViewSelected:indexStr];
    }
    
}

-(void)dbm_deviceAction
{
    [dbm_projectIV setImage:[UIImage imageNamed:@"icon_xmzu_hui"]];
    [dbm_projectLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    
    [dbm_deviceIV setImage:[UIImage imageNamed:@"icon_sbzs_lan"]];
    [dbm_deviceLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    
    
    [dbm_orderIV setImage:[UIImage imageNamed:@"icon_gdsl_hui"]];
    [dbm_orderLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    indexStr = @"1";
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMItemsViewSelected:)]) {
        [_theDelegate DBMItemsViewSelected:indexStr];
    }
    
    NSLog(@"dbm_deviceAction");
    
}


-(void)dbm_orderAction
{
    [NDHudView showText:@"该模块暂未开放！" animated:YES configParameter:^(NDHudView *config) {
        
    } duration:1.0 inView:self];
    
    return;
    
    [dbm_projectIV setImage:[UIImage imageNamed:@"icon_xmzu_hui"]];
    [dbm_projectLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    [dbm_deviceIV setImage:[UIImage imageNamed:@"icon_sbzs"]];
    [dbm_deviceLB setTextColor:[UIColor colorWithHexString:@"bababa"]];
    
    [dbm_orderIV setImage:[UIImage imageNamed:@"icon_gdsl_lan"]];
    [dbm_orderLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    
    indexStr = @"2";
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMItemsViewSelected:)]) {
        [_theDelegate DBMItemsViewSelected:indexStr];
    }
    NSLog(@"dbm_orderAction");
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end

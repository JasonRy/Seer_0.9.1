//
//  DBMEquipView.m
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/22.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import "DBMEquipView.h"
#import "UIColor+Hex.h"
#import "CATCurveProgressView.h"


@implementation DBMEquipView
{
    //数据源
    CGRect backViewFrame;
    UIImageView *bgImageView;
    
    
    UILabel *norPercentLabel;
    UILabel *problemPercentLabel;
    UILabel *offlinePercentLabel;
    
    
    UILabel *norNumLabel;
    UILabel *problemNumLabel;
    UILabel *offlineNumLabel;
    
    
    UILabel *norTitleLabel;
    UILabel *problemTitleLabel;
    UILabel *offlineTitleLabel;
    
    CATCurveProgressView *circle1;
    CATCurveProgressView *circle2;
    CATCurveProgressView *circle3;
    
    
    UIImageView *equipmentImageView1;
    UIImageView *equipmentImageView2;
    UIImageView *equipmentImageView3;
    
    
    UIButton *equipBtn1;
    UIButton *equipBtn2;
    UIButton *equipBtn3;
    
    //0正常设备、1故障设备、2离线设备
    NSString *indexStr;
    
    NSDictionary *equip_dict;
    
}


-(instancetype)initEquipViewWithFrame:(CGRect)frame data:(NSDictionary *)dataDict
{
    if (self = [super init]) {
        
        [self setFrame:frame];
        
        [self setUserInteractionEnabled:YES];
        
        equip_dict = dataDict;
        
        backViewFrame= frame;
        
        [self createUI];
    }
    return self;
}


-(void)createUI
{
    
    bgImageView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, backViewFrame.size.width, backViewFrame.size.height)];
    
    [bgImageView setImage:[UIImage imageNamed:@"shebeizongshu_nor"]];
    
    [bgImageView setUserInteractionEnabled:YES];
    
    indexStr =@"";
    
    [self addSubview:bgImageView];

    UILabel *equipNumLabel = [[UILabel alloc]initWithFrame:CGRectMake(24, 14, 93, 21)];
    [equipNumLabel setText:@"设备总数"];
    [equipNumLabel setTextAlignment:NSTextAlignmentCenter];
    
    [equipNumLabel setTextColor:[UIColor whiteColor]];
    [equipNumLabel setFont:[UIFont boldSystemFontOfSize:21.0f]];
    [bgImageView addSubview:equipNumLabel];
    
    
    UILabel *equipNumsLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 25 - 75, 14,  75, 21)];
    [equipNumsLabel setText:[equip_dict objectForKey:@"device_all"]];
    
    [equipNumsLabel setTextColor:[UIColor whiteColor]];
    [equipNumsLabel setFont:[UIFont boldSystemFontOfSize:21.0f]];
    [bgImageView addSubview:equipNumsLabel];
    
    
    norPercentLabel = [[UILabel alloc]initWithFrame:CGRectMake(32, 75, 62, 18)];
    
    [norPercentLabel setTextAlignment:NSTextAlignmentCenter];
    
    
    [norPercentLabel setText:[NSString stringWithFormat:@"%.1f%%",([[equip_dict objectForKey:@"device_good"] floatValue]/[[equip_dict objectForKey:@"device_all"] floatValue]) *100]];
    
    [norPercentLabel setCenter:CGPointMake(49, 83)];
    
    
    [norPercentLabel setTextColor:[UIColor whiteColor]];
    [norPercentLabel setFont:[UIFont boldSystemFontOfSize:20.0f]];
    [bgImageView addSubview:norPercentLabel];
    
    
    problemPercentLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width/2.0 - 11.5, 75, 62, 18)];
    
    [problemPercentLabel setText:[NSString stringWithFormat:@"%.1f%%",([[equip_dict objectForKey:@"device_fault"] floatValue]/[[equip_dict objectForKey:@"device_all"] floatValue]) *100]];
    [problemPercentLabel setTextAlignment:NSTextAlignmentLeft];
    [problemPercentLabel setTextColor:[UIColor whiteColor]];
    [problemPercentLabel setFont:[UIFont boldSystemFontOfSize:20.0f]];
    [bgImageView addSubview:problemPercentLabel];
    [problemPercentLabel setCenter:CGPointMake(152, 83)];
    
    offlinePercentLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 32 - 45, 75, 62, 18)];
    [offlinePercentLabel setTextAlignment:NSTextAlignmentCenter];
    [offlinePercentLabel setText:[NSString stringWithFormat:@"%.1f%%",([[equip_dict objectForKey:@"device_offline"] floatValue]/[[equip_dict objectForKey:@"device_all"] floatValue]) *100]];
    [offlinePercentLabel setTextColor:[UIColor whiteColor]];
    [offlinePercentLabel setFont:[UIFont boldSystemFontOfSize:20.0f]];
    [bgImageView addSubview:offlinePercentLabel];
    [offlinePercentLabel setCenter:CGPointMake(244, 83)];
    
    
    norNumLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, 210, backViewFrame.size.width/3.0, 17)];
    [norNumLabel setTextAlignment:NSTextAlignmentCenter];
    [norNumLabel setText:[equip_dict objectForKey:@"device_good"]];
    [norNumLabel setTextColor:[UIColor whiteColor]];
    [norNumLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:norNumLabel];
    
    
    norTitleLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, 234, backViewFrame.size.width/3.0, 17)];
    [norTitleLabel setTextAlignment:NSTextAlignmentCenter];
    [norTitleLabel setText:@"正常设备"];
    [norTitleLabel setTextColor:[UIColor colorWithHexString:@"7c7d7e"]];
    [norTitleLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:norTitleLabel];
    
    
    norTitleLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, 234, backViewFrame.size.width/3.0, 17)];
    [norTitleLabel setTextAlignment:NSTextAlignmentCenter];
    [norTitleLabel setText:@"正常设备"];
    [norTitleLabel setTextColor:[UIColor colorWithHexString:@"7c7d7e"]];
    [norTitleLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:norTitleLabel];
    
    
    problemNumLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width/2.0 - 23, 210, 46, 17)];
    [problemNumLabel setTextAlignment:NSTextAlignmentCenter];
    [problemNumLabel setText:[equip_dict objectForKey:@"device_fault"]];
    [problemNumLabel setTextColor:[UIColor whiteColor]];
    [problemNumLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:problemNumLabel];
    
    
    problemTitleLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width/3.0, 234, backViewFrame.size.width/3.0, 17)];
    [problemTitleLabel setTextAlignment:NSTextAlignmentCenter];
    [problemTitleLabel setText:@"故障设备"];
    [problemTitleLabel setTextColor:[UIColor colorWithHexString:@"7c7d7e"]];
    [problemTitleLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:problemTitleLabel];
    
    
    
    offlineNumLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width/3.0*2, 210,backViewFrame.size.width/3.0, 17)];
    [offlineNumLabel setTextAlignment:NSTextAlignmentCenter];
    [offlineNumLabel setText:[equip_dict objectForKey:@"device_offline"]];
    [offlineNumLabel setTextColor:[UIColor whiteColor]];
    [offlineNumLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:offlineNumLabel];
    
    
    offlineTitleLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width/3.0*2, 234, backViewFrame.size.width/3.0, 17)];
    [offlineTitleLabel setTextAlignment:NSTextAlignmentCenter];
    [offlineTitleLabel setText:@"故障设备"];
    [offlineTitleLabel setTextColor:[UIColor colorWithHexString:@"7c7d7e"]];
    [offlineTitleLabel setFont:[UIFont systemFontOfSize:17.0]];
    [bgImageView addSubview:offlineTitleLabel];
    
    
    
    [self configCircles];
    
    
}


-(void)configCircles
{
    
    //默认状态
    
    //圆环circle2
    
    circle1 = [[CATCurveProgressView alloc]init];
    
    [circle1 setFrame:CGRectMake(20,246.0/2.0, 67, 67)];
    
    [circle1 setCenter:CGPointMake(51, 156)];
    
    circle1.backgroundColor = [UIColor clearColor];
    
    [circle1 setUserInteractionEnabled:YES];
    
    circle1.progressColor =[UIColor colorWithHexString:@"a9a9a8"];
    
    circle1.startAngle = -90;
    circle1.endAngle = 270;
    circle1.progressLineWidth = 3;
    
    circle1.progress = 0.55;
    
    [bgImageView addSubview:circle1];
    
    
    equipmentImageView1 = [[UIImageView alloc]init];
    [equipmentImageView1 setFrame:CGRectMake(11.5, 11.5, 42, 42)];
    [equipmentImageView1 setImage:[UIImage imageNamed:@"zc_nor"]];
    [circle1 addSubview:equipmentImageView1];
    [equipmentImageView1 setUserInteractionEnabled:YES];
    [circle1 setUserInteractionEnabled:YES];
    
    
    equipBtn1 = [[UIButton alloc]init];
    
    [equipBtn1 setFrame:CGRectMake(0, 0, 80, 80)];
    
    [equipBtn1 addTarget:self action:@selector(equipBtn1Action) forControlEvents:UIControlEventTouchUpInside];
    
    [circle1 addSubview:equipBtn1];
    
    
    
    
    //圆环circle2
    circle2 = [[CATCurveProgressView alloc]init];
    [circle2 setFrame:CGRectMake(backViewFrame.size.width/2.0 -(67.0/2.0) , 246.0/2.0, 67, 67)];
    circle2.backgroundColor = [UIColor clearColor];
    
    [circle2 setUserInteractionEnabled:YES];
    circle2.progress = 0.25;
    circle2.progressColor =[UIColor colorWithHexString:@"a9a9a8"];
    
    circle2.startAngle = -90;
    circle2.endAngle = 270;
    circle2.progressLineWidth = 3;
    
    [bgImageView addSubview:circle2];
    
    equipmentImageView2 = [[UIImageView alloc]init];
    [equipmentImageView2 setFrame:CGRectMake(11.5, 11.5, 42, 42)];
    [equipmentImageView2 setImage:[UIImage imageNamed:@"gz_nor"]];
    [circle2 addSubview:equipmentImageView2];
    [equipmentImageView2 setUserInteractionEnabled:YES];
    [circle2 setUserInteractionEnabled:YES];
    
    
    equipBtn2 = [[UIButton alloc]init];
    
    [equipBtn2 setFrame:CGRectMake(0, 0, 80, 80)];
    
    [equipBtn2 addTarget:self action:@selector(equipBtn2Action) forControlEvents:UIControlEventTouchUpInside];
    
    [circle2 addSubview:equipBtn2];
    
    
    
    //circle3
    circle3 = [[CATCurveProgressView alloc]init];
    [circle3 setFrame:CGRectMake(208,246.0/2.0, 67, 67)];
    circle3.backgroundColor = [UIColor clearColor];
    
    
    circle3.progressColor =[UIColor colorWithHexString:@"a9a9a8"];
   
    
    circle3.startAngle = -90;
    circle3.endAngle = 270;
    circle3.progressLineWidth = 3;
    circle3.progress = 0.2;
    [bgImageView addSubview:circle3];
    
    
    equipmentImageView3 = [[UIImageView alloc]init];
    [equipmentImageView3 setFrame:CGRectMake(11.5, 11.5, 42, 42)];
    [equipmentImageView3 setImage:[UIImage imageNamed:@"lx_nor"]];
    [circle3 addSubview:equipmentImageView3];
    [equipmentImageView3 setUserInteractionEnabled:YES];
    [circle3 setUserInteractionEnabled:YES];
    
    
    equipBtn3 = [[UIButton alloc]init];
    [equipBtn3 setFrame:CGRectMake(0, 0, 80, 80)];
    [equipBtn3 addTarget:self action:@selector(equipBtn3Action) forControlEvents:UIControlEventTouchUpInside];
    [circle3 addSubview:equipBtn3];
    
    circle1.progress = 0.0;
    circle2.progress = 0.0;
    circle3.progress = 0.0;
    
    
    [self changeProgress];
    
}


//改变进度
-(void)changeProgress
{
    
    circle1.progress = ([[equip_dict objectForKey:@"device_good"] floatValue]/[[equip_dict objectForKey:@"device_all"] floatValue]);
    circle2.progress = ([[equip_dict objectForKey:@"device_fault"] floatValue]/[[equip_dict objectForKey:@"device_all"] floatValue]);
    circle3.progress = ([[equip_dict objectForKey:@"device_offline"] floatValue]/[[equip_dict objectForKey:@"device_all"] floatValue]);
    
}

//点击了正常设备
-(void)equipBtn1Action
{
    
    indexStr = @"0";
    NSLog(@"equipBtn1Action");
    
    [self circle2Nor];
    [self circle3Nor];
    
    [self circle1Sel];
    
    
    circle1.progress = 0.0;
//    circle2.progress = 0.0;
//    circle3.progress = 0.0;
    
    
    [self performSelector:@selector(changeProgress) withObject:nil afterDelay:1.5];
    
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMEquipView:)]) {
        [_theDelegate DBMEquipView:indexStr];
    }
    
    
}

//点击了正常设备
-(void)equipBtn2Action
{
    
    indexStr = @"1";
    NSLog(@"equipBtn2Action");
    [self circle2Sel];
    [self circle1Nor];
    [self circle3Nor];
    
//    circle1.progress = 0.0;
    circle2.progress = 0.0;
//    circle3.progress = 0.0;
    
    
    [self performSelector:@selector(changeProgress) withObject:nil afterDelay:1.5];
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMEquipView:)]) {
        [_theDelegate DBMEquipView:indexStr];
    }
}


//点击了故障设备
-(void)equipBtn3Action
{
    indexStr = @"2";
    NSLog(@"equipBtn3Action");
    [self circle3Sel];
    [self circle1Nor];
    [self circle2Nor];
    
//    circle1.progress = 0.0;
//    circle2.progress = 0.0;
    circle3.progress = 0.0;
    
    
    [self performSelector:@selector(changeProgress) withObject:nil afterDelay:1.5];
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMEquipView:)]) {
        [_theDelegate DBMEquipView:indexStr];
    }
}



-(void)circle1Nor
{
    [norNumLabel setTextColor:[UIColor whiteColor]];
    
    [equipmentImageView1 setImage:[UIImage imageNamed:@"zc_nor"]];
    
    [circle1 setFrame:CGRectMake(20,246.0/2.0, 67, 67)];
    
    [equipmentImageView1 setFrame:CGRectMake(11.5, 11.5, 42, 42)];
    
    [circle1 setCenter:CGPointMake(51, 156)];
    
    circle1.progressColor =[UIColor colorWithHexString:@"a9a9a8"];
    
}


-(void)circle1Sel
{
    NSLog(@"circle1Sel");
    
    [norNumLabel setTextColor:[UIColor colorWithHexString:@"68d1a3"]];
    
    [bgImageView setImage:[UIImage imageNamed:@"zcsb_kuang"]];
    
    [equipmentImageView1 setImage:[UIImage imageNamed:@"zc_sel"]];
    
    [circle1 setFrame:CGRectMake(12 , 114, 80, 80)];
    
    [equipmentImageView1 setFrame:CGRectMake(15, 15, 48, 48)];
    
    [circle1 setCenter:CGPointMake(51, 156)];
    
    circle1.progressColor =[UIColor colorWithHexString:@"4bbe8e"];
    
}


-(void)circle2Nor
{
    NSLog(@"circle2Nor");
    
    [problemNumLabel setTextColor:[UIColor whiteColor]];
    
    [equipmentImageView2 setImage:[UIImage imageNamed:@"gz_nor"]];
    
    [circle2 setFrame:CGRectMake(20,246.0/2.0, 67, 67)];
    
    [equipmentImageView2 setFrame:CGRectMake(11.5, 11.5, 42, 42)];
    
    [circle2 setCenter:CGPointMake(295.0/2, 312.0/2)];
    
    circle2.progressColor =[UIColor colorWithHexString:@"a9a9a8"];
    
}


-(void)circle2Sel
{
    NSLog(@"circle2Sel");
    
    [problemNumLabel setTextColor:[UIColor colorWithHexString:@"b42c2d"]];
    
    [bgImageView setImage:[UIImage imageNamed:@"shebeizongshu_pbm"]];
    
    [equipmentImageView2 setImage:[UIImage imageNamed:@"gz_sel"]];
    
    [circle2 setFrame:CGRectMake(588.0/2.0/2.0 - 40 ,114, 80, 80)];
    
    [equipmentImageView2 setFrame:CGRectMake(15, 15, 48, 48)];
    
//    [circle2 setCenter:CGPointMake(51, 156)];
    
    circle2.progressColor =[UIColor colorWithHexString:@"b42c2d"];
}

-(void)circle3Nor
{
    
    NSLog(@"circle3Nor");
    
    [offlineNumLabel setTextColor:[UIColor whiteColor]];
    
    
    [equipmentImageView3 setImage:[UIImage imageNamed:@"lx_nor"]];
    
    [circle3 setFrame:CGRectMake(20,246.0/2.0, 67, 67)];
    
    [equipmentImageView3 setFrame:CGRectMake(11.5, 11.5, 42, 42)];
    
//    [circle3 setCenter:CGPointMake(51, 156)];
    
    [circle3 setCenter:CGPointMake(485.0/2.0, 156)];
    
    circle3.progressColor =[UIColor colorWithHexString:@"a9a9a8"];
}


-(void)circle3Sel
{
    NSLog(@"circle3Sel");
    
    [offlineNumLabel setTextColor:[UIColor whiteColor]];
    
    
    [bgImageView setImage:[UIImage imageNamed:@"lxsbzs_kuang"]];
    
    [equipmentImageView3 setImage:[UIImage imageNamed:@"lx_sel"]];
    
    [circle3 setFrame:CGRectMake(backViewFrame.size.width - 12 -80 ,114 , 80 , 80)];
    
    [equipmentImageView3 setFrame:CGRectMake(15, 15, 48, 48)];
    
//    [circle3 setCenter:CGPointMake(51, 156)];
    
     circle3.progressColor =[UIColor colorWithRed:139.0/255.0 green:139.0/255.0 blue:139.0/255.0 alpha:1.0];
    
}


/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end

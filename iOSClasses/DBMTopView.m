//
//  DBMTopView.m
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/23.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import "DBMTopView.h"
#import "JGProgressView.h"
#import "UIColor+Hex.h"
#import "DBSeverController.h"
#import "JKBlankTool.h"


@implementation DBMTopView


{
    CGRect backViewFrame;
    JGProgressView *progressView;
    
    UILabel *timeLabel;
    
    UIImageView *tianqiImgView;
    
    NSString *type;
    
}


- (NSDateFormatter *)formatter {
    
    if(! _formatter) {
        
        _formatter = [[NSDateFormatter alloc] init];
        
        [_formatter setDateStyle:NSDateFormatterMediumStyle];
        
        [_formatter setTimeStyle:NSDateFormatterShortStyle];
        
        NSTimeZone *timeZone = [NSTimeZone timeZoneWithName:@"Asia/Beijing"];
        
        _formatter.dateFormat = @"HH:mm";
        
        
        [_formatter setTimeZone:timeZone];
        
    }
    
    return _formatter;

}



-(instancetype)initTopViewWithFrame:(CGRect)frame data:(NSArray *)dataArray
{
    if (self = [super init]) {
        
        [self setUserInteractionEnabled:YES];
        
        type = @"";
        
        [self setFrame:frame];
        
        [self setImage:[UIImage imageNamed:@"head背景.png"]];
        
        backViewFrame= frame;
        
        [self createUI];
    }
    return self;
}




-(void)createUI
{
    
    DBSeverController *sever = [DBSeverController sever];
    
    [sever getWeatherDataWithSuccess:^(id responseObject) {
        
        NSLog(@"responseObject %@",responseObject);
        
        if ([[responseObject objectForKey:@"desc"] isEqualToString:@"OK"]) {
            
            NSDictionary *dataDict = [responseObject objectForKey:@"data"];
            NSArray *array = [dataDict objectForKey:@"forecast"];
            
            if (![JKBlankTool isBlankArray:array]) {
                NSDictionary *foreDict = array[0];
                type = [foreDict objectForKey:@"type"];
                [self updateViewsData];
            }
        }
        
    } fail:^{
        
    }];
    
    
    UIButton *backBtn = [[UIButton alloc]initWithFrame:CGRectMake(20, 15.5, 54, 16)];
    [backBtn setImage:[UIImage imageNamed:@"返回.png"] forState:UIControlStateNormal];
    
    [backBtn addTarget:self action:@selector(backButtonAction) forControlEvents:UIControlEventTouchUpInside];
    
//    [self addSubview:backBtn];
    
    [UIDevice currentDevice].batteryMonitoringEnabled = YES;
    double deviceLevel = [UIDevice currentDevice].batteryLevel;
    NSLog(@"deviceLevel %f",deviceLevel);
    
    //电池
    progressView = [[JGProgressView alloc] initWithFrame:CGRectMake(backViewFrame.size.width - 38,18, 29, 16)];
    progressView.progress = deviceLevel;
    [self addSubview:progressView];
    
    
    UIImageView *wifiView = [[UIImageView alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 66-24,12, 24, 20)];
    [wifiView setImage:[UIImage imageNamed:@"大地图-设备总数.png"]];
    [self addSubview:wifiView];
    
    
    UIImageView *tixingView = [[UIImageView alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 144,10.5, 24, 25)];
    [tixingView setImage:[UIImage imageNamed:@"警告.png"]];
    [self addSubview:tixingView];
    
    UIImageView *shezhiView = [[UIImageView alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 200,11.5, 24, 24)];
    [shezhiView setImage:[UIImage imageNamed:@"设置.png"]];
    [self addSubview:shezhiView];
    
    
    UIButton *dengchuBtn = [[UIButton alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 269, 20, 34, 10)];
    
    [dengchuBtn setImage:[UIImage imageNamed:@"登出.png"] forState:UIControlStateNormal];
    
    [dengchuBtn addTarget:self action:@selector(dengchuButtonAction) forControlEvents:UIControlEventTouchUpInside];
    
    [self addSubview:dengchuBtn];
    
    
    UILabel *nameLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 340, 20, 60, 10)];
    [nameLabel setFont:[UIFont boldSystemFontOfSize:11.0f]];
    [nameLabel setTextColor:[UIColor whiteColor]];
    [nameLabel setTextAlignment:NSTextAlignmentCenter];
    [nameLabel setText:@"administer"];
    
    [self addSubview:nameLabel];
    
    
    UIImageView *touxiangImgView = [[UIImageView alloc]initWithFrame:CGRectMake(backViewFrame.size.width - 370, 11, 24, 24)];
    [touxiangImgView setImage:[UIImage imageNamed:@"头像.png"]];
    [self addSubview:touxiangImgView];
    
    
    tianqiImgView = [[UIImageView alloc]initWithFrame:CGRectMake(backViewFrame.size.width/2.0 - 56, 12.5, 23, 21)];
    [tianqiImgView setImage:[UIImage imageNamed:@"天气.png"]];
    
    [self addSubview:tianqiImgView];
    
    timeLabel = [[UILabel alloc]initWithFrame:CGRectMake(backViewFrame.size.width/2.0 - 26, 15, 60, 19)];
    [timeLabel setText:[self nowTimeStr]];
    [timeLabel setTextAlignment:NSTextAlignmentCenter];
    [timeLabel setFont:[UIFont boldSystemFontOfSize:19.0f]];
    [timeLabel setTextColor:[UIColor colorWithHexString:@"5daeec"]];
    [self addSubview:timeLabel];
    
    
}

-(void)backButtonAction
{
    NSLog(@"backButtonAction");
}


-(void)dengchuButtonAction
{
    NSLog(@"dengchuButtonAction");
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMTopViewQuitAction)]) {
        [_theDelegate DBMTopViewQuitAction];
    }
}


-(void)updateViewsData
{
    
    [UIDevice currentDevice].batteryMonitoringEnabled = YES;
    double deviceLevel = [UIDevice currentDevice].batteryLevel;
    NSLog(@"deviceLevel %f",deviceLevel);
    
    progressView.progress = deviceLevel;
    
    [timeLabel setText:[self nowTimeStr]];
    
    if (![JKBlankTool isBlankString:type]) {
        
        if ([type isEqualToString:@"晴"]) {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气.png"]];
        }
        
        else if ([type isEqualToString:@"多云"]) {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气_多云.png"]];
        }
        
        else if ([type isEqualToString:@"阵雨"]||[type isEqualToString:@"小雨"]) {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气_小雨.png"]];
        }
        else if ([type isEqualToString:@"阴"]) {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气.png"]];
        }
        
        else if ([type containsString:@"雨"]) {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气_中雨.png"]];
        }
        
        else if ([type containsString:@"雪"]) {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气_中雪.png"]];
        }
        
        else
        {
            [tianqiImgView setImage:[UIImage imageNamed:@"天气.png"]];
        }
        
    }
    
}


- (NSDateFormatter *)dateFormatterWithFormatString:(NSString *)format
{
    //使用当前线程字典来保存对象
    NSMutableDictionary *threadDic = [[NSThread currentThread] threadDictionary];
    NSDateFormatter *dateFormatter = [threadDic objectForKey:format];
    if (!dateFormatter) {
        dateFormatter = [[NSDateFormatter alloc]init];
        dateFormatter.dateFormat = format;
        
        [dateFormatter setDateStyle:NSDateFormatterMediumStyle];
        
        [dateFormatter setTimeStyle:NSDateFormatterShortStyle];
        
        NSTimeZone *timeZone = [NSTimeZone timeZoneWithName:@"Asia/Beijing"];
        
        [dateFormatter setTimeZone:timeZone];
        
        [threadDic setObject:dateFormatter forKey:format];
    }
    return dateFormatter;
    
}




-(NSString *)nowTimeStr
{
    
    NSDate *date = [NSDate date];
    
    NSString *DateTime = [self.formatter stringFromDate:date];
    
    return DateTime;
    
}




/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end

//
//  DBSeverController.m
//  IphoneMapSdkDemo
//
//  Created by 陶晨麟 on 16/11/29.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import "DBSeverController.h"
#import "DBAFN.h"

#define BaseURL @"https://www.ifourthwall.com:6041"


@implementation DBSeverController

static DBSeverController * sever = nil;

+(DBSeverController *)sever{
    if (sever == nil) {
        sever =[[DBSeverController alloc]init];
    }
    return sever;
}


-(DBSeverController*)init{
    
    if( (self=[super init]) ) {
        
    }
    return self;
}





//获取所有类型的项目数据
-(void)getAllProjectDataWithSuccess:(void (^)(id responseObject))success fail:(void (^)())fail
{
    NSString *getAccessUrl = [NSString stringWithFormat:@"%@/dbm/project",BaseURL];
    
    NSLog(@"getAccessUrl%@",getAccessUrl);
    
    NSDictionary *userDict = @{@"order_by":@"2",
                               };
    
    
    [DBAFN getWithUrl:getAccessUrl parameters:userDict success:^(id responseObject) {
        
        success(responseObject);
        
    } fail:^{
        
    }];
}


//根据name、获取相关项目列表
-(void)getProjectDataWithName:(NSString *)project_name Success:(void (^)(id responseObject))success fail:(void (^)())fail
{
    NSString *getAccessUrl = [NSString stringWithFormat:@"%@/dbm/project",BaseURL];
    
    NSDictionary *userDict = @{@"project_name":project_name,
                               @"order_by":@"2",
                               };
    
    [DBAFN getWithUrl:getAccessUrl parameters:userDict success:^(id responseObject) {
        
        success(responseObject);
        
    } fail:^{
        
    }];
    
}

//根据设备状态、获取相关项目列表
-(void)getProjectDataWithStatus:(NSString *)Status Success:(void (^)(id responseObject))success fail:(void (^)())fail
{
    
    NSString *getAccessUrl = [NSString stringWithFormat:@"%@/dbm/project",BaseURL];
    
    NSDictionary *userDict = @{@"status":Status,
                               @"order_by":@"2",
                               };
    
    [DBAFN getWithUrl:getAccessUrl parameters:userDict success:^(id responseObject) {
        
        success(responseObject);
        
    } fail:^{
        
    }];
}


//根据项目以及状态查询设备 GET
-(void)getDevicesSummaryProject_id:(NSString *)project_id Status:(NSString *)status Success:(void (^)(id responseObject))success fail:(void (^)())fail
{
    
    NSString *getAccessUrl = [NSString stringWithFormat:@"%@/dbm/data/device/summary",BaseURL];
    
    NSDictionary *userDict = @{@"project_id":project_id,
                               @"status":status
                               };
    
    [DBAFN getWithUrl:getAccessUrl parameters:userDict success:^(id responseObject) {
        
        success(responseObject);
        
    } fail:^{
        
    }];
}


//获取天气数据
-(void)getWeatherDataWithSuccess:(void (^)(id responseObject))success fail:(void (^)())fail
{
    NSString *getAccessUrl = [NSString stringWithFormat:@"http://wthrcdn.etouch.cn/weather_mini?city=上海"];
    
    [DBAFN getWithUrl:getAccessUrl parameters:nil success:^(id responseObject) {
        
        success(responseObject);
        
    } fail:^{
        
    }];
}


@end

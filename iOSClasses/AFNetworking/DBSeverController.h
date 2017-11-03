//
//  DBSeverController.h
//  IphoneMapSdkDemo
//
//  Created by 陶晨麟 on 16/11/29.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBSeverController : NSObject

+(DBSeverController*)sever;


//获取所有类型的项目数据
-(void)getAllProjectDataWithSuccess:(void (^)(id responseObject))success fail:(void (^)())fail;

//根据设备状态、获取相关项目列表
-(void)getProjectDataWithStatus:(NSString *)Status Success:(void (^)(id responseObject))success fail:(void (^)())fail;

//根据name、获取相关项目列表
-(void)getProjectDataWithName:(NSString *)name Success:(void (^)(id responseObject))success fail:(void (^)())fail;


//根据项目以及状态查询设备 GET
-(void)getDevicesSummaryProject_id:(NSString *)project_id Status:(NSString *)status Success:(void (^)(id responseObject))success fail:(void (^)())fail;


//获取天气数据
-(void)getWeatherDataWithSuccess:(void (^)(id responseObject))success fail:(void (^)())fail;

@end

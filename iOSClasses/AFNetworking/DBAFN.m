//
//  DBAFN.m
//  IphoneMapSdkDemo
//
//  Created by 陶晨麟 on 16/11/29.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import "DBAFN.h"
#import "AFNetworking.h"


@implementation DBAFN

+ (void)postWithUrl:(NSString *)urlStr parameters:(id)parameters success:(void (^)(id responseObject))success fail:(void (^)())fail
{
    
    AFHTTPRequestOperationManager *manager = [AFHTTPRequestOperationManager manager];
    
    // 设置请求格式
    manager.requestSerializer = [AFHTTPRequestSerializer serializer];
    
    
    // 设置超时时间
    [manager.requestSerializer willChangeValueForKey:@"timeoutInterval"];
    
    manager.requestSerializer.timeoutInterval = 25.f;
    
    [manager.requestSerializer didChangeValueForKey:@"timeoutInterval"];
    
    
    //申明返回的结果是json类型
    manager.responseSerializer = [AFJSONResponseSerializer serializer];
    
    [manager POST:urlStr parameters:parameters
     
          success:^(AFHTTPRequestOperation *operation, id responseObject) {
              
              if (success) {
                  success(responseObject);
              }
          } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
              
              NSLog(@"error%@", error);
              if (fail) {
                  fail();
              }
          }];
}


+ (void)getWithUrl:(NSString *)urlStr parameters:(id)parameters success:(void (^)(id responseObject))success fail:(void (^)())fail
{
    
    AFHTTPRequestOperationManager *manager = [AFHTTPRequestOperationManager manager];
    
    // 设置请求格式
    manager.requestSerializer = [AFHTTPRequestSerializer serializer];
    //申明返回的结果是json类型
    manager.responseSerializer = [AFJSONResponseSerializer serializer];
    
    [manager GET:urlStr parameters:parameters
         success:^(AFHTTPRequestOperation *operation, id responseObject) {
             
             if (success) {
                 success(responseObject);
             }
             
         } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
             
             if (fail) {
                 fail(error);
             }
             NSLog(@"%@",error);
         }];
}


@end

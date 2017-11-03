//
//  DBAFN.h
//  IphoneMapSdkDemo
//
//  Created by 陶晨麟 on 16/11/29.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBAFN : NSObject

//Post发送数据
//@param urlStr post地址
//@param parameters NSDictionary* 参量
//@param sccess ^(id responseObject)  成功回调block
//@param fail ^()fail   失败回调block
+ (void)postWithUrl:(NSString *)urlStr parameters:(id)parameters success:(void (^)(id responseObject))success fail:(void (^)())fail;


//get发送数据
//@param urlStr get地址
//@param parameters NSDictionary* 参量
//@param sccess ^(id responseObject)  成功回调block
//@param fail ^()fail   失败回调block

+ (void)getWithUrl:(NSString *)urlStr parameters:(id)parameters success:(void (^)(id responseObject))success fail:(void (^)())fail;



@end

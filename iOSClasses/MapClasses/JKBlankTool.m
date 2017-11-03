//
//  JKBlankTool.m
//  tracker
//
//  Created by 陶晨麟 on 16/7/20.
//  Copyright © 2016年 ACE. All rights reserved.
//

#import "JKBlankTool.h"

@implementation JKBlankTool

+(BOOL)isBlankString:(NSString *)string {
    
    if ([string isKindOfClass:[NSNull class]]) {
        return YES;
    }
    
    if (string == nil || string == NULL) {
        return YES;
    }
    
    if ([string isEqual:[NSNull null]]) {
        return YES;
    }
    
    if ([string isEqualToString:@"(null)"]) {
        return YES;
    }
    
    if ([string isEqualToString:@""]) {
        return YES;
    }
    
    if ([[string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length]==0) {
        return YES;
    }
    return NO;
}


+(BOOL)isBlankArray:(NSArray *)Array
{
    
    if ([Array isEqual:[NSNull null]]) {
        return YES;
    }
    
    if (Array == nil || Array == NULL) {
        return YES;
    }
    
    if ([Array isKindOfClass:[NSNull class]]) {
        return YES;
    }
    
    if (Array.count == 0) {
        return YES;
    }
    
    if ([Array isEqual:@""]) {
        return YES;
    }
    
    return NO;
    
}


//只有当key存在，且key对应的value非空，才返回true
+(BOOL)isBlankDictionary:(NSDictionary *)dict Key:(NSString *)key
{
    if([dict objectForKey:key]){
        return NO;
    }
    
    id obj = [dict objectForKey:key];
    
    return ![obj isEqual:[NSNull null]];
    
}


@end

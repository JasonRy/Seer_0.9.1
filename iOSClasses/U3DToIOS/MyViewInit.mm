//
//  MyViewInit.m
//  Unity-iPhone
//  
//  Created by Jason.R on 16/12/1.
//
//

#import "MyViewInit.h"
#import "UnityInterface.h"

@implementation MyViewInit

+ (void) enabled{
    UnitySendMessage("Cube", "Enabled", "");
}

+ (void) disabled{
    UnitySendMessage("Cube", "Disabled", "");
}

+ (void) setEnabled:(NSString *)foo{
    UnitySendMessage("Cube", "SetText", [foo UTF8String]);
}

+ (int) value{
    //    return UnitySendMessage("Cube", "returnVal", "");
    return 11;
}

+(void)goToIOS
{
    NSLog(@"goToIOS");
    
    //添加 字典，将label的值通过key值设置传递
    NSDictionary *dict =[[NSDictionary alloc] initWithObjectsAndKeys:@"textOne",@"textOne",nil];
    
    //创建通知
    NSNotification *notification =[NSNotification notificationWithName:@"tongzhi" object:nil userInfo:dict];
    //通过通知中心发送通知
    [[NSNotificationCenter defaultCenter] postNotification:notification];
    
}

+(void) backToMap
{
    //添加 字典，将label的值通过key值设置传递
    NSDictionary *dict =[[NSDictionary alloc] initWithObjectsAndKeys:@"backToMap",@"backToMap",nil];
    
    //创建通知
    NSNotification *notification =[NSNotification notificationWithName:@"backToMap" object:nil userInfo:dict];
    //通过通知中心发送通知
    [[NSNotificationCenter defaultCenter] postNotification:notification];
    
}


+(void)backToUnity
{
    UnitySendMessage("ConnectServer","backToUnity","");
}


+(void)goToDetai:(NSString *)project_id
{
    UnitySendMessage("ConnectServer","goToDetail", [project_id UTF8String]);
}


@end

#pragma mark cplusplus code
extern "C"{
    
    int ActivateUI_iOS(int index){
        
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Unity调用了IOS方法" message:[NSString stringWithFormat:@"我是第%i次从Unity过来的！",index] delegate:nil cancelButtonTitle:@"取消" otherButtonTitles:nil, nil];
        [alert show];
        
        return ++index;
    }
    
    //被U3D调用的方法 Battery_iOS
    double Battery_iOS(){
        [UIDevice currentDevice].batteryMonitoringEnabled = YES;
        double deviceLevel = [UIDevice currentDevice].batteryLevel;
        NSLog(@"deviceLevel %f",deviceLevel);
        return deviceLevel;
    }
}

//
//  MyViewInit.h
//  Unity-iPhone
//
//  Created by Jason.R on 16/12/1.
//
//

#import <Foundation/Foundation.h>


@interface MyViewInit : UIViewController

+ (void) enabled;
+ (void) disabled;
+ (void) setEnabled:(NSString *)foo;

+ (int) value;

+(void) backToUnity;

+(void) goToIOS;

+(void) backToMap;

+(void)goToDetai:(NSString *)project_id;


@end

#pragma mark cplusplus code

#ifdef __cplusplus

extern "C" {
#endif
    
    int ActivateUI_iOS(int index);
    
    double Battery_iOS();
    
    
#ifdef __cplusplus
} // extern "C"
#endif

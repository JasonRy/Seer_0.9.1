//
//  MapViewBaseDemoViewController.h
//  BaiduMapSdkSrc
//
//  Created by BaiduMapAPI on 13-7-24.
//  Copyright (c) 2013年 baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Map/BMKMapComponent.h>
#import <BaiduMapAPI_Location/BMKLocationComponent.h>
#import "UI/UnityView.h"

//#import "IQKeyboardManager.h"


//#import "BMKClusterManager.h"

@interface MapViewBaseDemoViewController :  UIViewController <BMKMapViewDelegate,BMKLocationServiceDelegate>{
    
    IBOutlet BMKMapView* _mapView;
    
    BMKLocationService* _locService;
    
    NSMutableArray *annotations;
    
    int firstFlag;
    
    //当前项目的类型
    int styleFlag;
    
    //选中了类型
    int SelectStyleFlag;
    
    //点击的
    int theOne;
    
    //是否第二次点击
    int theInformationOne;
    
    //设备总数页、选中的设备类型
    NSString *theSelectStatus;
    
}


#pragma mark cplusplus code

#ifdef __cplusplus

extern "C" {
#endif
    
    void BackTo_Map();
    
#ifdef __cplusplus
} // extern "C"
#endif


@end

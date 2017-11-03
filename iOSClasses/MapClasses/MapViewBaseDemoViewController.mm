//
//  MapViewBaseDemoViewController.m
//  BaiduMapSdkSrc
//
//  Created by BaiduMapAPI on 13-7-24.
//  Copyright (c) 2013年 baidu. All rights reserved.
//

#import "MapViewBaseDemoViewController.h"

#import "DBSeverController.h"
#import "MyViewInit.h"
#include "UI/UnityViewControllerBase.h"
#include "UnityAppController+ViewHandling.h"
#import  "UIColor+Hex.h"
#import "CATCurveProgressView.h"

#import "NDHudView.h"
#import "JKBlankTool.h"

#import "EquipNameModel.h"

#import "ProjectModel.h"
#import "ProjectCell.h"
#import "DBMTopView.h"
#import "DBMItemsView.h"
#import "DBMProjectView.h"
#import "DBMProjectTV.h"
#import "DBMSearchView.h"
#import "DBMEquipView.h"
#import "DBMEquipTV.h"
#import "DBMEquipNameTV.h"
#import "EquipNameModel.h"
#import "DBMBuildingView.h"

#import "UnityInterface.h"
#import "MyViewInit.h"



#define Screen_Width [UIScreen mainScreen].bounds.size.width
#define Screen_Height [UIScreen mainScreen].bounds.size.height

@interface MapViewBaseDemoViewController()<UIGestureRecognizerDelegate,DBMItemsViewDelegate,DBMTopViewDelegate,DBMProjectViewDelegate,DBMProjectTVDelegate,DBMSearchViewDelegate,DBMEquipViewDelegate,DBMEquipTVDelegate,DBMEquipNameTVDelegate,DBMBuildingViewDelegate> {
    
    
    //黑夜模式
    BOOL enableCustomMap;
    
    //背景的图片
    UIImageView *bgImgView;
    
    //旋转的图片
    UIImageView *bgImgLoadingView;
    
    DBMTopView *topView;
    DBMItemsView *itemsview;
    
    //Views
    DBMProjectView *projectView;
    DBMSearchView *searchView;
    DBMProjectTV *dbmProjectTV;
    
    DBMEquipView *dbmEquipView;
    DBMEquipTV *dbmEquipTV;
    DBMEquipNameTV *dbmEquipNameTV;
    
    
    //选择的头部 标注 项目 、设备、工单
    int theSelectItemNum;

    
    //返回按钮
    UIButton *backBtn;

    
    UIView *U3DView;
    
    //选中的selectBuildingName
    NSString *selectBuildingName;
    
    NSMutableArray *projectArray;
    NSMutableArray *project1Array;
    NSMutableArray *project2Array;
    NSMutableArray *project3Array;
    NSMutableArray *project4Array;
    
    //备用
    int theIsAddingOne;
    
    UIImageView *equipNameImageView;
    
    NSMutableArray *equipTVDataArray;
    
    
    //头部退出View
    UIImageView *quitTopImgBg;
    
    //左侧Items 退出View
    UIImageView *quitItemsBg;
    
    
    NSMutableArray *searchArray;
    
    float mins;
    
    int sign_i;
    
    int addViewSign;
    
    int addMapViewAccomplishSign;
    
    
}

@property (nonatomic,copy)NSMutableArray *projectDataArray;


@property (assign,nonatomic)  __block  int i ;

@end



@implementation MapViewBaseDemoViewController

+ (void)initialize {
    
    //设置自定义地图样式，会影响所有地图实例
    
    //注：必须在BMKMapView对象初始化之前调用
    
    NSString* path = [[NSBundle mainBundle] pathForResource:@"custom_config_DBM" ofType:@""];
    
    [BMKMapView customMapStyle:path];
    
    [BMKMapView enableCustomMapStyle:YES];
    
}


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    
    if (self) {
        
//        NSString* path = [[NSBundle mainBundle] pathForResource:@"custom_config_DBM" ofType:@""];
//        
//        [BMKMapView customMapStyle:path];
//        
//        [BMKMapView enableCustomMapStyle:YES];
        
        
    }
    return self;
}


-(void)bgImgViewdelayMethod
{
    
    addMapViewAccomplishSign = 1;
    
    [UIView animateWithDuration:1.0 animations:^{
        
        [bgImgView setAlpha:0.0];
        
        [bgImgLoadingView setAlpha:0.0];
        
    }];
    
    //真实项目数据
    [self getAllProjectData];
    
}



- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    
    addMapViewAccomplishSign = 0;
    
//    [self.view setBackgroundColor:[UIColor blackColor]];
    
    bgImgView = [[UIImageView alloc]init];
    
    [bgImgView setImage:[UIImage imageNamed:@"daditu_map_bg_2732_2048.png"]];
    [bgImgView setFrame:CGRectMake(0, 0, 1366, 1024)];
    [bgImgView setHidden:NO];
    [_mapView addSubview:bgImgView];
    
    
    self.automaticallyAdjustsScrollViewInsets = NO;
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    mins = 0.5;
    
    sign_i = 0;
    
    addViewSign = 0;
    
    SelectStyleFlag = 0;
    
    theSelectStatus = @"";
    
    [self performSelector:@selector(bgImgViewdelayMethod) withObject:nil/*可传任意类型参数*/ afterDelay:4.5];
    
    
    //头部topView
    topView = [[DBMTopView alloc]initTopViewWithFrame:CGRectMake(0, 0, 1366, 45) data:nil];
    
    NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:30.0 target:self selector:@selector(topViewAction) userInfo:nil repeats:YES];
    
    [timer fire];
    
    
    [topView setFrame:CGRectMake(-1366, 0, 1366, 45)];
    
    topView.theDelegate = self;
    
    [_mapView  addSubview:topView];
    
    
    //itemsview
    itemsview = [[DBMItemsView alloc]initItemsViewWithFrame:CGRectMake(0, 45, 201.5, 1024.0-45.0) data:nil];
    
    [itemsview setFrame:CGRectMake(-201.5, 45, 201.5, 1024.0-45.0) ];
    
    itemsview.theDelegate= self;
    
    [itemsview setUserInteractionEnabled:YES];
    
    [_mapView  addSubview:itemsview];
    
   
    
    searchView = [[DBMSearchView alloc]initSearchViewWithFrame:CGRectMake(210.5, 46.5+9+280, 295, 72) data:nil];
    searchView.theDelegate = self;
    [_mapView  addSubview:searchView];
    
    [searchView setFrame:CGRectMake(-295, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
    
    
    
    dbmEquipNameTV =  [[DBMEquipNameTV alloc]initEquipNameTVWithFrame:CGRectMake(210.5, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0) data:nil];
    dbmEquipNameTV.theDelegate = self;
    
    [_mapView  addSubview:dbmEquipNameTV];
    
    [dbmEquipNameTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
    
    
    //选中哪个Item、默认状态是0
    theSelectItemNum = 0;
    
    _projectDataArray = [[NSMutableArray alloc]init];
    
    projectArray = [NSMutableArray array];
    project1Array = [NSMutableArray array];
    project2Array = [NSMutableArray array];
    project3Array = [NSMutableArray array];
    project4Array = [NSMutableArray array];
    
    annotations = [NSMutableArray array];
    
    equipTVDataArray = [NSMutableArray array];
    
    searchArray = [NSMutableArray array];
    
    //默认没有选中 -1
    theOne = -1;
    
    theInformationOne = -1;
    
    selectBuildingName = @"XXX";
    
    
    U3DView = GetAppController().unityView;
    
    [MyViewInit backToUnity];
    
    firstFlag = 0;
    
    //适配ios7
    if( ([[[UIDevice currentDevice] systemVersion] doubleValue]>=7.0))
    {
        //        self.edgesForExtendedLayout=UIRectEdgeNone;
        self.navigationController.navigationBar.translucent = NO;
    }
    
    _locService = [[BMKLocationService alloc]init];
    [_locService startUserLocationService];
    
    CGPoint  compassPosition;
    compassPosition.x = (2732.0/2.0 - 45);
    compassPosition.y = 1024-45;
    
    [_mapView setCompassPosition:compassPosition];
    
    
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    coordinate.longitude = 121.4916140000;
    
    [_mapView setCenterCoordinate:coordinate animated:YES];
    
    //地图俯视角度
    _mapView.overlooking = -45;
    
    //能否支持俯仰角
    _mapView.overlookEnabled = YES;
    
    //禁用旋转手势
    _mapView.rotateEnabled = NO;
    
    
    //设置地图缩放级别
    [_mapView setMaxZoomLevel:19.0];
    
    _mapView.zoomLevel = 16.033f;
    
    _mapView.minZoomLevel = 16.033f;
    
    
    //关闭POI
    _mapView.showMapPoi = NO;
    
    //禁止双击、单击
    _mapView.zoomEnabledWithTap = NO;
    
    //设定地图View能否支持用户多点缩放(双指)
    _mapView.zoomEnabled = YES;
    
    //设置滑动
    _mapView.scrollEnabled = YES;
    
    
    
    
    equipNameImageView = [[UIImageView alloc]init];
    
    [equipNameImageView setFrame:CGRectMake(0, 0, 30, 30)];
    
    [equipNameImageView setHidden:YES];
    
    [_mapView addSubview:equipNameImageView];
    
    [equipNameImageView setUserInteractionEnabled:YES];
    
    UIButton *deviceGoto3DBtn = [[UIButton alloc]initWithFrame:CGRectMake(0, 0, 30, 30)];
    
    [deviceGoto3DBtn addTarget:self action:@selector(deviceGoto3D) forControlEvents:UIControlEventTouchUpInside];
    
    [equipNameImageView addSubview:deviceGoto3DBtn];
    
    
    //注册通知
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(backToMap:) name:@"backToMap" object:nil];
    
    [self.view addSubview:U3DView];
    
    [U3DView setHidden:YES];
    
    
    
    //背景旋转图
    bgImgLoadingView =[[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 110, 110)];
    
    [bgImgLoadingView setImage:[UIImage imageNamed:@"外-5.png"]];
    
    [bgImgLoadingView setCenter:CGPointMake((210+1366.0)/2.0, (1024.0 + 45)/2.0)];
    
    [self bgImgLoadingStartAnimation];
    
    
    
    quitTopImgBg = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 1366, 45)];
    [quitTopImgBg setHidden:YES];
    [quitTopImgBg setImage:[UIImage imageNamed:@"map_bg_heise.jpg"]];
    
    [_mapView addSubview:quitTopImgBg];
    
    [quitTopImgBg setAlpha:1.0];
    
    
    
    quitItemsBg = [[UIImageView alloc]initWithFrame:CGRectMake(0, 45, 201.5, 1024.0-45.0)];
    [quitItemsBg setHidden:YES];
    [quitItemsBg setImage:[UIImage imageNamed:@"map_bg_heise.jpg"]];
    
    
    [_mapView addSubview:quitItemsBg];
    
    [quitItemsBg setAlpha:1.0];
    
    
    
    [UIView animateWithDuration:0.7 animations:^{
        
        [topView setFrame:CGRectMake(0, 0, 1366, 45)];
        
        [itemsview setFrame:CGRectMake(0, 45, 201.5, 1024.0-45.0)];
        
        [quitTopImgBg setAlpha:0.0];
        
        [quitItemsBg setAlpha:0.0];
        
        
    }];
    
    
//    [self performSelector:@selector(bgImgViewChange) withObject:nil/*可传任意类型参数*/ afterDelay:0.9];
    
//    [UIView animateWithDuration:3.0 animations:^{
//        
//        [quitTopImgBg setAlpha:0.0];
//        
//        [quitItemsBg setAlpha:0.0];
//        
//    }];
    
    
    [self performSelector:@selector(bgImgLoadingStartAnimation) withObject:nil/*可传任意类型参数*/ afterDelay:1.0];
    
    [self performSelector:@selector(addBgImgLoadingView) withObject:nil/*可传任意类型参数*/ afterDelay:1.0];
    
}




-(void)bgImgViewChange
{
    [bgImgView setImage:[UIImage imageNamed:@"map_bg_yinhei.jpg"]];
    
    [bgImgView setFrame:CGRectMake(201.5, 45, 1366-201.5, 1024.0-45.0)];
}



-(void)addBgImgLoadingView
{
    [self.view addSubview:bgImgLoadingView];
}


- (void)bgImgLoadingStartAnimation
{
    
    // UIViewAnimationOptionCurveLinear匀速执行(默认就是它)
    
    [UIView animateWithDuration:0.5 delay:0 options:UIViewAnimationOptionCurveLinear animations:^{
        
        //        NSLog(@"%d",_i);
        
        [bgImgLoadingView setTransform:CGAffineTransformMakeRotation(-_i * M_PI *1.0 / 180.f)];
        
        
    } completion:^(BOOL finished) {
        
        _i +=65;
        
        [self bgImgLoadingStartAnimation];
        
    }];
}



- (void)DBMItemsViewQiut
{
    
//     NSLog(@"DBMItemsViewQiut");
    
    if (sign_i == 0) {
        
        sign_i =1;
        
        NSLog(@"退出");
        
        [bgImgView setAlpha:0.5];
        
        [bgImgLoadingView setAlpha:0.5];
        
        
        UIImageView *quitbg = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 1366, 1024)];
        [quitbg setImage:[UIImage imageNamed:@"map_bg_heise.jpg"]];
        [quitbg setAlpha:0.0];
        [_mapView addSubview:quitbg];
        
        
        [UIView animateWithDuration:1.0 animations:^{
            
            [topView setFrame:CGRectMake(-1366, 0, 1366, 45)];
            
            [itemsview setFrame:CGRectMake(-201.5, 45, 201.5, 1024.0-45.0) ];
            
            [projectView setFrame:CGRectMake(-295, 46.5+9, 295, 280)];
            
            [searchView setFrame:CGRectMake(-295, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
            
            [dbmProjectTV setFrame:CGRectMake(-295, 46.5+9 + 280 +72 + 5, 295, 600+5)];
            
            [dbmEquipView setFrame:CGRectMake(-588.0/2.0, 46.5+9, 588.0/2.0, 552.0/2.0) ];
            
            [dbmEquipTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0)];
            
            [dbmEquipNameTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
            
            
            [quitbg setAlpha:1.0];
            
            [_mapView removeAnnotations:_mapView.annotations];
            
            
        }];
        
        
        [UIView animateWithDuration:0.5 animations:^{
            
            [bgImgView setAlpha:0.0];
            
            [bgImgLoadingView setAlpha:0.0];
            
        }];
        
//        [self performSelector:@selector(delayU3DViewShow) withObject:nil/*可传任意类型参数*/ afterDelay:0.0];
        
        [self performSelector:@selector(delayMapHidden) withObject:nil/*可传任意类型参数*/ afterDelay:1.0];
    }
}

-(void)delayMapHidden
{
    [MyViewInit backToUnity];
    
    [_mapView setHidden:YES];
    
    [U3DView setHidden:NO];
    
}

-(void)delayU3DViewShow
{
    [_mapView setHidden:YES];
    
    [U3DView setHidden:NO];
}

-(void)topViewAction
{
    [topView updateViewsData];
}



//1办公楼，2展馆，3商业，4交通枢纽，5住宅
//getAllProjectDataWithSuccess
- (void)getAllProjectData
{
    
    DBSeverController *sever = [DBSeverController sever];
    
    [sever getAllProjectDataWithSuccess:^(id responseObject) {
        
        [self getSuccessfuncfromAllProjectData:responseObject];
        
    } fail:^{
        
    }];
}



-(void)getSuccessfuncfromAllProjectData:(id)responseObject{
    
    NSDictionary* myDictionary =  responseObject;
    
    if ([[myDictionary objectForKey:@"code"] isEqualToString:@"10000"]) {
        
        NSMutableArray  *dataArray = [NSMutableArray array];
        
        dataArray = [[myDictionary objectForKey:@"data"]objectForKey:@"project_list"];
        
        NSDictionary *dataDict = [myDictionary objectForKey:@"data"];
        
        NSString *count_all = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"count_all"]longValue]] ;
        NSString *count_1 = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"count_1"]longValue]] ;
        NSString *count_2 = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"count_2"]longValue]] ;
        NSString *count_3 = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"count_3"]longValue]] ;
        NSString *count_4 = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"count_4"]longValue]] ;
        
        
        
        NSMutableDictionary *project_dict = [[NSMutableDictionary alloc]init];
        
        [project_dict setObject: count_all forKey:@"count_all"];
        [project_dict setObject: count_1 forKey:@"count_1"];
        [project_dict setObject: count_2 forKey:@"count_2"];
        [project_dict setObject: count_3 forKey:@"count_3"];
        [project_dict setObject: count_4 forKey:@"count_4"];
        
        
        NSString *device_all = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"device_all"]longValue]] ;
        NSString *device_good = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"device_good"]longValue]] ;
        NSString *device_fault = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"device_fault"]longValue]] ;
        NSString *device_offline = [NSString stringWithFormat:@"%ld",[[dataDict objectForKey:@"device_offline"]longValue]] ;
        
        NSMutableDictionary *equip_dict = [[NSMutableDictionary alloc]init];
        
        [equip_dict setObject: device_all forKey:@"device_all"];
        [equip_dict setObject: device_good forKey:@"device_good"];
        [equip_dict setObject: device_fault forKey:@"device_fault"];
        [equip_dict setObject: device_offline forKey:@"device_offline"];
        
        
        
        if (![JKBlankTool isBlankArray:projectArray]) {
            [projectArray removeAllObjects];
        }
        
        if (![JKBlankTool isBlankArray:project1Array]) {
            [project1Array removeAllObjects];
        }
        
        if (![JKBlankTool isBlankArray:project2Array]) {
            [project2Array removeAllObjects];
        }
        
        if (![JKBlankTool isBlankArray:project3Array]) {
            [project3Array removeAllObjects];
        }
        
        if (![JKBlankTool isBlankArray:project4Array]) {
            [project4Array removeAllObjects];
        }
        
        
        for (NSDictionary *dict in dataArray) {
            
            ProjectModel *model = [[ProjectModel alloc]init];
            [model setValuesForKeysWithDictionary:dict];
            
            if ([[dict objectForKey:@"category"]longValue] == 1 ) {
                [project1Array addObject:model];
            }
            
            else if ([[dict objectForKey:@"category"]longValue] == 2 ) {
                [project2Array addObject:model];
            }
            
            else if ([[dict objectForKey:@"category"]longValue] == 3 ) {
                [project3Array addObject:model];
            }
            
            else if ([[dict objectForKey:@"category"]longValue] == 4 ) {
                [project4Array addObject:model];
            }
            
            [_projectDataArray addObject:model];
        }
        
        
        NSLog(@"%@",_projectDataArray);
        
        [self addMapPointAnnotation:_projectDataArray];
        
        NSLog(@"project_dict %@",project_dict);
        
        projectView = [[DBMProjectView alloc]initProjectViewWithFrame:CGRectMake(210.5, 46.5+9, 295, 280) data:project_dict];
        
        projectView.theDelegate =self;
        [projectView setUserInteractionEnabled:YES];
        [_mapView  addSubview:projectView];
        [projectView setFrame:CGRectMake(-295, 46.5+9, 295, 280)];
        
        
        
        dbmProjectTV = [[DBMProjectTV alloc]initProjectTVWithFrame:CGRectMake(210.5, 46.5+9 + 280 +72 + 5, 295, 600+5) data:_projectDataArray];
        dbmProjectTV.theDelegate = self;
        [_mapView  addSubview:dbmProjectTV];
        
        [dbmProjectTV setFrame:CGRectMake(-295, 46.5+9 + 280 +72 + 5, 295, 600+5)];
        
        
        
        
        dbmEquipView = [[DBMEquipView alloc]initEquipViewWithFrame:CGRectMake(210.5, 46.5+9, 588.0/2.0, 552.0/2.0) data:equip_dict];
        [dbmEquipView setUserInteractionEnabled:YES];
        
        [dbmEquipView setFrame:CGRectMake(-588.0/2.0, 46.5+9, 588.0/2.0, 552.0/2.0) ];
        
        dbmEquipView.theDelegate = self;
        [_mapView  addSubview:dbmEquipView];
        
        
        dbmEquipTV =[[DBMEquipTV alloc]initEquipTVWithFrame:CGRectMake(210.5, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0) data:nil selsectStatus:theSelectStatus];
        dbmEquipTV.theDelegate = self;
        
        [_mapView  addSubview:dbmEquipTV];
        
        [dbmEquipTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0)];
        
    }
}



#pragma mark - Views Delegate
- (void)DBMTopViewQuitAction
{
    NSLog(@"DBMTopViewQuitAction");
}


//DBMItemsViewSelected
- (void)DBMItemsViewSelected:(NSString *)indexStr
{
    if (addMapViewAccomplishSign == 0) {
        return ;
    }
    NSLog(@"DBMItemsViewSelected %@",indexStr);
    
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    
    coordinate.longitude = 121.4916140000;
    
    BMKMapStatus *mapStatus = [[BMKMapStatus alloc]init];
    
    mapStatus.fLevel = 16.033f;
    mapStatus.fOverlooking = -45;
    mapStatus.targetGeoPt =coordinate;
    
    [_mapView setMapStatus:mapStatus withAnimation:YES];
    
    theOne = -1;
    theInformationOne = -1;
    theSelectStatus = @"";
    SelectStyleFlag = 0;
    
    
    if ([indexStr isEqualToString:@"0"]) {
        
        theSelectItemNum = 1;
        
        [projectView setFrame:CGRectMake(-295, 46.5+9, 295, 280)];
        [searchView  setFrame: CGRectMake(-295, 46.5+9+280, 295, 72)];
        
        
        [UIView animateWithDuration:mins animations:^{
            
            [projectView setFrame:CGRectMake(210.5, 46.5+9, 295, 280)];
            
            [searchView  setFrame: CGRectMake(210.5, 46.5+9+280, 295, 72)];
            
        }];
        
        
        [UIView animateWithDuration:mins animations:^{
            [dbmProjectTV setFrame:CGRectMake(-295, 46.5+9 + 280 +72 + 5, 295, 600+5)];
        }];
        
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipView setFrame:CGRectMake(-588.0/2.0, 46.5+9, 588.0/2.0, 552.0/2.0) ];
        }];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0)];
        }];
        
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipNameTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
        }];
        
        
        
        [equipNameImageView setHidden:YES];
        
    }
    
    else if ([indexStr isEqualToString:@"1"])
    {
        
        [UIView animateWithDuration:mins animations:^{
            
            [projectView setFrame:CGRectMake(-295, 46.5+9, 295, 280)];
            
            [searchView  setFrame: CGRectMake(-295, 46.5+9+280, 295, 72)];
            
        }];
        
        
        
        theSelectItemNum = 2;
        
        [UIView animateWithDuration:mins animations:^{
            [dbmProjectTV setFrame:CGRectMake(-295, 46.5+9 + 280 +72 + 5, 295, 600+5)];
        }];
        
        
        [UIView animateWithDuration:mins animations:^{
            
            [dbmEquipView setFrame:CGRectMake(210.5, 46.5+9, 588.0/2.0, 552.0/2.0)];
            
        }];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0)];
        }];
        
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipNameTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
        }];
        
        [equipNameImageView setHidden:YES];
        
    }
    
    else
    {
        
        theSelectItemNum = 3;
        
        
        [UIView animateWithDuration:mins animations:^{
            
            [projectView setFrame:CGRectMake(-295, 46.5+9, 295, 280)];
            
            [searchView  setFrame: CGRectMake(-295, 46.5+9+280, 295, 72)];
            
        }];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmProjectTV setFrame:CGRectMake(-295, 46.5+9 + 280 +72 + 5, 295, 600+5)];
        }];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipView setFrame:CGRectMake(-588.0/2.0, 46.5+9, 588.0/2.0, 552.0/2.0) ];
        }];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0)];
        }];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipNameTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
        }];
        
        [equipNameImageView setHidden:YES];
        
    }
    
    
    //刷新
    [self addMapPointAnnotation:_projectDataArray];
    
}


- (void)DBMProjectViewSelected:(NSString *)indexStr
{
    
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    
    coordinate.longitude = 121.4916140000;
    
    BMKMapStatus *mapStatus = [[BMKMapStatus alloc]init];
    
    mapStatus.fLevel = 16.033f;
    mapStatus.fOverlooking = -45;
    mapStatus.targetGeoPt =coordinate;
    
    [_mapView setMapStatus:mapStatus withAnimation:YES];
    
    
    theOne = -1;
    theInformationOne = -1;
    
    
    NSLog(@"DBMProjectViewSelected %@",indexStr);
    
    
    
//    [NSThread sleepForTimeInterval:1.0];
    
    
    [self performSelector:@selector(delaydbmProjectTV) withObject:nil afterDelay:0.50];
    
    
    [UIView animateWithDuration:0.25 animations:^{
        [dbmProjectTV setFrame:CGRectMake(-295, 46.5+9 + 280 +72 + 5, 295, 600+5)];
    }];
    
    if ([indexStr isEqualToString:@"0"]) {
        SelectStyleFlag = 1;
//        [dbmProjectTV reloadTVDataWithData:project1Array];
    }
    if ([indexStr isEqualToString:@"1"]) {
        SelectStyleFlag = 2;
//        [dbmProjectTV reloadTVDataWithData:project2Array];
    }
    if ([indexStr isEqualToString:@"2"]) {
        SelectStyleFlag = 3;
//        [dbmProjectTV reloadTVDataWithData:project3Array];
    }
    
    if ([indexStr isEqualToString:@"3"]) {
        SelectStyleFlag = 4;
//        [dbmProjectTV reloadTVDataWithData:project3Array];
    }
    
    
    [self addMapPointAnnotation:_projectDataArray];
}


-(void)delaydbmProjectTV
{
    
    if (SelectStyleFlag == 1) {
        [dbmProjectTV reloadTVDataWithData:project1Array];
    }
    if (SelectStyleFlag == 2) {
        [dbmProjectTV reloadTVDataWithData:project2Array];
    }
    if (SelectStyleFlag == 3) {
        [dbmProjectTV reloadTVDataWithData:project3Array];
    }
    if (SelectStyleFlag == 4) {
        [dbmProjectTV reloadTVDataWithData:project4Array];
    }
    
    
    [UIView animateWithDuration:0.25 animations:^{
        [dbmProjectTV setFrame:CGRectMake(210.5, 46.5+9 + 280 +72 + 5, 295, 600+5)];
        
    }];
    
}

- (void)DBMProjectTVSelected:(ProjectModel *)projectModel
{
    
    NSLog(@"DBMProjectTVSelected %@",projectModel);
    
    //点击选中
    int tagetTag = -1;
    
    for (int i = 0; i < _projectDataArray.count; i++) {
        
        ProjectModel * model = [_projectDataArray objectAtIndex:i];
        
        if ([projectModel.short_name isEqualToString: model.short_name]) {
            tagetTag = i;
            selectBuildingName = model.short_name;
            break;
        }
    }
    
    //更新下方数据
    //更新图片显示
    theOne = tagetTag;
    
    [self addMapPointAnnotation:_projectDataArray];
    
    
}

- (void)DBMSearchView:(NSString *)SearchTxtStr
{
    NSLog(@"DBMSearchView %@",SearchTxtStr);
    
    DBSeverController *sever = [DBSeverController sever];
    
    [sever getProjectDataWithName:SearchTxtStr Success:^(id responseObject) {
        
        NSLog(@"responseObject%@",responseObject);
        
        [self getSuccessfuncProjectDataWithName:responseObject];
        
    } fail:^{
        
    }];
    
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    
    coordinate.longitude = 121.4916140000;
    
    BMKMapStatus *mapStatus = [[BMKMapStatus alloc]init];
    
    mapStatus.fLevel = 16.033f;
    mapStatus.fOverlooking = -45;
    mapStatus.targetGeoPt =coordinate;
    
    [_mapView setMapStatus:mapStatus withAnimation:YES];
    
    theOne = -1;
    theInformationOne = -1;
    [self addMapPointAnnotation:_projectDataArray];
    
    
}

-(void)getSuccessfuncProjectDataWithName:(id)responseObject
{
    
    
    NSDictionary* myDictionary =  responseObject;
    
    
    
    if ([[myDictionary objectForKey:@"code"] isEqualToString:@"10000"]) {
        
        NSLog(@"%@",responseObject);
        
        NSArray *project_list = [[responseObject objectForKey:@"data"] objectForKey:@"project_list"];
        
        NSMutableArray *equipArray = [NSMutableArray array];
        
        for (NSDictionary *dict in project_list) {
            
            ProjectModel *model = [[ProjectModel alloc]init];
            
            [model setValuesForKeysWithDictionary:dict];
            
            [equipArray addObject:model];
        }
        
        
        searchArray = [equipArray mutableCopy];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmProjectTV setFrame:CGRectMake(210.5, 46.5+9 + 280 +72 + 5, 295, 600+5)];
        }];
        
        [dbmProjectTV reloadTVDataWithData:equipArray];
        
        [self addMapPointAnnotation:_projectDataArray];
        
    }
}


- (void)DBMBuildingView:(NSString *)project_id
{
    NSLog(@"%@",project_id);
    NSLog(@"DBMBuildingView");
    [MyViewInit goToDetai:project_id];
    
    [self performSelector:@selector(delayU3DViewShow) withObject:nil/*可传任意类型参数*/ afterDelay:0.0];
    
//    
//    [_mapView setHidden:YES];
//    
//    [U3DView setHidden:NO];
    
//    UnitySendMessage("ConnectServer","goToDetail",project_id);
    
}


- (void)DBMEquipView:(NSString *)indexStr
{
    NSLog(@"DBMEquipView %@",indexStr);
    
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    
    coordinate.longitude = 121.4916140000;
    
    BMKMapStatus *mapStatus = [[BMKMapStatus alloc]init];
    
    mapStatus.fLevel = 16.033f;
    mapStatus.fOverlooking = -45;
    mapStatus.targetGeoPt =coordinate;
    
    [_mapView setMapStatus:mapStatus withAnimation:YES];
    
    
    theOne = -1;
    theInformationOne = -1;
    
    
    
    [UIView animateWithDuration:mins animations:^{
        [dbmEquipNameTV setFrame:CGRectMake(-588.0/2.0, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
    }];
    
    [equipNameImageView setHidden:YES];
    
    if([indexStr isEqualToString:@"0"])
    {
        theSelectStatus = @"1";
    }
    else if([indexStr isEqualToString:@"1"])
    {
        theSelectStatus = @"2";
    }
    else if([indexStr isEqualToString:@"2"])
    {
        theSelectStatus = @"0";
    }
    
    //显示数字
    [self addMapPointAnnotation:_projectDataArray];
    
    DBSeverController *sever = [DBSeverController sever];
    
    [sever getProjectDataWithStatus:theSelectStatus Success:^(id responseObject) {
        
        NSLog(@"%@",responseObject);
        NSLog(@"%@",responseObject);
        
        [self getSuccessfuncProjectDataWithStatus:responseObject];
        
        
    } fail:^{
        
    }];
}


-(void)getSuccessfuncProjectDataWithStatus:(id)responseObject{
    
    NSDictionary* myDictionary =  responseObject;
    
    if ([[myDictionary objectForKey:@"code"] isEqualToString:@"10000"]) {
        
        NSLog(@"%@",responseObject);
        
        
        NSMutableArray  *equipArray = [NSMutableArray array];
        
        NSMutableArray  *dataArray = [NSMutableArray array];
        
        dataArray = [[myDictionary objectForKey:@"data"]objectForKey:@"project_list"];
        
        
        for (NSDictionary *dict in dataArray) {
            
            ProjectModel *model = [[ProjectModel alloc]init];
            
            [model setValuesForKeysWithDictionary:dict];
            
            [equipArray addObject:model];
        }
        
        equipTVDataArray = [equipArray mutableCopy];
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipTV setFrame:CGRectMake(210.5, 46.5+9 + 552.0/2.0 +12, 588.0/2.0, 722.0/2.0)];
        }];
        
        [dbmEquipTV reloadTVDataWithData:equipArray selsectStatus:theSelectStatus];
        
        [self addMapPointAnnotation:_projectDataArray];
        
    }
    
}



- (void)DBMEquipTVSelected:(ProjectModel *)projectModel
{
    NSLog(@"DBMEquipViewTV %@",projectModel);
    
    [equipNameImageView setHidden:YES];
    
    
    NSLog(@"theSelectStatus %@",theSelectStatus);
    
    //点击选中
    int tagetTag = -1;
    
    for (int i = 0; i < _projectDataArray.count; i++) {
        
        ProjectModel * model = [_projectDataArray objectAtIndex:i];
        
        if ([projectModel.short_name isEqualToString: model.short_name]) {
            tagetTag = i;
            selectBuildingName = model.short_name;
            break;
        }
    }
    
    //更新下方数据
    //更新图片显示
    theOne = tagetTag;
    
    [self addMapPointAnnotation:_projectDataArray];

    
    DBSeverController *sever = [DBSeverController sever];
    
    [sever getDevicesSummaryProject_id:projectModel.project_id Status:theSelectStatus Success:^(id responseObject) {
        
        NSLog(@"responseObject%@",responseObject);
        
        [self getSuccessfuncDevicesDataWithStatus:responseObject];
        
    } fail:^{
        
    }];
    
}

-(void)getSuccessfuncDevicesDataWithStatus:(id)responseObject{
    
    NSDictionary* myDictionary =  responseObject;
    
    if ([[myDictionary objectForKey:@"code"] isEqualToString:@"10000"]) {
        
        
        NSMutableArray  *equipArray = [NSMutableArray array];
        
        NSMutableArray  *dataArray = [NSMutableArray array];
        
        dataArray = [[myDictionary objectForKey:@"data"]objectForKey:@"device_list"];
        
        
        for (NSDictionary *dict in dataArray) {
            
            EquipNameModel *model = [[EquipNameModel alloc]init];
            [model setValuesForKeysWithDictionary:dict];
            
            [equipArray addObject:model];
        }
        
        [UIView animateWithDuration:mins animations:^{
            [dbmEquipNameTV setFrame:CGRectMake(210.5, 46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 10, 588.0/2.0, 600.0/2.0)];
        }];
        
        [dbmEquipNameTV reloadTVDataWithData:equipArray];
        
    }
    
}



- (void)DBMEquipNameTV:(float )equipNameImageView_f
{
    NSLog(@"DBMEquipNameTV%f",equipNameImageView_f);
    
    CGRect equipNameImageViewRect;
    
    equipNameImageViewRect = CGRectMake(210.5 + 588.0/2.0 - 0,  46.5+9 + 552.0/2.0 +12 +722.0/2.0 + 11 + equipNameImageView_f, 38, 36);
    
    [equipNameImageView setFrame:equipNameImageViewRect];
    [equipNameImageView setImage:[UIImage imageNamed:@"device_img_you"]];
    [equipNameImageView setHidden:NO];
    
}


-(void)deviceGoto3D
{
    NSLog(@"deviceGoto3D");
}


#pragma mark - 3D交互


-(void)backInitialMap1
{
    //地图俯视角度
    _mapView.overlooking = -45;
    
    //能否支持俯仰角
    _mapView.overlookEnabled = YES;
    
    //禁用旋转手势
    _mapView.rotateEnabled = NO;
    
    
    //设置地图缩放级别
    _mapView.zoomLevel = 15.033f;
    
    if (![JKBlankTool isBlankArray:annotations]) {
        
        for (int i = 0; i<annotations.count; i++) {
            
            BMKPointAnnotation* itemAnnotation =  annotations[i];
            [_mapView deselectAnnotation:itemAnnotation animated:YES];
        }
    }
    
}

-(void)backInitialMap
{
    
    //地图俯视角度
    _mapView.overlooking = -45;
    
    //能否支持俯仰角
    _mapView.overlookEnabled = YES;
    
    //禁用旋转手势
    _mapView.rotateEnabled = NO;
    
    
    //设置地图缩放级别
    _mapView.zoomLevel = 16.033f;
    
    if (![JKBlankTool isBlankArray:annotations]) {
        
        for (int i = 0; i<annotations.count; i++) {
            
           BMKPointAnnotation* itemAnnotation =  annotations[i];
           [_mapView deselectAnnotation:itemAnnotation animated:YES];
        }
    }
    
}

#pragma mark - 项目总数 商业-办公楼-交通枢纽-展馆

- (void)backToMap:(NSNotification *)text{
    
    
    NSLog(@"%@",text.userInfo[@"backToMap"]);
    
    NSLog(@"－－－－－接收到通知------");
    
    NSLog(@"－－－－－跳转------");
    
    
    [self performSelector:@selector(backInitialMap) withObject:nil afterDelay:1.0f];
    
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    coordinate.longitude = 121.4916140000;
    
    [_mapView setCenterCoordinate:coordinate animated:YES];
    
    [U3DView setHidden:YES];
    
    [_mapView setHidden:NO];
    
}


-(void)goinAction
{
    NSLog(@"点击了进入");
    
    [self performSelector:@selector(delayU3DViewShow) withObject:nil/*可传任意类型参数*/ afterDelay:0.0];
    
//    [_mapView setHidden:YES];
//    
//    [U3DView setHidden:NO];
    
//    [MyViewInit backToUnity];
    
}


-(void)delayMethod
{
    [_mapView setZoomLevel:18.0];
}



#pragma mark cplusplus code

extern "C"{
    
    //被U3D调用的方法
    void BackTo_Map()
    {
        [MyViewInit backToMap];
    }
    
}



//返回主界面
-(void)backAction
{
    //设置中心点
    CLLocationCoordinate2D coordinate;
    
    coordinate.latitude = 31.2248370000;
    
    coordinate.longitude = 121.4916140000;
    
    BMKMapStatus *mapStatus = [[BMKMapStatus alloc]init];
    
    mapStatus.fLevel = 16.033f;
    mapStatus.fOverlooking = -45;
    mapStatus.targetGeoPt =coordinate;
    
    [_mapView setMapStatus:mapStatus withAnimation:YES];
    
    _mapView.zoomEnabled = NO;
}






-(void)addMapPointAnnotation:(NSMutableArray *)AnnotationDataArray
{
    
    if (_mapView.annotations) {
        [_mapView removeAnnotations:_mapView.annotations];
    }
    
    
    if (![JKBlankTool isBlankArray:annotations]) {
        [annotations removeAllObjects];
    }
    
    
    if ((theSelectItemNum == 0) ||(theSelectItemNum == 1) || (theSelectItemNum == 2)) {
        
        for (int i = 0; i < AnnotationDataArray.count; i++) {
            
            ProjectModel * model = [AnnotationDataArray objectAtIndex:i];
            
            BMKPointAnnotation* item = [[BMKPointAnnotation alloc]init];
            
            double latitude = [model.coordinate_y doubleValue];
            
            double longitude = [model.coordinate_x doubleValue];
            
            
            item.coordinate = CLLocationCoordinate2DMake(latitude, longitude);
            
            item.title = model.short_name;
            
            
            //判断建筑类型
            if ([model.category isEqualToString:@"1"]) {
                styleFlag = 1;
                
            }else if ([model.category isEqualToString:@"2"]){
                styleFlag = 2;
                
            }else if ([model.category isEqualToString:@"3"]){
                styleFlag = 3;
            }
            else if ([model.category isEqualToString:@"4"]){
                styleFlag = 4;
            }
            
            if (addViewSign == 0) {
                
                [_mapView addAnnotation:item];
                
                //
//                [UIView animateWithDuration:1.0 animations:^{
//                    [_mapView addAnnotation:item];
//                }];
            }
            else
            {
                 [_mapView addAnnotation:item];
            }
            
            [annotations addObject:item];
        }
    }
    
     addViewSign = 1;
}



-(void)viewWillAppear:(BOOL)animated {
    
    
    [self.navigationController setNavigationBarHidden:YES];
    
//    //键盘处理
//    IQKeyboardManager *manager = [IQKeyboardManager sharedManager];
//    manager.enable = YES;
//    manager.enableAutoToolbar= YES;
    
    [_mapView viewWillAppear];
    _mapView.delegate = self; // 此处记得不用的时候需要置nil，否则影响内存的释放
    //自定义地图样式是否生效
//    [BMKMapView enableCustomMapStyle:YES];
    _locService.delegate = self;
    
}

-(void)viewWillDisappear:(BOOL)animated {
    
    
    self.navigationController.navigationBarHidden = YES;
    
    
//    IQKeyboardManager *manager = [IQKeyboardManager sharedManager];
//    manager.enable = NO;
//    manager.enableAutoToolbar= NO;
    
    
    
    [_mapView viewWillDisappear];
    
    [BMKMapView enableCustomMapStyle:YES];//关闭个性化地图
    _mapView.delegate = nil; // 不用时，置nil
    _locService.delegate = nil;
//    [newTimer invalidate];
    
}


//- (void)viewDidUnload {
//    [super viewDidUnload];
//    // Release any retained subviews of the main view.
//    // e.g. self.myOutlet = nil;
//}
//
- (void)dealloc {
    if (_mapView) {
        _mapView = nil;
//        [newTimer invalidate];
    }
}

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc. that aren't in use.
}

- (void)changeMapAction:(UISegmentedControl *)segment {
    /*
     *注：必须在BMKMapView对象初始化之前设置自定义地图样式，设置后会影响所有地图实例
     *设置方法：+ (void)customMapStyle:(NSString*) customMapStyleJsonFilePath;
     */
    enableCustomMap = segment.selectedSegmentIndex == 1;
    //打开/关闭个性化地图
    [BMKMapView enableCustomMapStyle:YES];
}


#pragma mark - BMKMapViewDelegate

- (void)mapViewDidFinishLoading:(BMKMapView *)mapView {
    
    NSLog(@"地图初始化完毕");
    //打开/关闭个性化地图
    [BMKMapView enableCustomMapStyle:YES];
    
}



/**
 *地图渲染每一帧画面过程中，以及每次需要重绘地图时（例如添加覆盖物）都会调用此接口
 *@param mapview 地图View
 *@param status 此时地图的状态
 */
- (void)mapView:(BMKMapView *)mapView onDrawMapFrame:(BMKMapStatus *)status {
//    if (_clusterZoom != 0 && _clusterZoom != (NSInteger)mapView.zoomLevel) {
//        [self updateClusters];
//    }
}



/**
 *点中底图空白处会回调此接口
 *@param mapview 地图View
 *@param coordinate 空白处坐标点的经纬度
 */
- (void)mapView:(BMKMapView *)mapView onClickedMapBlank:(CLLocationCoordinate2D)coordinate {
    
    //点中底图空白处会回调此接口
}


/**
 *双击地图时会回调此接口
 *@param mapview 地图View
 *@param coordinate 返回双击处坐标点的经纬度
 */
- (void)mapview:(BMKMapView *)mapView onDoubleClick:(CLLocationCoordinate2D)coordinate {
    
#if 0
    
    NSLog(@"双击地图时会回调此接口");
    
    BMKMapStatus *mapStatus = [[BMKMapStatus alloc]init];
    
    mapStatus.fLevel = 18;
    mapStatus.fOverlooking = -45;
    mapStatus.targetGeoPt =coordinate;
    
    [_mapView setMapStatus:mapStatus withAnimation:YES];
    
#endif
    
    
}


/**
 *在地图View将要启动定位时，会调用此函数
 *@param mapView 地图View
 */
- (void)willStartLocatingUser
{
    NSLog(@"start locate");
}

/**
 *用户方向更新后，会调用此函数
 *@param userLocation 新的用户位置
 */
- (void)didUpdateUserHeading:(BMKUserLocation *)userLocation
{
    [_mapView updateLocationData:userLocation];
}

/**
 *用户位置更新后，会调用此函数
 *@param userLocation 新的用户位置
 */
- (void)didUpdateBMKUserLocation:(BMKUserLocation *)userLocation
{
    [_mapView updateLocationData:userLocation];
}

/**
 *在地图View停止定位后，会调用此函数
 *@param mapView 地图View
 */

- (void)didStopLocatingUser
{
    NSLog(@"stop locate");
}


/**
 *定位失败后，会调用此函数
 *@param mapView 地图View
 *@param error 错误号，参考CLError.h中定义的错误号
 */
- (void)didFailToLocateUserWithError:(NSError *)error
{
    NSLog(@"location error");
}




/**
 *根据anntation生成对应的View
 *@param mapView 地图View
 *@param annotation 指定的标注
 *@return 生成的标注View
 */

- (BMKAnnotationView *)mapView:(BMKMapView *)view viewForAnnotation:(id <BMKAnnotation>)annotation
{
    
//    NSLog(@"添加Annotation......");
    
//    NSLog(@" theOne %d theSelectItemNum  %d ",theOne,theSelectItemNum);
    
    
#if 1
    
    BMKPointAnnotation* itemTemp = annotation;
    
    NSString *AnnotationViewID = @"renameMark";
    
    BMKPinAnnotationView *annotationView = (BMKPinAnnotationView *)[_mapView dequeueReusableAnnotationViewWithIdentifier:AnnotationViewID];
    
    if (!annotationView) {
         annotationView = [[BMKPinAnnotationView alloc] initWithAnnotation:annotation reuseIdentifier:AnnotationViewID];
    }
    
    
    // 设置颜色
    ((BMKPinAnnotationView*)annotationView).pinColor = BMKPinAnnotationColorGreen;
    
    annotationView.annotation = annotation;
    
    // 单击弹出泡泡，弹出泡泡前提annotation必须实现title属性
    annotationView.canShowCallout = YES;
    // 从天上掉下效果
    annotationView.animatesDrop = NO;
    
    [annotationView setFrame:CGRectMake(0, 0, annotationView.frame.size.width*1, annotationView.frame.size.height*1)];
    
    
    // 设置可拖拽
    annotationView.draggable = NO;
    
    
    ((BMKPinAnnotationView*)annotationView).pinColor = BMKPinAnnotationColorGreen;
    
    
    //点击了 项目总数theSelectItemNum
    if (theSelectItemNum == 0)  {
        
        //有一个被选中了
        if (theOne >= 0) {
            
            if ([itemTemp.title isEqualToString:selectBuildingName]) {
                
                ProjectModel *model = _projectDataArray[theOne];
                
                
                annotationView.image = [UIImage imageNamed:@"dbm_tmbg01.png"];
                
                DBMBuildingView  * buildingView  = [[[NSBundle mainBundle]loadNibNamed:@"DBMBuildingView" owner:self options:nil]lastObject];
                
                
                [buildingView configViewWith:model];
                buildingView.theDelegate =self;
                
                
                //            [buildingView setFrame:CGRectMake(-400, -200, 434, 258)];
                [buildingView.bgView setImage:[UIImage imageNamed:@"jbxx_bg"]];
                
                [buildingView.project_pic setHidden:NO];
                [buildingView.project_no setHidden:NO];
                [buildingView.project_name setHidden:NO];
                [buildingView.projectStyleImg setHidden:YES];
                [buildingView.project_manger_label setHidden:NO];
                [buildingView.project_manger setHidden:NO];
                [buildingView.project_address setHidden:NO];
                [buildingView.project_mianji_Img setHidden:NO];
                [buildingView.project_mianji setHidden:NO];
                [buildingView.companyName setHidden:NO];
                [buildingView.company_logo setHidden:NO];
                [buildingView.shuLineLabel setHidden:NO];
                [buildingView.HengLineLabel setHidden:NO];
                
                [buildingView.peopleImgView setHidden:YES];
                [buildingView.equipImgView setHidden:YES];
                [buildingView.electrilcityImgView setHidden:YES];
                
                [buildingView.peopleLabel setHidden:YES];
                [buildingView.equipLabel setHidden:YES];
                [buildingView.electrilcityLabel setHidden:YES];
                
                [buildingView.equipNumImg setHidden:YES];
                [buildingView.peopleNumImg setHidden:YES];
                [buildingView.equipNumBg setHidden:YES];
                [buildingView.electrilcityNumBg setHidden:YES];
                [buildingView.electrilcityNumImg setHidden:YES];
                
                [buildingView.peopleNumLabel setHidden:YES];
                [buildingView.equipNumLabel setHidden:YES];
                [buildingView.electrilcityNumLabel setHidden:YES];
                
                
                
                if (styleFlag == 1)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_yq_sel"]];
                    
                }
                if (styleFlag == 2)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_sy_sel"]];
                }
                if (styleFlag == 3)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_jtsn_sel"]];
                }
                if (styleFlag == 4)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_bgl_sel"]];
                }
                
                
                
                [buildingView setFrame:CGRectMake(0, 0, 434, 258)];
                [buildingView setUserInteractionEnabled:YES];
                
                [annotationView addSubview: buildingView];
                
                [annotationView  setCenterOffset:CGPointMake(-annotationView.frame.size.width*0.5 + 20, -annotationView.frame.size.height*0.5+ 0)];
                
                //项目名称显示
                NSString *titleStr = annotation.title ;
                
                UILabel *annotationTitleLabel = [[UILabel alloc]init];
                
                [annotationTitleLabel setTextColor:[UIColor whiteColor]];
                
                [annotationTitleLabel setFrame:CGRectMake(310, 258, 200 , 18)];
                
                [annotationTitleLabel setTextAlignment:NSTextAlignmentCenter];
                
                [annotationTitleLabel setFont:[UIFont systemFontOfSize:14.0]];
                
                annotationTitleLabel.text = titleStr;
                
                [annotationView addSubview:annotationTitleLabel];
                
                CLLocationCoordinate2D centerCoordinate;
                
                centerCoordinate.longitude = annotation.coordinate.longitude - 0.027068;
                centerCoordinate.latitude = annotation.coordinate.latitude;
                
                //设置选中的annotation 为中心点
                [_mapView setCenterCoordinate:centerCoordinate animated:YES];
                
            }
            
            //有一个被选中了、其他的未选中的情况
            else
            {
                //未点击状态、默认状态、没有选中SelectStyle
                if (SelectStyleFlag == 0) {
                    
                    if (styleFlag == 1)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_yq"];
                    }
                    if (styleFlag == 2)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_sy"];
                    }
                    if (styleFlag == 3)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                    }
                    if (styleFlag == 4)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                    }
                }
            }
        }
        
        //没有选中的情况
        else
        {
            if (styleFlag == 1)
            {
                annotationView.image = [UIImage imageNamed:@"icon_yq"];
            }
            if (styleFlag == 2)
            {
                annotationView.image = [UIImage imageNamed:@"icon_sy"];
            }
            if (styleFlag == 3)
            {
                annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
            }
            if (styleFlag == 4)
            {
                annotationView.image = [UIImage imageNamed:@"icon_bgl"];
            }
        }
        
    }
    
    
    
    if (theSelectItemNum == 1)  {
        
        //有一个被选中了
        if (theOne >= 0) {
            
            if ([itemTemp.title isEqualToString:selectBuildingName]) {
                
                ProjectModel *model = _projectDataArray[theOne];
                
                
                annotationView.image = [UIImage imageNamed:@"dbm_tmbg01.png"];
                
                DBMBuildingView  * buildingView  = [[[NSBundle mainBundle]loadNibNamed:@"DBMBuildingView" owner:self options:nil]lastObject];
                
               
                [buildingView configViewWith:model];
                buildingView.theDelegate =self;
                
                
                //            [buildingView setFrame:CGRectMake(-400, -200, 434, 258)];
                [buildingView.bgView setImage:[UIImage imageNamed:@"jbxx_bg"]];
                
                [buildingView.project_pic setHidden:NO];
                [buildingView.project_no setHidden:NO];
                [buildingView.project_name setHidden:NO];
                [buildingView.projectStyleImg setHidden:YES];
                [buildingView.project_manger_label setHidden:NO];
                [buildingView.project_manger setHidden:NO];
                [buildingView.project_address setHidden:NO];
                [buildingView.project_mianji_Img setHidden:NO];
                [buildingView.project_mianji setHidden:NO];
                [buildingView.companyName setHidden:NO];
                [buildingView.company_logo setHidden:NO];
                [buildingView.shuLineLabel setHidden:NO];
                [buildingView.HengLineLabel setHidden:NO];
                
                [buildingView.peopleImgView setHidden:YES];
                [buildingView.equipImgView setHidden:YES];
                [buildingView.electrilcityImgView setHidden:YES];
                
                [buildingView.peopleLabel setHidden:YES];
                [buildingView.equipLabel setHidden:YES];
                [buildingView.electrilcityLabel setHidden:YES];
                
                [buildingView.equipNumImg setHidden:YES];
                [buildingView.peopleNumImg setHidden:YES];
                [buildingView.equipNumBg setHidden:YES];
                [buildingView.electrilcityNumBg setHidden:YES];
                [buildingView.electrilcityNumImg setHidden:YES];
                
                [buildingView.peopleNumLabel setHidden:YES];
                [buildingView.equipNumLabel setHidden:YES];
                [buildingView.electrilcityNumLabel setHidden:YES];
                
                
                
                if (styleFlag == 1)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_yq_sel"]];
                    
                }
                if (styleFlag == 2)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_sy_sel"]];
                }
                if (styleFlag == 3)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_jtsn_sel"]];
                }
                if (styleFlag == 4)
                {
                    [buildingView.project_style_icon setImage: [UIImage imageNamed:@"icon_bgl_sel"]];
                }
                
                
                
                [buildingView setFrame:CGRectMake(0, 0, 434, 258)];
                [buildingView setUserInteractionEnabled:YES];
                
                [annotationView addSubview: buildingView];
                
                [annotationView  setCenterOffset:CGPointMake(-annotationView.frame.size.width*0.5 + 20, -annotationView.frame.size.height*0.5+ 0)];
                
                
                
                //项目名称显示
                NSString *titleStr = annotation.title ;
                
                UILabel *annotationTitleLabel = [[UILabel alloc]init];
                
                [annotationTitleLabel setTextColor:[UIColor whiteColor]];
                
                [annotationTitleLabel setFrame:CGRectMake(310, 258, 200 , 18)];
                
                [annotationTitleLabel setTextAlignment:NSTextAlignmentCenter];
                
                [annotationTitleLabel setFont:[UIFont systemFontOfSize:14.0]];
                
                annotationTitleLabel.text = titleStr;
                
                [annotationView addSubview:annotationTitleLabel];
                
                CLLocationCoordinate2D centerCoordinate;
                
                centerCoordinate.longitude = annotation.coordinate.longitude - 0.027068;
                centerCoordinate.latitude = annotation.coordinate.latitude;
                
                //设置选中的annotation 为中心点
                [_mapView setCenterCoordinate:centerCoordinate animated:YES];
                
            }
            //有一个被选中了、其他的未选中的情况
            else
            {
                //未点击状态、默认状态、没有选中SelectStyle
                if (SelectStyleFlag == 0) {
                    
                    if (styleFlag == 1)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_yq"];
                    }
                    if (styleFlag == 2)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_sy"];
                    }
                    if (styleFlag == 3)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                    }
                    if (styleFlag == 4)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                    }
                }
                
                else
                {
                    if (SelectStyleFlag == styleFlag) {
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                        }
                    }
                    else
                    {
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                }
            }
        }
        
        
        
        //没有被选中的的情况
        else
        {
            //未点击状态
            if (SelectStyleFlag == 0) {
                
                if (styleFlag == 1)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_yq"];
                }
                if (styleFlag == 2)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_sy"];
                }
                if (styleFlag == 3)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                }
                if (styleFlag == 4)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                }
            }
            
            else
            {
                if (SelectStyleFlag == styleFlag) {
                    
                    if (styleFlag == 1)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_yq"];
                    }
                    if (styleFlag == 2)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_sy"];
                    }
                    if (styleFlag == 3)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                    }
                    if (styleFlag == 4)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                    }
                }
                else
                {
                    if (styleFlag == 1)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                    }
                    if (styleFlag == 2)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                    }
                    if (styleFlag == 3)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                    }
                    if (styleFlag == 4)
                    {
                        annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                    }
                }
            }
        }
    }
    
    
    
    
    //点击了 设备总数
    else  if (theSelectItemNum == 2) {
        
        //有一个被选中了
        if (theOne >= 0) {
            
            if ([itemTemp.title isEqualToString:selectBuildingName]) {
                
                if (styleFlag == 1)
                {
                    [annotationView setImage: [UIImage imageNamed:@"icon_yq_sel"]];
                }
                if (styleFlag == 2)
                {
                    [annotationView setImage: [UIImage imageNamed:@"icon_sy_sel"]];
                }
                if (styleFlag == 3)
                {
                    [annotationView setImage: [UIImage imageNamed:@"icon_jtsn_sel"]];
                }
                
                if (styleFlag == 4)
                {
                    [annotationView setImage: [UIImage imageNamed:@"icon_bgl_sel"]];
                }
                
                
                //设置泡泡
                UIImageView *paopaoImageView = [[UIImageView alloc]init];
                
                [paopaoImageView setFrame:CGRectMake(-12, -33, 45, 30)];
                UILabel *paopaoLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, -3, 45, 30)];
                [paopaoLabel setTextAlignment:NSTextAlignmentCenter];
                
                
                ProjectModel *pro_model = [[ProjectModel alloc]init];
                
                pro_model =  _projectDataArray[theOne];
                
                
                if ([theSelectStatus isEqualToString:@"1"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model.device_good] ];

                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_zc_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model.device_good isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                    }
                }
                else if ([theSelectStatus isEqualToString:@"2"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model.device_fault] ];
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_gz_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model.device_fault isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                    }
                    
                }
                else if ([theSelectStatus isEqualToString:@"0"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model.device_offline] ];
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_lx_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model.device_offline isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                    }
                }
                
                
                [annotationView  setCenterOffset:CGPointMake(-annotationView.frame.size.width*0.5 + 20, -annotationView.frame.size.height*0.5+ 0)];
                
                
                //项目名称显示
                NSString *titleStr = annotation.title ;
                
                UILabel *annotationTitleLabel = [[UILabel alloc]init];
                
                [annotationTitleLabel setTextColor:[UIColor whiteColor]];
                
                [annotationTitleLabel setFrame:CGRectMake(-80, 50, 200 , 18)];
                
                [annotationTitleLabel setTextAlignment:NSTextAlignmentCenter];
                
                [annotationTitleLabel setFont:[UIFont systemFontOfSize:14.0]];
                
                annotationTitleLabel.text = titleStr;
                
                [annotationView addSubview:annotationTitleLabel];
                
                CLLocationCoordinate2D centerCoordinate;
                
                centerCoordinate.longitude = annotation.coordinate.longitude - 0.027068;
                centerCoordinate.latitude = annotation.coordinate.latitude;
                
                //设置选中的annotation 为中心点
                [_mapView setCenterCoordinate:centerCoordinate animated:YES];
                
            }
            
            
            //在有被选中的情况下、没有被选中的
            else
            {
                
                if (styleFlag == 1)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_yq"];
                }
                if (styleFlag == 2)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_sy"];
                }
                if (styleFlag == 3)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                }
                if (styleFlag == 4)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                }
                
                
                //设置泡泡
                UIImageView *paopaoImageView = [[UIImageView alloc]init];
                
                [paopaoImageView setFrame:CGRectMake(-20, -33, 45, 30)];
                UILabel *paopaoLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, -3, 45, 30)];
                [paopaoLabel setTextAlignment:NSTextAlignmentCenter];
                
                
                ProjectModel *pro_model_this = [[ProjectModel alloc]init];
                
                
                for (ProjectModel *pro_model in _projectDataArray) {
                    
                    if ([pro_model.short_name isEqualToString:annotation.title]) {
                        pro_model_this = pro_model;
                        
                    }
                }
                
                
                if ([theSelectStatus isEqualToString:@"1"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model_this.device_good] ];
                    
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_zc_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model_this.device_good isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                    
                }
                else if ([theSelectStatus isEqualToString:@"2"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model_this.device_fault] ];
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_gz_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model_this.device_fault isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                }
                
                else if ([theSelectStatus isEqualToString:@"0"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model_this.device_offline] ];
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_lx_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model_this.device_offline isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                }
                
                //不显示泡泡
                [paopaoImageView setHidden:YES];
                
//                [annotationView  setCenterOffset:CGPointMake(-annotationView.frame.size.width*0.5 + 20, -annotationView.frame.size.height*0.5+ 0)];
            }
        }
        
        
        //没有任何一个被选中的的情况
        else
        {
            
            //未点击状态
//            if (SelectStyleFlag == 0) {
            
            if (1) {
                
                if (styleFlag == 1)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_yq"];
                }
                if (styleFlag == 2)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_sy"];
                }
                if (styleFlag == 3)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_jtsn"];
                }
                if (styleFlag == 4)
                {
                    annotationView.image = [UIImage imageNamed:@"icon_bgl"];
                }
                
                //设置泡泡
                UIImageView *paopaoImageView = [[UIImageView alloc]init];
                
                [paopaoImageView setFrame:CGRectMake(-20, -33, 45, 30)];
                UILabel *paopaoLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, -3, 45, 30)];
                [paopaoLabel setTextAlignment:NSTextAlignmentCenter];
                
                
                ProjectModel *pro_model_this = [[ProjectModel alloc]init];
                
                
                for (ProjectModel *pro_model in _projectDataArray) {
                    
                    if ([pro_model.short_name isEqualToString:annotation.title]) {
                        pro_model_this = pro_model;
                    }
                }
                
                
                if ([theSelectStatus isEqualToString:@"1"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model_this.device_good] ];
                    
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_zc_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model_this.device_good isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                }
                else if ([theSelectStatus isEqualToString:@"2"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model_this.device_fault] ];
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_gz_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model_this.device_fault isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                }
                
                else if ([theSelectStatus isEqualToString:@"0"]) {
                    
                    [paopaoLabel setText:[NSString stringWithFormat:@"%@",pro_model_this.device_offline] ];
                    [paopaoImageView setImage: [UIImage imageNamed:@"sb_lx_shu"]];
                    [paopaoImageView addSubview:paopaoLabel];
                    [annotationView addSubview:paopaoImageView];
                    
                    if ([pro_model_this.device_offline isEqualToString:@"0"]) {
                        [paopaoImageView setHidden:YES];
                        [paopaoLabel setHidden:YES];
                        
                        if (styleFlag == 1)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_yq_nor"];
                        }
                        if (styleFlag == 2)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_sy_nor"];
                        }
                        if (styleFlag == 3)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_jtsn_nor"];
                        }
                        if (styleFlag == 4)
                        {
                            annotationView.image = [UIImage imageNamed:@"icon_bgl_nor"];
                        }
                    }
                }
//                [annotationView  setCenterOffset:CGPointMake(-annotationView.frame.size.width*0.5 + 20, -annotationView.frame.size.height*0.5+ 0)];
            }
        }
    }
    
    return annotationView;
    
#endif
    
}



/**
 *当选中一个annotation views时，调用此接口
 *@param mapView 地图View
 *@param views 选中的annotation views
 */


- (void)mapView:(BMKMapView *)mapView didSelectAnnotationView:(BMKAnnotationView *)view
{
    
    int theOnetemp = -1;
    
    if (theOne >-1) {
        theOnetemp = theOne;
    }
    
    
    //默认状态
    if(theSelectItemNum == 0)
    {
        int flag_is_exist = 0;
        
        for (ProjectModel * model in _projectDataArray) {
            
            if ([model.short_name isEqualToString:view.annotation.title]) {
                
                //项目列表中存在这个
                flag_is_exist = 1;
                //刷新
                
            }
        }
        
        if (flag_is_exist == 1) {
            
            BMKPointAnnotation* itemTemp = view.annotation;
            
            int tagetTag = -1;
            
            for (int i = 0; i < _projectDataArray.count; i++) {
                
                ProjectModel * model = [_projectDataArray objectAtIndex:i];
                
                if ([itemTemp.title isEqualToString: model.short_name]) {
                    tagetTag = i;
                    selectBuildingName = model.short_name;
                    [dbmEquipTV reloadTVWithModel:model];
                    break;
                }
            }
            
            
            //更新下方数据
            //更新图片显示
            theOne = tagetTag;
            
            //判断是否第二次点击
            if (theOne == theOnetemp) {
                
                theInformationOne = -1;
                NSLog(@"第二次点击");
            }
            
            [self addMapPointAnnotation:_projectDataArray];
        }

    }
    
    //设备 逆向
    if (theSelectItemNum == 2) {
        
        int flag_is_exist = 0;
        
        for (ProjectModel * model in equipTVDataArray) {
            
            if ([model.short_name isEqualToString:view.annotation.title]) {
                
                //项目列表中存在这个
                flag_is_exist = 1;
                //刷新
                
            }
        }
        
        if (flag_is_exist == 1) {
            
            BMKPointAnnotation* itemTemp = view.annotation;
            
            int tagetTag = -1;
            
            for (int i = 0; i < _projectDataArray.count; i++) {
                
                ProjectModel * model = [_projectDataArray objectAtIndex:i];
                
                if ([itemTemp.title isEqualToString: model.short_name]) {
                    tagetTag = i;
                    selectBuildingName = model.short_name;
                    [dbmEquipTV reloadTVWithModel:model];
                    break;
                }
            }
            
            //更新下方数据
            //更新图片显示
            theOne = tagetTag;
            
            //判断是否第二次点击
            if (theOne == theOnetemp) {
                
                theInformationOne = -1;
                NSLog(@"第二次点击");
            }
            
            [self addMapPointAnnotation:_projectDataArray];
        }
        
        //不能反向的情况
        else
        {
//            theOne = -1;
            
            [self addMapPointAnnotation:_projectDataArray];
        }
        
    }
    
    
    //项目 逆向
    if(theSelectItemNum == 1)
    {
        
        BMKPointAnnotation* itemTemp = view.annotation;
        
        int tagetTag = -1;
        
        for (int i = 0; i < _projectDataArray.count; i++) {
            
            ProjectModel * model = [_projectDataArray objectAtIndex:i];
            
            if ([itemTemp.title isEqualToString: model.short_name]) {
                
                NSLog(@"%@",model.short_name);
                NSLog(@"model.category%@",model.category);
                NSLog(@"styleFlag%d",styleFlag);
                
                if( [model.category isEqualToString:[NSString stringWithFormat:@"%d",SelectStyleFlag]])
                {
                    tagetTag = i;
                    
                    selectBuildingName = model.short_name;
                    
                    [dbmProjectTV reloadTVWithModel:model];
                    
                }
                break;
            }
        }
        
        
        //更新下方数据
        //更新图片显示
        theOne = tagetTag;
        
        //判断是否第二次点击
        if (theOne == theOnetemp) {
            
            theInformationOne = -1;
            NSLog(@"第二次点击");
        }
        
        [self addMapPointAnnotation:_projectDataArray];
        
    }
    
}



/**
 *地图状态改变完成后会调用此接口
 *@param mapview 地图View
 */
- (void)mapStatusDidChanged:(BMKMapView *)mapView
{
    NSLog(@"地图状态改变完成后会调用此接口");
}


/**
 *地图区域即将改变时会调用此接口
 *@param mapview 地图View
 *@param animated 是否动画
 */
- (void)mapView:(BMKMapView *)mapView regionWillChangeAnimated:(BOOL)animated
{
    NSLog(@"地图区域即将改变时会调用此接口");
}

/**
 *地图区域改变完成后会调用此接口
 *@param mapview 地图View
 *@param animated 是否动画
 */

- (void)mapView:(BMKMapView *)mapView regionDidChangeAnimated:(BOOL)animated
{
    NSLog(@"地图区域改变完成后会调用此接口");
    
    NSLog(@"%f",mapView.zoomLevel);
}



/**
 *当取消选中一个annotation views时，调用此接口
 *@param mapView 地图View
 *@param views 取消选中的annotation views
 */
- (void)mapView:(BMKMapView *)mapView didDeselectAnnotationView:(BMKAnnotationView *)view
{
    
}


//viewForAnnotation:
/**
 *当点击annotation view弹出的泡泡时，调用此接口
 *@param mapView 地图View
 *@param view 泡泡所属的annotation view
 */

- (void)mapView:(BMKMapView *)mapView annotationViewForBubble:(BMKAnnotationView *)view;
{
//    view 
}


@end

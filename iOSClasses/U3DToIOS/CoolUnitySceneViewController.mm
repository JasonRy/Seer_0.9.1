//
//  CoolUnitySceneViewController.m
//  Unity-iPhone
//
//  Created by Jason.R on 16/12/1.
//
//

#import "CoolUnitySceneViewController.h"

#include "UI/UnityViewControllerBase.h"
#include "UnityAppController+ViewHandling.h"
#import "MyViewInit.h"
#import "MapViewBaseDemoViewController.h"

@interface CoolUnitySceneViewController ()

@end

@implementation CoolUnitySceneViewController

-(void)viewWillAppear:(BOOL)animated
{
    [self.navigationController setNavigationBarHidden:YES animated:YES];
}


-(instancetype)init
{
    self = [super init];
    
    if (self) {
        NSLog(@"CoolUnitySceneViewController init");
    }
    return self;
}

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    [self.view addSubview:GetAppController().unityView];
    
    GetAppController().unityView.frame = self.view.frame;
    
    //注册通知
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(tongzhi:) name:@"tongzhi" object:nil];
    
}


- (void)tongzhi:(NSNotification *)text{
    
    NSLog(@"%@",text.userInfo[@"textOne"]);
    NSLog(@"－－－－－接收到通知------");
    
    MapViewBaseDemoViewController *goodByeVC = [[MapViewBaseDemoViewController alloc] initWithNibName:nil bundle:nil];
    [self.navigationController pushViewController:goodByeVC animated:NO];
    
    
}


#pragma mark cplusplus code

extern "C"{
    
    //被U3D调用的方法
    void LoginTo_iOS(){
        [MyViewInit goToIOS];
    }
        
}


-(void)lyRun
{
    
}

- (void)show:(id)sender{
    [MyViewInit setEnabled:@"show"];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

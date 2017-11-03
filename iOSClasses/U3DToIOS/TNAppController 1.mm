#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"

#import "CoolUnitySceneViewController.h"

@interface TNAppController : UnityAppController

@property (nonatomic, strong) UINavigationController *navController;

- (void)willStartWithViewController:(UIViewController*)controller;

@end

@implementation TNAppController

- (void)willStartWithViewController:(UIViewController*)controller
{
    _rootController = [[UIViewController alloc] init];
    _rootView = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _rootController.view = _rootView;
    
    CoolUnitySceneViewController *helloVC = [[CoolUnitySceneViewController alloc] initWithNibName:nil bundle:nil];
    self.navController = [[UINavigationController alloc] initWithRootViewController:helloVC];
    
    [_rootView addSubview:self.navController.view];
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(TNAppController)

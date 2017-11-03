//
//  NDHudView.m
//  MSIVideo
//
//  Created by nidom on 15/1/23.
//  Copyright (c) 2015年 nidom. All rights reserved.
//

#import "NDHudView.h"
#import "MBProgressHUD.h"

/*
 使用说明：
 1、显示
 [NDHudView showText:@"请稍等" animated:YES identifier:@"yonghuxieyi" configParameter:^(NDHudView *config) {} inView:self.view];
 2、消失
 [NDHudView hideWithIdentifier:@"yonghuxieyi"];
 */

@interface NDHudView()<MBProgressHUDDelegate>

{
    MBProgressHUD   *_hud;
}

@end
static NSMutableArray * _huds;
@implementation NDHudView
- (instancetype)initWithView:(UIView *)view
{
    if (view == nil) {
        return nil;
    }
    
    self = [super init];
    if (self) {
        _hud = [[MBProgressHUD alloc] initWithView:view];
        _hud.delegate				  = self;					   // 设置代理
        _hud.animationType			 = MBProgressHUDAnimationZoom; // 默认动画样式
        _hud.removeFromSuperViewOnHide = YES;						// 该视图隐藏后则自动从父视图移除掉
        
        [view addSubview:_hud];
        
        if(!_huds){
            _huds = [[NSMutableArray alloc]initWithCapacity:3];
        }
    }
    return self;
}

- (void)hide:(BOOL)hide afterDelay:(NSTimeInterval)delay
{
    [_hud hide:hide afterDelay:delay];
}

- (void)hide
{
    [_hud hide:YES];
}
+(void)hideWithIdentifier:(NSString *)identifier
{

    NSPredicate * predicate = [NSPredicate predicateWithFormat:@"hideIdentifier == %@",identifier];
    NSArray * huds = [_huds filteredArrayUsingPredicate:predicate];
    if(huds!=nil &&[_huds firstObject])
    {
         NDHudView  *hud =   [huds firstObject];
        [hud hide];
        [_huds removeObject:hud];
    }

}
- (void)show:(BOOL)show
{
    // 根据属性判断是否要显示文本
    if (_text != nil && _text.length != 0) {
        _hud.labelText = _text;
    }
    
    if (_detailsText != nil && _detailsText.length != 0)
    {
        _hud.detailsLabelText = _detailsText;
    }
    // 设置文本字体
    if (_textFont) {
        _hud.labelFont = _textFont;
    }
    
    // 如果设置这个属性,则只显示文本
    if (_showTextOnly == YES && _text != nil && _text.length != 0) {
        _hud.mode = MBProgressHUDModeText;
    }
    
    // 设置背景色
    if (_backgroundColor) {
        _hud.color = _backgroundColor;
    }
    
    // 文本颜色
    if (_labelColor) {
        _hud.labelColor = _labelColor;
    }
    
    // 设置圆角
    if (_cornerRadius) {
        _hud.cornerRadius = _cornerRadius;
    }
    
    // 设置透明度
    if (_opacity) {
        _hud.opacity = _opacity;
    }
    
    // 自定义view
    if (_customView) {
        _hud.mode = MBProgressHUDModeCustomView;
        _hud.customView = _customView;
    }
    
    // 边缘留白
    if (_margin > 0) {
        _hud.margin = _margin;
    }
    
    [_hud show:show];
}

#pragma mark - HUD代理方法
- (void)hudWasHidden:(MBProgressHUD *)hud
{
    [_hud removeFromSuperview];
    _hud = nil;
}

#pragma mark - 重写setter方法
@synthesize animationStyle = _animationStyle;
- (void)setAnimationStyle:(HUDAnimationType)animationStyle
{
    _animationStyle	= animationStyle;
    _hud.animationType = (MBProgressHUDAnimation)_animationStyle;
}
- (HUDAnimationType)animationStyle
{
    return _animationStyle;
}

#pragma mark - 便利的方法
+ (void)showText:(NSString *)text animated:(BOOL)flag
     configParameter:(ConfigBlock)config
            duration:(NSTimeInterval)sec
              inView:(UIView *)view
{
    NDHudView *hud	 = [[NDHudView alloc] initWithView:view];
    hud.text		 = text;
    hud.showTextOnly = !flag;
    hud.margin	   = 10.f;
    
    // 配置额外的参数
    config(hud);
    
    // 显示
    [hud show:YES];
    
    // 延迟sec后消失
    [hud hide:YES afterDelay:sec];
}

+ (void)showText:(NSString *)text detailsText:(NSString *)dec animated:(BOOL)flag
 configParameter:(ConfigBlock)config
        duration:(NSTimeInterval)sec
          inView:(UIView *)view
{
    NDHudView *hud	 = [[NDHudView alloc] initWithView:view];
    hud.text		 = text;
    hud.showTextOnly = !flag;
    hud.margin	   = 10.f;
    hud.detailsText = dec;
    // 配置额外的参数
    config(hud);
    
    // 显示
    [hud show:YES];
    
    // 延迟sec后消失
    [hud hide:YES afterDelay:sec];
}

+ (void)showCustomView:(CustomViewBlock)viewBlock
       configParameter:(ConfigBlock)config
              duration:(NSTimeInterval)sec
                inView:(UIView *)view
{
    NDHudView *hud	 = [[NDHudView alloc] initWithView:view];
    hud.margin	 = 10.f;
    
    // 配置额外的参数
    config(hud);
    
    // 自定义View
    hud.customView   = viewBlock();
    
    // 显示
    [hud show:YES];
    
    [hud hide:YES afterDelay:sec];
}


+ (instancetype)showText:(NSString *)text animated:(BOOL)flag identifier:(NSString *)identifier
         configParameter:(ConfigBlock)config
                  inView:(UIView *)view
{
    NDHudView *hud	 = [[NDHudView alloc] initWithView:view];
    hud.text = text;
    hud.showTextOnly = !flag;
    hud.margin	   = 10.f;
 
    // 配置额外的参数
    config(hud);
    
    // 显示
    [hud show:YES];
    
    
    [hud setHideIdentifier:identifier];
    [_huds addObject:hud];
    
    return hud;
}



+ (instancetype)showCustomView:(CustomViewBlock)viewBlock identifier:(NSString *)identifier
               configParameter:(ConfigBlock)config
                        inView:(UIView *)view
{
    NDHudView *hud	 = [[NDHudView alloc] initWithView:view];
    hud.margin	   = 10.f;
    
    // 配置额外的参数
    config(hud);
    
    // 自定义View
    hud.customView   = viewBlock();
    
    // 显示
    [hud show:YES];
    
    
    [hud setHideIdentifier:identifier];
    [_huds addObject:hud];
    
    return hud;
}

+ (BOOL)hudIsShowWithIdentifier:(NSString *)identifier
{
    NSPredicate * predicate = [NSPredicate predicateWithFormat:@"hideIdentifier == %@",identifier];
    NSArray * huds = [_huds filteredArrayUsingPredicate:predicate];
    if (huds.count > 0) {
        
        return YES;
    }
    return NO;
}


@end

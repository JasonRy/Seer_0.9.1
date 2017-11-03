//
//  NDHudView.h
//  MSIVideo
//
//  Created by nidom on 15/1/23.
//  Copyright (c) 2015年 nidom. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MBProgressHUD.h"
@class NDHudView;

// 定义block
typedef void (^ConfigBlock)(NDHudView *config);
typedef UIView *(^CustomViewBlock)();

// 定义枚举值
typedef enum {
    Fade	= MBProgressHUDAnimationFade,
    Zoom	= MBProgressHUDAnimationZoom,
    ZoomOut = MBProgressHUDAnimationZoomOut,
    ZoomIn  = MBProgressHUDAnimationZoomIn,
} HUDAnimationType;

@interface NDHudView : NSObject

@property (nonatomic, copy) NSString *   hideIdentifier;  // 表示符
// 动画效果
@property (nonatomic, assign) HUDAnimationType   animationStyle;  // 动画样式

// 文本加菊花
@property (nonatomic, copy) NSString		  *text;			// 文本
@property (nonatomic, copy) NSString          *detailsText; //详细说明
@property (nonatomic, strong) UIFont		  *textFont;		// 文本字体

// 自定义view
@property (nonatomic, strong) UIView			*customView;	  // 自定义view  37x37尺寸

// 只显示文本的相关设置
@property (nonatomic, assign) BOOL			   showTextOnly;	// 只显示文本

// 边缘留白
@property (nonatomic, assign) float			  margin;		  // 边缘留白

// 颜色设置(设置了颜色之后,透明度就会失效)
@property (nonatomic, strong) UIColor		   *backgroundColor; // 背景颜色
@property (nonatomic, strong) UIColor		   *labelColor;	  // 文本颜色

// 透明度
@property (nonatomic, assign) float			  opacity;		 // 透明度

// 圆角
@property (nonatomic, assign) float			  cornerRadius;	// 圆角

/**
 *  <#Description#>
 *
 *  @param text   <#text description#>
 *  @param flag   是否显示旋转菊花
 *  @param config 对hud进行配置
 *  @param sec    几秒后消失
 *  @param view   容器view
 */
+ (void)showText:(NSString *)text animated:(BOOL)flag
 configParameter:(ConfigBlock)config
        duration:(NSTimeInterval)sec
          inView:(UIView *)view;

+ (void)showText:(NSString *)text detailsText:(NSString *)dec animated:(BOOL)flag
 configParameter:(ConfigBlock)config
        duration:(NSTimeInterval)sec
          inView:(UIView *)view;

/**
 *  <#Description#>
 *
 *  @param viewBlock 返回自定义view
 *  @param config    对hud进行配置
 *  @param sec       几秒后消失
 *  @param view      容器view
 */
+ (void)showCustomView:(CustomViewBlock)viewBlock
       configParameter:(ConfigBlock)config
              duration:(NSTimeInterval)sec
                inView:(UIView *)view;



/**
 *  <#Description#>
 *
 *  @param text   <#text description#>
 *  @param flag   <#flag description#>
 *  @param config <#config description#>
 *  @param view   <#view description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)showText:(NSString *)text animated:(BOOL)flag identifier:(NSString *)identifier
         configParameter:(ConfigBlock)config
                  inView:(UIView *)view;

+ (instancetype)showCustomView:(CustomViewBlock)viewBlock identifier:(NSString *)identifier
               configParameter:(ConfigBlock)config
                        inView:(UIView *)view;

+(void)hideWithIdentifier:(NSString *)identifier;

/**
 检查一个hud是否正在显示
 */
+ (BOOL)hudIsShowWithIdentifier:(NSString *)identifier;
@end

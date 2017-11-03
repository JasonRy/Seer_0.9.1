//
//  UIColor+Hex.h
//  WE
//
//  Created by apple on 15/12/14.
//  Copyright © 2015年 TGS. All rights reserved.
//

//iOS中十六进制的颜色转换为UIColor

#import <UIKit/UIKit.h>

@interface UIColor (Hex)

+ (UIColor *) colorWithHexString: (NSString *)color;
@end


//
//  JGProgressView.m
//  JGProgressView
//
//  Created by 郭军 on 2017/3/16.
//  Copyright © 2017年 ZJNY. All rights reserved.
//

#import "JGProgressView.h"

#define KProgressBorderWidth 2.0f
#define KProgressPadding 1.0f
#define KProgressColor [UIColor colorWithRed:0/255.0 green:191/255.0 blue:255/255.0 alpha:1]

@interface JGProgressView ()

@property (nonatomic, weak) UIView *tView;

@end

@implementation JGProgressView

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        
        //边框
        UIImageView *borderView = [[UIImageView alloc] initWithFrame:self.bounds];
        [borderView setImage:[UIImage imageNamed:@"dianchi_55_30.png"]];
        
//        borderView.layer.cornerRadius = self.bounds.size.height * 0.5;
//        borderView.layer.masksToBounds = YES;
//        borderView.backgroundColor = [UIColor whiteColor];
//        borderView.layer.borderColor = [KProgressColor CGColor];
//        borderView.layer.borderWidth = KProgressBorderWidth;
        
        [self addSubview:borderView];
        
        
        //进度
        UIView *tView = [[UIView alloc] init];
        tView.backgroundColor = [self colorWithHexString:@"5daeec"];
        
//        tView.layer.cornerRadius = (self.bounds.size.height - (KProgressBorderWidth + KProgressPadding) * 2) * 0.5;
//        tView.layer.masksToBounds = YES;
        
        [self addSubview:tView];
        self.tView = tView;
    }
    
    return self;
}

- (void)setProgress:(CGFloat)progress
{
    _progress = progress;
    
    CGFloat margin = KProgressBorderWidth + KProgressPadding;
    CGFloat maxWidth = self.bounds.size.width - margin * 2;
    CGFloat heigth = self.bounds.size.height - margin * 2;
    
    _tView.frame = CGRectMake(margin, margin, maxWidth * progress, heigth);
}


- (UIColor *) colorWithHexString: (NSString *)hexString
{
    
    NSString *cString = [[hexString stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    
    //hexString应该6到8个字符
    if ([cString length] < 6) {
        return [UIColor clearColor];
    }
    
    //如果hexString 有@"0X"前缀
    if ([cString hasPrefix:@"0X"])
        cString = [cString substringFromIndex:2];
    
    //如果hexString 有@"#""前缀
    if ([cString hasPrefix:@"#"])
        cString = [cString substringFromIndex:1];
    if ([cString length] != 6)
        return [UIColor clearColor];
    
    //RGB转换
    NSRange range;
    range.location = 0;
    range.length = 2;
    
    //R
    NSString *rString = [cString substringWithRange:range];
    
    //G
    range.location = 2;
    NSString *gString = [cString substringWithRange:range];
    
    //B
    range.location = 4;
    NSString *bString = [cString substringWithRange:range];
    
    //
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    
    return [UIColor colorWithRed:((float) r / 255.0f) green:((float) g / 255.0f) blue:((float) b / 255.0f) alpha:1.0f];
}


@end

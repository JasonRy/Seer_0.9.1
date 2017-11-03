//
//  SelectBuildingView.m
//  IphoneMapSdkDemo
//
//  Created by 陶晨麟 on 16/11/17.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import "SelectBuildingView.h"

@implementation SelectBuildingView


//XIB方式调用这个方法
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    _signNum = 0;
    
    self = [super initWithCoder:aDecoder];
    
    if (self) {
        
        UITapGestureRecognizer *gesterure = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(ssxzAction)];
        [self.ssxxBtn addGestureRecognizer:gesterure];
        
        UITapGestureRecognizer *gesterure1 = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(fzxxAction)];
        [self.fzxxBtn addGestureRecognizer:gesterure1];
        
        
        UITapGestureRecognizer *gesterure2 = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(viewChange)];
        [self.viewChangeBtn addGestureRecognizer:gesterure2];
        
    }
    return self;
}


- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    if (!self.isUserInteractionEnabled || self.isHidden) {
        return nil;
    }
    
    static NSInteger count = 0;
    //if ([self pointInside:point withEvent:event]) {
        for (UIView *subview in [self.subviews reverseObjectEnumerator]) {
            CGPoint convertedPoint = [subview convertPoint:point fromView:self];
            UIView *hitTestView = [subview hitTest:convertedPoint withEvent:event];
            if (hitTestView) {
                if ([hitTestView isKindOfClass:[UIButton class]]) {
                    count ++;
                    if (count == 2) {
                        count = 0;
                        return hitTestView;
                    }
                    if (hitTestView.tag == 20000) {
                        [self ssxzAction];
                    }
                    else if (hitTestView.tag == 20001) {
                        [self fzxxAction];
                   }
                    
                    else if (hitTestView.tag == 20002) {
                        [self viewChange];
                    }
                }
                return hitTestView;
            }
        }
        return self;
   // }
    return nil;
}


-(void)ssxzAction
{
    NSLog(@"ssxzAction");
    
    NSLog(@"SelectBuildingView 点击了 ");
 
    [self.buleImg1 setHidden:YES];
    [self.xxxxLabel setHidden:YES];
    [self.xxxxTextLabel setHidden:YES];
    [self.buleImg2 setHidden:YES];
    [self.wygsLabel setHidden:YES];
    [self.wygsTextLabel setHidden:YES];
    
    [self.bgImageView setImage:[UIImage imageNamed:@"bg_btntect_ip"]];
    [self.cheweiImg setHidden:NO];
    [self.cheweiLabel setHidden:NO];
    [self.renyuanImg setHidden:NO];
    [self.renyuanLabel setHidden:NO];
    [self.shebeiImg setHidden:NO];
    [self.shebeiLabel setHidden:NO];
    [self.haodianImg setHidden:NO];
    [self.haodianLabel setHidden:NO];
    [self.cheweiNumLabel setHidden:NO];
    [self.renyuanNumLabel setHidden:NO];
    [self.shebeiNumLabel setHidden:NO];
    [self.haodianNumLabel setHidden:NO];
    [self.cheweiNumImg setHidden:NO];
    [self.renyuanNumImg setHidden:NO];
    
    [self.haodianNumImg setHidden:NO];
    
    [self.cheweiBGImg setHidden:NO];
    [self.renyuanBGImg setHidden:NO];
    [self.shebeiBGImg setHidden:NO];
    [self.haodianBGImg setHidden:NO];
    
    [self.ssxxBtn setHidden:NO];
    [self.fzxxBtn setHidden:NO];
    
    [self.shebeiNumImg setHidden:NO];
    
    
    [UIView animateWithDuration:0.6 animations:^{
        
        if (self.count_total >0.0) {
            
            [self.shebeiNumImg setFrame:CGRectMake(127, 105, 139.0 * (self.count_fault / self.count_total), 15)];
            
            [self.haodianNumImg setFrame:CGRectMake(127, 160, 195.0 * (self.power_amount /3000.0), 15)];
            
        }
        
    }];
    
}


-(void)fzxxAction
{
    NSLog(@"SelectBuildingView 点击了 ");
    
    NSLog(@"fzxxAction");
    
    if (self.count_total >0.0) {
        [self.shebeiNumImg setFrame:CGRectMake(127, 105, 139.0 * 0, 15)];
    }
    
    if (self.power_amount >0.0) {
        [self.haodianNumImg setFrame:CGRectMake(127, 160, 195.0 * 0, 15)];
    }
    
    
    [self.bgImageView setImage:[UIImage imageNamed:@"bg_btntect_fuzhuxinxi_ip"]];
    [self.cheweiImg setHidden:YES];
    [self.cheweiLabel setHidden:YES];
    [self.renyuanImg setHidden:YES];
    [self.renyuanLabel setHidden:YES];
    [self.shebeiImg setHidden:YES];
    [self.shebeiLabel setHidden:YES];
    [self.haodianImg setHidden:YES];
    [self.haodianLabel setHidden:YES];
    [self.cheweiNumLabel setHidden:YES];
    [self.renyuanNumLabel setHidden:YES];
    [self.shebeiNumLabel setHidden:YES];
    [self.haodianNumLabel setHidden:YES];
    [self.cheweiNumImg setHidden:YES];
    [self.renyuanNumImg setHidden:YES];
    [self.shebeiNumImg setHidden:YES];
    [self.haodianNumImg setHidden:YES];
    
    [self.cheweiBGImg setHidden:YES];
    [self.renyuanBGImg setHidden:YES];
    [self.shebeiBGImg setHidden:YES];
    [self.haodianBGImg setHidden:YES];
    
    [self.ssxxBtn setHidden:NO];
    [self.fzxxBtn setHidden:NO];
    
    
    [self.buleImg1 setHidden:NO];
    [self.xxxxLabel setHidden:NO];
    [self.xxxxTextLabel setHidden:NO];
    [self.buleImg2 setHidden:NO];
    [self.wygsLabel setHidden:NO];
    [self.wygsTextLabel setHidden:NO];
    
}



-(void)viewChange
{
    
    NSLog(@"点击了进入3D");
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(SelectBuildingViewDelegate:)]) {
        
        [_theDelegate SelectBuildingViewDelegate:self.view_tag];
        
    }
    
//
//    _signNum ++ ;
//    
//    if (_signNum %2 == 1) {
//        
//        [self.buleImg1 setHidden:YES];
//        [self.xxxxLabel setHidden:YES];
//        [self.xxxxTextLabel setHidden:YES];
//        [self.buleImg2 setHidden:YES];
//        [self.wygsLabel setHidden:YES];
//        [self.wygsTextLabel setHidden:YES];
//        
//        [self.bgImageView setImage:[UIImage imageNamed:@"bg_btntect_ip"]];
//        [self.cheweiImg setHidden:NO];
//        [self.cheweiLabel setHidden:NO];
//        [self.renyuanImg setHidden:NO];
//        [self.renyuanLabel setHidden:NO];
//        [self.shebeiImg setHidden:NO];
//        [self.shebeiLabel setHidden:NO];
//        [self.haodianImg setHidden:NO];
//        [self.haodianLabel setHidden:NO];
//        [self.cheweiNumLabel setHidden:NO];
//        [self.renyuanNumLabel setHidden:NO];
//        [self.shebeiNumLabel setHidden:NO];
//        [self.haodianNumLabel setHidden:NO];
//        [self.cheweiNumImg setHidden:NO];
//        [self.renyuanNumImg setHidden:NO];
//        [self.shebeiNumImg setHidden:NO];
//        [self.haodianNumImg setHidden:NO];
//        [self.ssxxBtn setHidden:NO];
//        [self.fzxxBtn setHidden:NO];
//        
//        
//    }
//    else
//    {
//        [self.bgImageView setImage:[UIImage imageNamed:@"bg_btntect_fuzhuxinxi_ip"]];
//        [self.cheweiImg setHidden:YES];
//        [self.cheweiLabel setHidden:YES];
//        [self.renyuanImg setHidden:YES];
//        [self.renyuanLabel setHidden:YES];
//        [self.shebeiImg setHidden:YES];
//        [self.shebeiLabel setHidden:YES];
//        [self.haodianImg setHidden:YES];
//        [self.haodianLabel setHidden:YES];
//        [self.cheweiNumLabel setHidden:YES];
//        [self.renyuanNumLabel setHidden:YES];
//        [self.shebeiNumLabel setHidden:YES];
//        [self.haodianNumLabel setHidden:YES];
//        [self.cheweiNumImg setHidden:YES];
//        [self.renyuanNumImg setHidden:YES];
//        [self.shebeiNumImg setHidden:YES];
//        [self.haodianNumImg setHidden:YES];
//        
//        [self.ssxxBtn setHidden:NO];
//        [self.fzxxBtn setHidden:NO];
//        
//        [self.buleImg1 setHidden:NO];
//        [self.xxxxLabel setHidden:NO];
//        [self.xxxxTextLabel setHidden:NO];
//        [self.buleImg2 setHidden:NO];
//        [self.wygsLabel setHidden:NO];
//        [self.wygsTextLabel setHidden:NO];
//        
//    }
    
}




/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end

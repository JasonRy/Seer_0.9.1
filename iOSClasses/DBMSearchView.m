//
//  DBMSearchView.m
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/23.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import "DBMSearchView.h"
#import "UIColor+Hex.h"
#import "JKBlankTool.h"
#import "NDHudView.h"


@implementation DBMSearchView
{
    //数据源
    CGRect backViewFrame;
    
    UITextField *projectTF;
    
}



-(instancetype)initSearchViewWithFrame:(CGRect)frame data:(NSArray *)dataArray
{
    if (self = [super init]) {
        
        [self setFrame:frame];
        
        [self setUserInteractionEnabled:YES];
        
        backViewFrame= frame;
        
        [self createUI];
    }
    return self;
}



-(void)createUI
{
    [self setImage:[UIImage imageNamed:@"sousuo_kuang_1"]];
    
    UIImageView *searchBGView = [[UIImageView alloc]initWithFrame:CGRectMake(12, 15, 538.0/2.0, 39)];
    [searchBGView setImage:[UIImage imageNamed:@"ssk"]];
    [self addSubview:searchBGView];
    [searchBGView setUserInteractionEnabled:YES];
    
    
    UIImageView *searchLineView = [[UIImageView alloc]initWithFrame:CGRectMake(214, 20, 1, 30)];
    [searchLineView setImage:[UIImage imageNamed:@"seard_xian_black"]];
    [self addSubview:searchLineView];
    
    
    projectTF = [[UITextField alloc]initWithFrame:CGRectMake(15, 10, 370.0/2.0, 18)];
    projectTF.placeholder = @"输入查询项目名";
    [projectTF setBorderStyle:UITextBorderStyleNone];
    
    [projectTF setTextColor:[UIColor whiteColor]];
    [projectTF setValue:[UIColor colorWithHexString:@"747475"] forKeyPath:@"_placeholderLabel.textColor"];
    [searchBGView addSubview:projectTF];
    
    
    
//    27 × 30
    
    projectTF.delegate = self;
    
    UIButton *searchBtn = [[UIButton alloc]initWithFrame:CGRectMake(backViewFrame.size.width-18-30-10-10, 7, 25, 26)];
    [searchBtn setBackgroundImage:[UIImage imageNamed:@"icon_sousuo"] forState:UIControlStateNormal];
    [searchBtn addTarget:self action:@selector(searchAction) forControlEvents:UIControlEventTouchUpInside];
    
    [searchBGView addSubview:searchBtn];
}



-(void)searchAction
{
    NSLog(@"searchAction");
    
    [projectTF resignFirstResponder];
    
//    [NDHudView showText:@"暂未开放" animated:YES configParameter:^(NDHudView *config) {
//        
//    } duration:1.0 inView:self];
    
    
    if ([JKBlankTool isBlankString:projectTF.text] ) {
        
        return;
    }
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMSearchView:)]) {
        [_theDelegate DBMSearchView:projectTF.text];
    }
}


- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    [textField setText:@""];
}

- (void)textFieldDidEndEditing:(UITextField *)textField
{
    [textField resignFirstResponder];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [textField resignFirstResponder];
    return YES;
}

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
     [projectTF resignFirstResponder];
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end

//
//  DBMProjectView.m
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/19.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import "DBMProjectView.h"
#import "UIColor+Hex.h"

#define DBMProjectSelectColor [UIColor colorWithHexString:@"5d9cec"]
#define DBMProjectNormalColor [UIColor colorWithHexString:@"868788"]


@implementation DBMProjectView
{
    //数据源
    CGRect backViewFrame;
    UIImageView *backView;
    
    UIImageView *projectTitleView;
    
    
//    UIButton *dbm_shangyeBtn;
//    UIButton *dbm_bangonglouBtn;
//    UIButton *dbm_jaiotongBtn;
//    UIButton *dbm_zhanguanBtn;
    
    
    UIImageView *dbm_shangyeIV;
    UIImageView *dbm_bangongIV;
    UIImageView *dbm_jaiotongIV;
    UIImageView *dbm_zhanguanIV;
    
    
    UILabel *dbm_shangyeLB;
    UILabel *dbm_bangongLB;
    UILabel *dbm_jaiotongLB;
    UILabel *dbm_zhanguanLB;
    
    UIImageView *dbm_shangyeLineIV;
    UIImageView *dbm_jaiotongLineIV;
    
    UIImageView *dbm_shangyeShuLineIV;
    UIImageView *dbm_jaiotongShuLineIV;
    
    NSDictionary *project_dict;
    
    
    UILabel *dbm_shangyeTitleLB;
    UILabel *dbm_bangongTitleLB;
    UILabel *dbm_jaiotongTitleLB;
    UILabel *dbm_zhanguanTitleLB;
    
    
    
    //0项目总数、1设备总数、2工单数量
    NSString *indexStr;
    
}


-(instancetype)initProjectViewWithFrame:(CGRect)frame data:(NSDictionary *)dataDict
{
    if (self = [super init]) {
        
        [self setFrame:frame];
        
        backViewFrame= frame;
        
        project_dict = dataDict;
        
        [self createUI];
        
    }
    return self;
}

-(void)createUI
{
    
    backView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, backViewFrame.size.width, backViewFrame.size.height)];
    
    [backView setImage:[UIImage imageNamed:@"dbm_project_all_kuang_1"]];
    [backView setUserInteractionEnabled:YES];
    
    [self addSubview:backView];
    
    UILabel *projectNumLabel = [[UILabel alloc]initWithFrame:CGRectMake(23, 13, 95, 21)];
    [projectNumLabel setTextColor:[UIColor whiteColor]];
    [projectNumLabel setFont:[UIFont boldSystemFontOfSize:21]];
    [projectNumLabel setText:@"项目总数"];
    [backView addSubview:projectNumLabel];
    
    
    
    UILabel *projectNumTextLabel = [[UILabel alloc]initWithFrame:CGRectMake(220, 11, 50, 25)];
    [projectNumTextLabel setTextColor:[UIColor whiteColor]];
    [projectNumTextLabel setFont:[UIFont boldSystemFontOfSize:25]];
    [projectNumTextLabel setText:[project_dict objectForKey:@"count_all"]];
    [backView addSubview:projectNumTextLabel];
    
    
    
    dbm_shangyeIV = [[UIImageView alloc]initWithFrame:CGRectMake(44, 57, 80, 54)];
    [dbm_shangyeIV setImage:[UIImage imageNamed:@"zg_nav_icon"]];
    [backView addSubview:dbm_shangyeIV];
    [dbm_shangyeIV setUserInteractionEnabled:YES];
    
    [dbm_shangyeIV setCenter:CGPointMake(85, 95)];
    
    
    
//    UIGestureRecognizer *singleTap =[[UIGestureRecognizer alloc]initWithTarget:self action:@selector(dbm_shangyeAction)];
//    
//    [dbm_shangyeIV addGestureRecognizer:singleTap];
    
    
    UIButton *dbm_shangyeBtn = [[UIButton alloc]initWithFrame:CGRectMake(44, 57, 80, 54)];
    [dbm_shangyeBtn setBackgroundColor:[UIColor clearColor]];
    
    [dbm_shangyeBtn setCenter:CGPointMake(85, 95)];
    
    [dbm_shangyeBtn addTarget:self action:@selector(dbm_shangyeAction) forControlEvents:UIControlEventTouchUpInside];
    [backView addSubview:dbm_shangyeBtn];
    
    
    dbm_shangyeLB = [[UILabel alloc]initWithFrame:CGRectMake(44, 57+54+15,80 , 16.5)];
    [dbm_shangyeLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_shangyeLB setText:[project_dict objectForKey:@"count_1"]];
    [dbm_shangyeLB setFont:[UIFont systemFontOfSize:16.5f]];
    [dbm_shangyeLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    [dbm_shangyeLB setCenter:CGPointMake(85, 133)];
    
    [backView addSubview:dbm_shangyeLB];
    
    [dbm_shangyeLB setUserInteractionEnabled:YES];
    dbm_shangyeTitleLB = [[UILabel alloc]initWithFrame:CGRectMake(44, 57+54+15 + 16.6 + 6,80 , 13)];
    [dbm_shangyeTitleLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_shangyeTitleLB setText:@"场馆/园区"];
    
    [dbm_shangyeTitleLB setFont:[UIFont systemFontOfSize:13.0f]];
    [dbm_shangyeTitleLB setTextColor:[UIColor colorWithHexString:@"626364"]];
    [backView addSubview:dbm_shangyeTitleLB];
    
    [dbm_shangyeTitleLB setCenter:CGPointMake(85, 153)];
    
    
    dbm_bangongIV = [[UIImageView alloc]initWithFrame:CGRectMake(44+80+49, 57, 80, 54)];
    [dbm_bangongIV setImage:[UIImage imageNamed:@"sy_nav_icon"]];
    [backView addSubview:dbm_bangongIV];
    
    [dbm_bangongIV setCenter:CGPointMake(backViewFrame.size.width-81, 95)];
    
    
    dbm_bangongLB = [[UILabel alloc]initWithFrame:CGRectMake(44+80+49, 57+54+15 ,80 , 16.5)];
    [dbm_bangongLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_bangongLB setText:[project_dict objectForKey:@"count_2"]];
    [dbm_bangongLB setFont:[UIFont systemFontOfSize:16.5f]];
    [dbm_bangongLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    [backView addSubview:dbm_bangongLB];
    [dbm_bangongLB setCenter:CGPointMake(backViewFrame.size.width-81, 135)];
    
    
    UIButton *dbm_bangongBtn = [[UIButton alloc]initWithFrame:CGRectMake(44+80+49, 57, 80, 54)];
    [dbm_bangongBtn setBackgroundColor:[UIColor clearColor]];
    
    [dbm_bangongBtn addTarget:self action:@selector(dbm_bangongAction) forControlEvents:UIControlEventTouchUpInside];
    [backView addSubview:dbm_bangongBtn];
    
    
    dbm_bangongTitleLB = [[UILabel alloc]initWithFrame:CGRectMake(44+80+49, 57+54+15 + 16.6 + 6 ,80 , 13)];
    [dbm_bangongTitleLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_bangongTitleLB setText:@"商办"];
    [dbm_bangongTitleLB setFont:[UIFont systemFontOfSize:13.0f]];
    [dbm_bangongTitleLB setTextColor:[UIColor colorWithHexString:@"626364"]];
    [backView addSubview:dbm_bangongTitleLB];
    
    [dbm_bangongTitleLB setCenter:CGPointMake(backViewFrame.size.width-81, 154)];
    
    float height_F = 160;
    
    
    dbm_jaiotongIV = [[UIImageView alloc]initWithFrame:CGRectMake(44, height_F+13, 80, 54)];
    [dbm_jaiotongIV setImage:[UIImage imageNamed:@"jtsn_nav_icon"]];
    [backView addSubview:dbm_jaiotongIV];
    
    [dbm_jaiotongIV setCenter:CGPointMake(83, 207)];
    
    
    UIButton *dbm_jaiotongBtn = [[UIButton alloc]initWithFrame:CGRectMake(44, height_F+13, 80, 54)];
    [dbm_jaiotongBtn setBackgroundColor:[UIColor clearColor]];
  
     [dbm_jaiotongBtn setCenter:CGPointMake(83, 207)];
    
    
    [dbm_jaiotongBtn addTarget:self action:@selector(dbm_jaiotongAction) forControlEvents:UIControlEventTouchUpInside];
    [backView addSubview:dbm_jaiotongBtn];
    
    
    
    dbm_jaiotongLB = [[UILabel alloc]initWithFrame:CGRectMake(44, height_F+13+54+15,80 , 16.5)];
    [dbm_jaiotongLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_jaiotongLB setText:[project_dict objectForKey:@"count_3"]];
    [dbm_jaiotongLB setFont:[UIFont systemFontOfSize:16.5f]];
    [dbm_jaiotongLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    [backView addSubview:dbm_jaiotongLB];
    
    [dbm_jaiotongLB setCenter:CGPointMake(83, 243)];
    
    dbm_jaiotongTitleLB = [[UILabel alloc]initWithFrame:CGRectMake(44, height_F+13+54+15 + 16.6 + 6,80 , 13)];
    [dbm_jaiotongTitleLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_jaiotongTitleLB setText:@"交通枢纽"];
    [dbm_jaiotongTitleLB setFont:[UIFont systemFontOfSize:13.0f]];
    [dbm_jaiotongTitleLB setTextColor:[UIColor colorWithHexString:@"626364"]];
    [backView addSubview:dbm_jaiotongTitleLB];
    [dbm_jaiotongTitleLB setCenter:CGPointMake(83, 261)];
    
    dbm_zhanguanIV = [[UIImageView alloc]initWithFrame:CGRectMake(44+80+49, height_F+13, 80, 54)];
    [dbm_zhanguanIV setImage:[UIImage imageNamed:@"icon_zg_sel"]];
    [backView addSubview:dbm_zhanguanIV];
    
    [dbm_zhanguanIV setCenter:CGPointMake(backViewFrame.size.width - 83, 208)];
    
    
    UIButton *dbm_zhanguanBtn = [[UIButton alloc]initWithFrame:CGRectMake(44+80+49, height_F+13, 80, 54)];
    [dbm_zhanguanBtn setBackgroundColor:[UIColor clearColor]];
    
    
    [dbm_zhanguanBtn addTarget:self action:@selector(dbm_zhanguanAction) forControlEvents:UIControlEventTouchUpInside];
    [backView addSubview:dbm_zhanguanBtn];
     [dbm_zhanguanBtn setCenter:CGPointMake(backViewFrame.size.width - 83, 208)];
    
    
    dbm_zhanguanLB = [[UILabel alloc]initWithFrame:CGRectMake(44+80+49, height_F+13+54+15 ,80 , 16.5)];
    [dbm_zhanguanLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_zhanguanLB setText:[project_dict objectForKey:@"count_4"]];
    [dbm_zhanguanLB setFont:[UIFont systemFontOfSize:16.5f]];
    [dbm_zhanguanLB setTextColor:[UIColor colorWithHexString:@"5d9cec"]];
    [backView addSubview:dbm_zhanguanLB];
     [dbm_zhanguanLB setCenter:CGPointMake(backViewFrame.size.width - 83, 244)];
    
    dbm_zhanguanTitleLB = [[UILabel alloc]initWithFrame:CGRectMake(44+80+49, height_F+13+54+15 + 16.6 + 6 ,80 , 13)];
    [dbm_zhanguanTitleLB setTextAlignment:NSTextAlignmentCenter];
    [dbm_zhanguanTitleLB setText:@"IFM"];
    [dbm_zhanguanTitleLB setFont:[UIFont systemFontOfSize:13.0f]];
    [dbm_zhanguanTitleLB setTextColor:[UIColor colorWithHexString:@"626364"]];
    [backView addSubview:dbm_zhanguanTitleLB];
    [dbm_zhanguanTitleLB setCenter:CGPointMake(backViewFrame.size.width - 83, 261)];
    
//    [dbm_bangongIV setImage:[UIImage imageNamed:@"icon_bgl_nor"]];
//    [dbm_shangyeIV setImage:[UIImage imageNamed:@"icon_shangye_nor"]];
//    [dbm_jaiotongIV setImage:[UIImage imageNamed:@"icon_jtcn_nor"]];
    
    [dbm_zhanguanIV setImage:[UIImage imageNamed:@"bgl_nav_icon"]];
    
    
    [dbm_shangyeLB setTextColor:DBMProjectNormalColor];
    [dbm_bangongLB setTextColor:DBMProjectNormalColor];
    [dbm_jaiotongLB setTextColor:DBMProjectNormalColor];
    [dbm_zhanguanLB setTextColor:DBMProjectNormalColor];
    
    
    
    
//    projectTitleView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, backViewFrame.size.width, 45)];
    
    
    UIImageView *hengxianView = [[UIImageView alloc]initWithFrame:CGRectMake(0, backViewFrame.size.height - 1.0, backViewFrame.size.width, 1.0)];
    
    [hengxianView setImage:[UIImage imageNamed:@"fsefgfg"]];
    
    [hengxianView setUserInteractionEnabled:YES];
    
    [self addSubview:hengxianView];
    
    
    
}




-(void)dbm_shangyeAction
{
    indexStr = @"0";
    
    NSLog(@"场馆/园区");
    
    
    
    [dbm_shangyeIV setImage:[UIImage imageNamed:@"zg_sel"]];
    [dbm_shangyeLB setTextColor:DBMProjectSelectColor];
    [dbm_shangyeTitleLB setTextColor:DBMProjectSelectColor];
    
    
    [dbm_bangongIV setImage:[UIImage imageNamed:@"sy_nor"]];
    [dbm_bangongLB setTextColor:DBMProjectNormalColor];
    [dbm_bangongTitleLB setTextColor:DBMProjectNormalColor];
    
    
    [dbm_jaiotongIV setImage:[UIImage imageNamed:@"jtsn_nor"]];
    [dbm_jaiotongLB setTextColor:DBMProjectNormalColor];
    [dbm_jaiotongTitleLB setTextColor:DBMProjectNormalColor];
    
    [dbm_zhanguanIV setImage:[UIImage imageNamed:@"bgl_nor"]];
    [dbm_zhanguanLB setTextColor:DBMProjectNormalColor];
    [dbm_zhanguanTitleLB setTextColor:DBMProjectNormalColor];
    
    
    
//    icon_shangye_djh
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMProjectViewSelected:)]) {
        [_theDelegate DBMProjectViewSelected:indexStr];
    }
    
    
//    DBMProjectSelectColor
    
}


-(void)dbm_bangongAction
{
    indexStr = @"1";
    NSLog(@"dbm_bangongAction");
    
    [dbm_shangyeIV setImage:[UIImage imageNamed:@"zg_nor"]];
    [dbm_shangyeLB setTextColor:DBMProjectNormalColor];
    
    [dbm_bangongIV setImage:[UIImage imageNamed:@"sy_sel"]];
    [dbm_bangongLB setTextColor:DBMProjectSelectColor];
    
    [dbm_jaiotongIV setImage:[UIImage imageNamed:@"jtsn_nor"]];
    [dbm_jaiotongLB setTextColor:DBMProjectNormalColor];
    
    [dbm_zhanguanIV setImage:[UIImage imageNamed:@"bgl_nor"]];
    [dbm_zhanguanLB setTextColor:DBMProjectNormalColor];
    
    
    [dbm_shangyeTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_bangongTitleLB setTextColor:DBMProjectSelectColor];
    [dbm_jaiotongTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_zhanguanTitleLB setTextColor:DBMProjectNormalColor];
    
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMProjectViewSelected:)]) {
        [_theDelegate DBMProjectViewSelected:indexStr];
    }
    
    
}


-(void)dbm_jaiotongAction
{
    indexStr = @"2";
    
    NSLog(@"dbm_jaiotongAction");
    
    [dbm_shangyeIV setImage:[UIImage imageNamed:@"zg_nor"]];
    [dbm_shangyeLB setTextColor:DBMProjectNormalColor];
    
    [dbm_bangongIV setImage:[UIImage imageNamed:@"sy_nor"]];
    [dbm_bangongLB setTextColor:DBMProjectNormalColor];
    
    [dbm_jaiotongIV setImage:[UIImage imageNamed:@"jtsn_sel"]];
    [dbm_jaiotongLB setTextColor:DBMProjectSelectColor];
    
    [dbm_zhanguanIV setImage:[UIImage imageNamed:@"bgl_nor"]];
    [dbm_zhanguanLB setTextColor:DBMProjectNormalColor];
    
    
    [dbm_shangyeTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_bangongTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_jaiotongTitleLB setTextColor:DBMProjectSelectColor];
    [dbm_zhanguanTitleLB setTextColor:DBMProjectNormalColor];
    
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMProjectViewSelected:)]) {
        [_theDelegate DBMProjectViewSelected:indexStr];
    }
}


-(void)dbm_zhanguanAction
{
    
    indexStr = @"3";
    
    NSLog(@"dbm_zhanguanAction");
    
    [dbm_shangyeIV setImage:[UIImage imageNamed:@"zg_nor"]];
    [dbm_shangyeLB setTextColor:DBMProjectNormalColor];
    
    [dbm_bangongIV setImage:[UIImage imageNamed:@"sy_nor"]];
    [dbm_bangongLB setTextColor:DBMProjectNormalColor];
    
    [dbm_jaiotongIV setImage:[UIImage imageNamed:@"jtsn_nor"]];
    [dbm_jaiotongLB setTextColor:DBMProjectNormalColor];
    
    [dbm_zhanguanIV setImage:[UIImage imageNamed:@"bgl_sel"]];
    [dbm_zhanguanLB setTextColor:DBMProjectSelectColor];
    
    
    [dbm_shangyeTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_bangongTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_jaiotongTitleLB setTextColor:DBMProjectNormalColor];
    [dbm_zhanguanTitleLB setTextColor:DBMProjectSelectColor];
    
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMProjectViewSelected:)]) {
        [_theDelegate DBMProjectViewSelected:indexStr];
    }
    
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end

//
//  DBMProjectTV.m
//  DBMViews
//
//  Created by 陶晨麟 on 2017/5/22.
//  Copyright © 2017年 ACE. All rights reserved.
//

#import "DBMProjectTV.h"
#import "UIColor+Hex.h"
#import "DBMProjectCell.h"
#import "JKBlankTool.h"


@implementation DBMProjectTV
{
    //数据源
    CGRect backViewFrame;
    //
    UITableView * equipmenTV;
    NSMutableArray *projectArray;
}



-(instancetype)initProjectTVWithFrame:(CGRect)frame data:(NSArray *)dataArray
{
    if (self = [super init]) {
        
        [self setFrame:frame];
        
        [self setUserInteractionEnabled:YES];
        
        backViewFrame= frame;
        
        projectArray = [NSMutableArray array];
        
        projectArray = [dataArray mutableCopy];
        
        [self createUI];
    }
    return self;
}



//
-(void)createUI
{
    
    UIImageView *equipmentImgView = [[UIImageView alloc]init];
    
    [equipmentImgView setFrame:CGRectMake(0, 0 , backViewFrame.size.width, 54)];
    
    [equipmentImgView setImage:[UIImage imageNamed:@"fead_head_xmmc"]];
    [equipmentImgView setUserInteractionEnabled:YES];
    
    
    
    UILabel *tableTitleLabel = [[UILabel alloc]init];
    [tableTitleLabel setFrame:CGRectMake(20, 20, 150, 20)];
    [tableTitleLabel setText:@"项目名称"];
    [tableTitleLabel setTextColor:[UIColor whiteColor]];
    [tableTitleLabel setFont:[UIFont boldSystemFontOfSize:20.0]];
    [equipmentImgView addSubview:tableTitleLabel];
    
    
    UILabel *tableTitleSortLabel = [[UILabel alloc]init];
    [tableTitleSortLabel setFrame:CGRectMake(155, 20, 69, 18)];
    [tableTitleSortLabel setText:@"(单位：个)"];
    [tableTitleSortLabel setTextColor:[UIColor colorWithHexString:@"c0c0c0"]];
    [tableTitleSortLabel setFont:[UIFont systemFontOfSize:14.0]];
//    [equipmentImgView addSubview:tableTitleSortLabel];
    
    
    [self addSubview:equipmentImgView];
    
    
    equipmenTV =[[UITableView alloc]initWithFrame:CGRectMake(0, 0, backViewFrame.size.width, backViewFrame.size.height-54) style:UITableViewStylePlain];
    
    
    UIImageView *imageView=[[UIImageView alloc]initWithImage:[UIImage imageNamed:@"fead_kuang_xmmc"]];
    [imageView setUserInteractionEnabled:YES];
    [imageView setFrame:CGRectMake(0, 54, backViewFrame.size.width, backViewFrame.size.height-54)];
    [self addSubview:imageView];
    
    
//    [imageView setUserInteractionEnabled:YES];
//    
//    [equipmenTV setBackgroundView:imageView];
    
    [equipmenTV registerNib:[UINib nibWithNibName:@"DBMProjectCell" bundle:nil] forCellReuseIdentifier:@"DBMProjectCell"];
    
    [equipmenTV setBackgroundColor:[UIColor clearColor]];
    
    
    equipmenTV.delegate = self;
    
    equipmenTV.dataSource = self;
    
    equipmenTV.separatorStyle = UITableViewCellSeparatorStyleNone;
    
    [imageView addSubview:equipmenTV];
    
    
//    [equipmenTV setTableHeaderView:equipmentImgView];
    
}

-(void)reloadTVDataWithData:(NSArray *)dataArray
{
    if (![JKBlankTool isBlankArray:projectArray]) {
        [projectArray removeAllObjects];
    }
    
    projectArray = [dataArray mutableCopy];
    [equipmenTV reloadData];
}


-(void)reloadTVWithModel:(ProjectModel *)model
{
    int tagetTag = -1;
    
    for (int i = 0; i < projectArray.count; i++) {
        
        ProjectModel * p_model = [projectArray objectAtIndex:i];
        
        if ([p_model.short_name isEqualToString: model.short_name]) {
            tagetTag = i;
            break;
        }
    }
    
    
    if (tagetTag >=0) {
        
        //默认选中行，放在 reloadData 后
        NSIndexPath *ip=[NSIndexPath indexPathForRow:tagetTag inSection:0];
        [equipmenTV selectRowAtIndexPath:ip animated:YES scrollPosition:UITableViewScrollPositionBottom];
        
        [equipmenTV scrollToRowAtIndexPath:ip
                          atScrollPosition:UITableViewScrollPositionTop animated:YES];
    }
    
}

//Section个数
- (NSInteger) numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

//Rows个数
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return projectArray.count;
}

//cell的height
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 40;
}

//定制cell
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    DBMProjectCell *cell = [tableView dequeueReusableCellWithIdentifier:@"DBMProjectCell"];
    
    ProjectModel *p_model = projectArray[indexPath.row];
    
    cell.projectNameLabel.text =p_model.short_name;
    
    cell.projectNumLabel.text = p_model.project_no;
    
//    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    
    UIImageView *selImageview = [[UIImageView alloc] initWithImage:[UIImage  imageNamed:@"blue_sel"]];
    
    [selImageview setFrame:cell.frame];
    
    cell.selectedBackgroundView  = selImageview;
    
    return cell;
}


//选中
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"didSelectRowAtIndexPath");
    
    ProjectModel *p_model = projectArray[indexPath.row];
    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMProjectTVSelected:)]) {
        [_theDelegate DBMProjectTVSelected:p_model];
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

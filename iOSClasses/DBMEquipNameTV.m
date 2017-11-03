//
//  DBMEquipNameTV.m
//  Unity-iPhone
//
//  Created by 陶晨麟 on 2017/5/24.
//
//

#import "DBMEquipNameTV.h"

#import "DBMProjectCell.h"
#import "UIColor+Hex.h"
#import "JKBlankTool.h"
#import "EquipNameModel.h"
#import "EquipNameCell.h"


@implementation DBMEquipNameTV
{
    //数据源
    CGRect backViewFrame;
    //
    UITableView * equipmenTV;
    
    NSMutableArray *equipNameArray;
    
}

-(instancetype)initEquipNameTVWithFrame:(CGRect)frame data:(NSArray *)dataArray
{
    if (self = [super init]) {
        
        [self setFrame:frame];
        
        [self setUserInteractionEnabled:YES];
        
        backViewFrame= frame;
        
        equipNameArray = [dataArray mutableCopy];
        
        [self createUI];
    }
    return self;
}


//
-(void)createUI
{
    
    UIImageView *equipmentImgView = [[UIImageView alloc]init];
    
    [equipmentImgView setFrame:CGRectMake(0, 0 , backViewFrame.size.width, 54)];
    
    [equipmentImgView setImage:[UIImage imageNamed:@"fead_head_sbmc"]];
    [equipmentImgView setUserInteractionEnabled:YES];
    
    
    
    UILabel *tableTitleLabel = [[UILabel alloc]init];
    [tableTitleLabel setFrame:CGRectMake(20, 20, 150, 20)];
    [tableTitleLabel setText:@"设备名称"];
    [tableTitleLabel setTextColor:[UIColor whiteColor]];
    [tableTitleLabel setFont:[UIFont boldSystemFontOfSize:20.0]];
    [equipmentImgView addSubview:tableTitleLabel];
    
    
    UILabel *tableTitleSortLabel = [[UILabel alloc]init];
    [tableTitleSortLabel setFrame:CGRectMake(155, 20, 69, 18)];
    [tableTitleSortLabel setText:@"按编号列"];
    [tableTitleSortLabel setTextColor:[UIColor colorWithHexString:@"c0c0c0"]];
    [tableTitleSortLabel setFont:[UIFont systemFontOfSize:14.0]];
    [equipmentImgView addSubview:tableTitleSortLabel];
    
    
    [self addSubview:equipmentImgView];
    
    
    equipmenTV =[[UITableView alloc]initWithFrame:CGRectMake(0, 0, backViewFrame.size.width, backViewFrame.size.height-54) style:UITableViewStylePlain];
    
    
    UIImageView *imageView=[[UIImageView alloc]initWithImage:[UIImage imageNamed:@"fead_kuang_sbmc"]];
    [imageView setUserInteractionEnabled:YES];
    [imageView setFrame:CGRectMake(0, 54, backViewFrame.size.width, backViewFrame.size.height-54)];
    [self addSubview:imageView];
    
    
    
    [equipmenTV registerNib:[UINib nibWithNibName:@"EquipNameCell" bundle:nil] forCellReuseIdentifier:@"EquipNameCell"];
    
    [equipmenTV setBackgroundColor:[UIColor clearColor]];
    
    
    equipmenTV.delegate = self;
    
    equipmenTV.dataSource = self;
    
    equipmenTV.separatorStyle = UITableViewCellSeparatorStyleNone;
    
    [imageView addSubview:equipmenTV];
    
    
    //    [equipmenTV setTableHeaderView:equipmentImgView];
    
}

-(void)reloadTVDataWithData:(NSArray *)dataArray
{
    if (![JKBlankTool isBlankArray:equipNameArray]) {
        [equipNameArray removeAllObjects];
    }
    
    equipNameArray = [dataArray mutableCopy];
    [equipmenTV reloadData];

}

//Section个数
- (NSInteger) numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

//Rows个数
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return equipNameArray.count;
}

//cell的height
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 40;
}

//定制cell
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    EquipNameModel *model = equipNameArray[indexPath.row];
    
    EquipNameCell *cell = [tableView dequeueReusableCellWithIdentifier:@"EquipNameCell"];
    
    
    cell.equipNumLabel.text = model.device_id;
    
    cell.equipNameLabel.text = model.device_name;
    
    UIImageView *selImageview = [[UIImageView alloc] initWithImage:[UIImage  imageNamed:@"device_img_zuo"]];
    
    [selImageview setFrame:cell.frame];
    
    cell.selectedBackgroundView  = selImageview;
    
    return cell;
}


//选中
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"didSelectRowAtIndexPath");
    
    CGRect rectInTableView = [tableView rectForRowAtIndexPath:indexPath];
    
    CGRect rectInSuperview = [tableView convertRect:rectInTableView toView:[tableView superview]];
    
    NSLog(@"%f,%f,%f,%f",rectInSuperview.origin.x,rectInSuperview.origin.y,rectInSuperview.size.width,rectInSuperview.size.height);
    
    CGRect equipNameImageViewRect; 
    
    equipNameImageViewRect = CGRectMake(backViewFrame.size.width,  rectInSuperview.origin.y + 55 , 28, 27);

    
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMEquipNameTV:)]) {
        [_theDelegate DBMEquipNameTV:(rectInSuperview.origin.y + 55)];
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

//
//  DBMBuildingView.m
//  Unity-iPhone
//
//  Created by 陶晨麟 on 2017/5/25.
//
//

#import "DBMBuildingView.h"

#import "NDHudView.h"


@implementation DBMBuildingView

{
    ProjectModel *projectModel;
    
}

//*project_no：项目编号
//*project_id：项目id
//*project_name：项目编号
//*short_name：项目简称
//*category：项目类别id （1：园区/场馆，2：商办，3：交通枢纽，4：IFM）
//*category_name：项目类别名称
//*device_good：设备正常数
//*device_fault：设备故障数
//*device_offline：设备离线数
//*device_all：设备总数
//*ratio_good：设备正常百分比
//*ratio_fault：设备故障百分比
//*ratio_offline：设备离线百分比
//*level：项目等级（1，2，3，S）
//*floor_area：占地面积
//*building_area：建筑面积
//*charge_area：收费面积
//*manager：经理名称
//*company：公司
//*employee：项目核定人员数（与蓝牙人员数无关）
//*employee_online：当前蓝牙在线人员数
//*address：项目地址
//*coordinate_x：经度
//*coordinate_y：纬度


-(void)configViewWith:(ProjectModel *)model
{
    projectModel = model;
    
//    [self.project_pic setHidden:YES];
    
    [self.project_no setText:model.project_no];
    [self.project_name setText:model.project_name];
    
//    [self.projectStyleImg setHidden:YES];
    
//    [self.project_manger_label ];
    
//    NSMutableAttributedString *str = [[NSMutableAttributedString alloc] initWithString:model.manager];
//    NSRange strRange = {0,[str length]};
//    [str addAttribute:NSUnderlineStyleAttributeName value:[NSNumber numberWithInteger:NSUnderlineStyleSingle] range:strRange];
    
    [self.project_manger setText:model.manager];
    
    
    
    [self.project_address setText:model.address];
    
    [self.project_mianji_Img setHidden:YES];
    
    [self.project_mianji setText:[NSString stringWithFormat:@"面积 %@ ㎡",model.building_area ]];
    
    
    [self.companyName setText:model.company];
    
//    [self.company_logo setHidden:YES];
    
//    [self.shuLineLabel setHidden:YES];
//    [self.HengLineLabel setHidden:YES];
    
    
//    [self.peopleImgView setHidden:NO];
//    [self.equipImgView setHidden:NO];
//    [self.electrilcityImgView setHidden:NO];
    
//    [self.peopleLabel setHidden:NO];
//    [self.equipLabel setHidden:NO];
    
//    [self.equipNumImg setHidden:NO];
//    [self.peopleNumImg setHidden:NO];
//    [self.equipNumBg setHidden:NO];
//    [self.electrilcityNumBg setHidden:NO];
//    [self.electrilcityNumImg setHidden:NO];
    
//    [self.electrilcityLabel setHidden:NO];
    
    [self.peopleNumLabel setText:[NSString stringWithFormat:@"%@/%@",model.employee_online,model.employee]];
    
    [self.equipNumLabel setText:[NSString stringWithFormat:@"%@/%@",model.device_fault,model.device_all]];
    
//    if([model.short_name isEqualToString:@"外滩6号"])
//    {
//        [self.ssxxBtn setUserInteractionEnabled:YES];
//    }
//    else
//    {
//       [self.ssxxBtn setUserInteractionEnabled:NO];
//    }
    
//    [self.electrilcityNumLabel setHidden:NO];
    
}

//XIB方式调用这个方法
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
//    _signNum = 0;
    
    self = [super initWithCoder:aDecoder];
    
    if (self) {
        
        
        UITapGestureRecognizer *gesterure = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(ssxxAction)];
        [self.ssxxBtn addGestureRecognizer:gesterure];
        
        UITapGestureRecognizer *gesterure1 = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(jbxxAction)];
        [self.jbxx_btn addGestureRecognizer:gesterure1];
        
        UITapGestureRecognizer *gesterure2 = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(jinru)];
        [self.goinBtn addGestureRecognizer:gesterure2];
        
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
                    [self ssxxAction];
                }
                else if (hitTestView.tag == 20001) {
                    [self jbxxAction];
                }
                
                else if (hitTestView.tag == 20002) {
                    [self jinru];
                }
            }
            return hitTestView;
        }
    }
    return self;
    // }
    return nil;
}


-(void)ssxxAction
{
    NSLog(@"ssxxAction");
    
    
    if(![projectModel.short_name isEqualToString:@"外滩6号"])
    {
        [NDHudView showText:@"该项目暂无实时信息！" animated:YES configParameter:^(NDHudView *config) {
            
        } duration:1.0 inView:self];
        
        
        return;
        
//        [self.ssxxBtn setUserInteractionEnabled:YES];
    }
//    else
//    {
////        [self.ssxxBtn setUserInteractionEnabled:NO];
//    }
    
    
    [UIView animateWithDuration:0.5 animations:^{
        [self.bgView setImage:[UIImage imageNamed:@"ssxx_bg"]];
    }];
    
    
    [self.project_pic setHidden:YES];
    [self.project_no setHidden:YES];
    [self.project_name setHidden:YES];
    [self.projectStyleImg setHidden:YES];
    [self.project_manger_label setHidden:YES];
    [self.project_manger setHidden:YES];
    [self.project_address setHidden:YES];
    [self.project_mianji_Img setHidden:YES];
    [self.project_mianji setHidden:YES];
    [self.companyName setHidden:YES];
    [self.company_logo setHidden:YES];
    [self.shuLineLabel setHidden:YES];
    [self.HengLineLabel setHidden:YES];
    
    
    [self.peopleImgView setHidden:NO];
    [self.equipImgView setHidden:NO];
   
    [self.peopleLabel setHidden:NO];
    [self.equipLabel setHidden:NO];
    [self.equipNumImg setHidden:NO];
    [self.peopleNumImg setHidden:NO];
    [self.equipNumBg setHidden:NO];
   
    
   
    [self.peopleNumLabel setHidden:NO];
    [self.equipNumLabel setHidden:NO];
    
    
    //耗电
    [self.electrilcityImgView setHidden:YES];
    [self.electrilcityNumBg setHidden:YES];
    [self.electrilcityNumImg setHidden:YES];
    [self.electrilcityLabel setHidden:YES];
    [self.electrilcityNumLabel setHidden:YES];

    
    float employee = [projectModel.employee floatValue];
    float employee_online = [projectModel.employee_online floatValue];
    
    float device_all = [projectModel.device_all floatValue];
    float device_fault = [projectModel.device_fault floatValue];
    
    
    [UIView animateWithDuration:0.6 animations:^{
        
        if (employee >0.0 ) {
            [self.peopleNumImg setFrame:CGRectMake(70, 69, 236.0 * (employee_online / employee), 8)];
        }
        else
        {
            [self.peopleNumImg setFrame:CGRectMake(70, 69, 236.0 * 0, 8)];
        }
        
        if (device_all >0.0 ) {
            [self.equipNumImg setFrame:CGRectMake(70, 119, 236.0 * (device_fault / device_all), 8)];
        }
        else
        {
            [self.equipNumImg setFrame:CGRectMake(70, 119, 236.0 * 0, 8)];
        }
        
    }];
    
    
}


-(void)jbxxAction
{
    NSLog(@"jbxxAction");
    
    [UIView animateWithDuration:0.5 animations:^{
        [self.bgView setImage:[UIImage imageNamed:@"jbxx_bg"]];
    }];
    
    [self.project_pic setHidden:NO];
    [self.project_no setHidden:NO];
    [self.project_name setHidden:NO];
    [self.projectStyleImg setHidden:YES];
    [self.project_manger_label setHidden:NO];
    [self.project_manger setHidden:NO];
    [self.project_address setHidden:NO];
    [self.project_mianji_Img setHidden:NO];
    [self.project_mianji setHidden:NO];
    [self.companyName setHidden:NO];
    [self.company_logo setHidden:NO];
    [self.shuLineLabel setHidden:NO];
    [self.HengLineLabel setHidden:NO];
    
    
    
    [self.peopleImgView setHidden:YES];
    [self.equipImgView setHidden:YES];
    [self.electrilcityImgView setHidden:YES];
    [self.peopleLabel setHidden:YES];
    [self.equipLabel setHidden:YES];
    [self.equipNumImg setHidden:YES];
    [self.peopleNumImg setHidden:YES];
    [self.equipNumBg setHidden:YES];
    [self.electrilcityNumBg setHidden:YES];
    [self.electrilcityNumImg setHidden:YES];
    
    [self.electrilcityLabel setHidden:YES];
    [self.peopleNumLabel setHidden:YES];
    [self.equipNumLabel setHidden:YES];
    [self.electrilcityNumLabel setHidden:YES];
    
    
}



////基本信息界面
//
//@property (weak, nonatomic) IBOutlet UIImageView *project_pic;
//
//@property (weak, nonatomic) IBOutlet UILabel *project_no;
//
//@property (weak, nonatomic) IBOutlet UILabel *project_name;
//
//@property (weak, nonatomic) IBOutlet UIImageView *projectStyleImg;
//
//@property (weak, nonatomic) IBOutlet UILabel *project_manger_label;
//
//@property (weak, nonatomic) IBOutlet UILabel *project_manger;
//
//@property (weak, nonatomic) IBOutlet UILabel *project_address;
//
//@property (weak, nonatomic) IBOutlet UIImageView *project_mianji_Img;
//
//@property (weak, nonatomic) IBOutlet UILabel *project_mianji;
//
//@property (weak, nonatomic) IBOutlet UILabel *companyName;
//
//@property (weak, nonatomic) IBOutlet UIImageView *company_logo;
//
//
//
//
////实时信息界面
//
//@property (weak, nonatomic) IBOutlet UIImageView *peopleImgView;
//
//@property (weak, nonatomic) IBOutlet UIImageView *equipImgView;
//
//@property (weak, nonatomic) IBOutlet UIImageView *electrilcityImgView;
//
//@property (weak, nonatomic) IBOutlet UILabel *peopleLabel;
//
//@property (weak, nonatomic) IBOutlet UILabel *electrilcityLabel;
//
//@property (weak, nonatomic) IBOutlet UILabel *equipLabel;
//
//@property (weak, nonatomic) IBOutlet UIImageView *peopleNumBg;
//
//@property (weak, nonatomic) IBOutlet UIImageView *peopleNumImg;
//
//@property (weak, nonatomic) IBOutlet UIImageView *equipNumBg;
//
//@property (weak, nonatomic) IBOutlet UIImageView *equipNumImg;
//
//@property (weak, nonatomic) IBOutlet UIImageView *electrilcityNumBg;
//
//@property (weak, nonatomic) IBOutlet UIImageView *electrilcityNumImg;


-(void)jinru
{
    NSLog(@"点击了进入3D");
    if (_theDelegate && [_theDelegate respondsToSelector:@selector(DBMBuildingView:)]) {
        
        [_theDelegate DBMBuildingView:projectModel.project_id];
        
        
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

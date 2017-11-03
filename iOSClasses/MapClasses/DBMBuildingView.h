//
//  DBMBuildingView.h
//  Unity-iPhone
//
//  Created by 陶晨麟 on 2017/5/25.
//
//

#import <UIKit/UIKit.h>
#import "ProjectModel.h"

@protocol DBMBuildingViewDelegate <NSObject>

- (void)DBMBuildingView:(NSString *)project_id;

@end



@interface DBMBuildingView : UIView

-(void)configViewWith:(ProjectModel *)model;


@property (assign, nonatomic)id<DBMBuildingViewDelegate>theDelegate;

@property (weak, nonatomic) IBOutlet UIImageView *bgView;

@property (weak, nonatomic) IBOutlet UIButton *jbxx_btn;

@property (weak, nonatomic) IBOutlet UIButton *ssxxBtn;

@property (weak, nonatomic) IBOutlet UIButton *goinBtn;

@property (weak, nonatomic) IBOutlet UIImageView *project_style_icon;


//基本信息界面

@property (weak, nonatomic) IBOutlet UIImageView *project_pic;

@property (weak, nonatomic) IBOutlet UILabel *project_no;

@property (weak, nonatomic) IBOutlet UILabel *project_name;

@property (weak, nonatomic) IBOutlet UIImageView *projectStyleImg;

@property (weak, nonatomic) IBOutlet UILabel *project_manger_label;

@property (weak, nonatomic) IBOutlet UILabel *project_manger;

@property (weak, nonatomic) IBOutlet UILabel *project_address;

@property (weak, nonatomic) IBOutlet UIImageView *project_mianji_Img;

@property (weak, nonatomic) IBOutlet UILabel *project_mianji;

@property (weak, nonatomic) IBOutlet UILabel *companyName;

@property (weak, nonatomic) IBOutlet UIImageView *company_logo;

@property (weak, nonatomic) IBOutlet UILabel *HengLineLabel;

@property (weak, nonatomic) IBOutlet UILabel *shuLineLabel;


//实时信息界面

@property (weak, nonatomic) IBOutlet UIImageView *peopleImgView;

@property (weak, nonatomic) IBOutlet UIImageView *equipImgView;

@property (weak, nonatomic) IBOutlet UIImageView *electrilcityImgView;

@property (weak, nonatomic) IBOutlet UILabel *peopleLabel;

@property (weak, nonatomic) IBOutlet UILabel *electrilcityLabel;

@property (weak, nonatomic) IBOutlet UILabel *equipLabel;

@property (weak, nonatomic) IBOutlet UIImageView *peopleNumBg;

@property (weak, nonatomic) IBOutlet UIImageView *peopleNumImg;

@property (weak, nonatomic) IBOutlet UIImageView *equipNumBg;

@property (weak, nonatomic) IBOutlet UIImageView *equipNumImg;

@property (weak, nonatomic) IBOutlet UIImageView *electrilcityNumBg;

@property (weak, nonatomic) IBOutlet UIImageView *electrilcityNumImg;

@property (weak, nonatomic) IBOutlet UILabel *peopleNumLabel;

@property (weak, nonatomic) IBOutlet UILabel *equipNumLabel;

@property (weak, nonatomic) IBOutlet UILabel *electrilcityNumLabel;





@end

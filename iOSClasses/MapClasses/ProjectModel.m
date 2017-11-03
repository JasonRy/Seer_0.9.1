//
//  ProjectModel.m
//  Unity-iPhone
//
//  Created by 陶晨麟 on 17/2/13.
//
//

#import "ProjectModel.h"
#import "JKBlankTool.h"


@implementation ProjectModel


- (void)setValuesForKeysWithDictionary:(NSDictionary<NSString *,id> *)keyedValues
{
    
    
    if (![JKBlankTool isBlankString:keyedValues[@"category_name"]]) {
        _category_name = keyedValues[@"category_name"];
    }
    if (![JKBlankTool isBlankString:[keyedValues[@"power_count"]stringValue]]) {
        _power_count = [NSString stringWithFormat:@"%ld",[keyedValues[@"power_count"]longValue]];
    }
    if (![JKBlankTool isBlankString:[keyedValues[@"device_good"]stringValue]]) {
        _device_good = [NSString stringWithFormat:@"%ld",[keyedValues[@"device_good"]longValue]];
    }

    
    if (![JKBlankTool isBlankString:keyedValues[@"project_name"]]) {
        _project_name = keyedValues[@"project_name"];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"employee"]stringValue]]) {
        _employee = [NSString stringWithFormat:@"%ld",[keyedValues[@"employee"]longValue]];
    }
    if (![JKBlankTool isBlankString:[keyedValues[@"employee_online"]stringValue]]) {
        _employee_online = [NSString stringWithFormat:@"%ld",[keyedValues[@"employee_online"]longValue]];
    }
    if (![JKBlankTool isBlankString:[keyedValues[@"project_id"]stringValue]]) {
        _project_id = [NSString stringWithFormat:@"%ld",[keyedValues[@"project_id"]longValue]];
    }
    if (![JKBlankTool isBlankString:[keyedValues[@"device_offline"]stringValue]]) {
        _device_offline = [NSString stringWithFormat:@"%ld",[keyedValues[@"device_offline"]longValue]];
    }
    
    
    
    if (![JKBlankTool isBlankString:keyedValues[@"client"]]) {
        _client = keyedValues[@"client"];
    }
    if (![JKBlankTool isBlankString:keyedValues[@"company"]]) {
        _company = keyedValues[@"company"];
    }
    if (![JKBlankTool isBlankString:keyedValues[@"department"]]) {
        _department = keyedValues[@"department"];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"ratio_good"]stringValue]]) {
        _ratio_good = [NSString stringWithFormat:@"%ld",[keyedValues[@"ratio_good"]longValue]];
    }
    
    
    
    if (![JKBlankTool isBlankString:keyedValues[@"address"]]) {
        _address = keyedValues[@"address"];
    }
    
    if (![JKBlankTool isBlankString:keyedValues[@"manager"]]) {
        _manager = keyedValues[@"manager"];
    }
    if (![JKBlankTool isBlankString:keyedValues[@"level"]]) {
        _level = keyedValues[@"level"];
    }
    
    
    if (![JKBlankTool isBlankString:[keyedValues[@"coordinate_x"]stringValue]]) {
        _coordinate_x = [NSString stringWithFormat:@"%f",[keyedValues[@"coordinate_x"]doubleValue]];
    }
    
    
    if (![JKBlankTool isBlankString:[keyedValues[@"device_fault"]stringValue]]) {
        _device_fault = [NSString stringWithFormat:@"%ld",[keyedValues[@"device_fault"]longValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"charge_area"]stringValue]]) {
        _charge_area = [NSString stringWithFormat:@"%ld",[keyedValues[@"charge_area"]longValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"coordinate_y"]stringValue]]) {
        _coordinate_y = [NSString stringWithFormat:@"%f",[keyedValues[@"coordinate_y"]doubleValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"power_amount"]stringValue]]) {
        _power_amount = [NSString stringWithFormat:@"%f",[keyedValues[@"power_amount"]doubleValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"floor_area"]stringValue]]) {
        _floor_area = [NSString stringWithFormat:@"%f",[keyedValues[@"floor_area"]doubleValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"building_area"]stringValue]]) {
        _building_area = [NSString stringWithFormat:@"%.1f",[keyedValues[@"building_area"]doubleValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"ratio_fault"]stringValue]]) {
        _ratio_fault = [NSString stringWithFormat:@"%f",[keyedValues[@"ratio_fault"]floatValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"device_all"]stringValue]]) {
        _device_all = [NSString stringWithFormat:@"%ld",[keyedValues[@"device_all"]longValue]];
    }
    
    
    
    if (![JKBlankTool isBlankString:keyedValues[@"project_no"]]) {
        _project_no = keyedValues[@"project_no"];
    }
   
    
    if (![JKBlankTool isBlankString:[keyedValues[@"ratio_offline"]stringValue]]) {
        _ratio_offline = [NSString stringWithFormat:@"%f",[keyedValues[@"ratio_offline"]floatValue]];
    }
    
    if (![JKBlankTool isBlankString:keyedValues[@"short_name"]]) {
        _short_name = keyedValues[@"short_name"];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"category"]stringValue]]) {
        _category = [NSString stringWithFormat:@"%ld",[keyedValues[@"category"]longValue]];
    }
    
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


@end

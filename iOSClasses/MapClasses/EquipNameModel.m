//
//  EquipNameModel.m
//  Unity-iPhone
//
//  Created by 陶晨麟 on 17/2/12.
//
//

#import "EquipNameModel.h"
#import "JKBlankTool.h"


@implementation EquipNameModel

- (void)setValuesForKeysWithDictionary:(NSDictionary<NSString *,id> *)keyedValues
{
    if (![JKBlankTool isBlankString:[keyedValues[@"id"]stringValue]]) {
        _device_id = [NSString stringWithFormat:@"%ld",[keyedValues[@"id"]longValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"efos_id"]stringValue]]) {
        _efos_id = [NSString stringWithFormat:@"%ld",[keyedValues[@"efos_id"]longValue]];
    }
    
    
    if (![JKBlankTool isBlankString:keyedValues[@"category_name"]]) {
        _category_name = keyedValues[@"category_name"];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"power_amount"]stringValue]]) {
        _power_amount = [NSString stringWithFormat:@"%ld",[keyedValues[@"power_amount"]longValue]];
    }
    
    if (![JKBlankTool isBlankString:keyedValues[@"project_name"]]) {
        _project_name = keyedValues[@"project_name"];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"valid"]stringValue]]) {
        _valid = [NSString stringWithFormat:@"%ld",[keyedValues[@"valid"]longValue]];
    }
    
    
    if (![JKBlankTool isBlankString:keyedValues[@"floor_name"]]) {
        _floor_name = keyedValues[@"floor_name"];
    }
    
    if (![JKBlankTool isBlankString:keyedValues[@"room_name"]]) {
        _room_name = keyedValues[@"room_name"];
    }
    
    if (![JKBlankTool isBlankString:keyedValues[@"device_name"]]) {
        _device_name = keyedValues[@"device_name"];
    }
    
    
    
    if (![JKBlankTool isBlankString:[keyedValues[@"project_id"]stringValue]]) {
        _project_id = [NSString stringWithFormat:@"%ld",[keyedValues[@"project_id"]longValue]];
    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"power_device"]stringValue]]) {
        _power_device = [NSString stringWithFormat:@"%ld",[keyedValues[@"power_device"]longValue]];
    }
    
    
//    if (![JKBlankTool isBlankString:keyedValues[@"category"]]) {
        if (![JKBlankTool isBlankString:[keyedValues[@"category"]stringValue]]) {
            _category = [NSString stringWithFormat:@"%ld",[keyedValues[@"category"]longValue]];
        }
//    }
    
    if (![JKBlankTool isBlankString:[keyedValues[@"status"]stringValue]]) {
        _status = [NSString stringWithFormat:@"%ld",[keyedValues[@"status"]longValue]];
    }

}


@end

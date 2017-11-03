//
//  BuildingModel.h
//  Unity-iPhone
//
//  Created by 陶晨麟 on 17/2/10.
//
//

#import <Foundation/Foundation.h>

@interface BuildingModel : NSObject


@property (assign,nonatomic) double latitude;

@property (assign,nonatomic) double longitude;

@property (retain,nonatomic) NSString *buildingName;

@property (retain,nonatomic) NSString *buildingStyle;

@property (assign,nonatomic) long project_id;

@property (assign,nonatomic) long category;

@end

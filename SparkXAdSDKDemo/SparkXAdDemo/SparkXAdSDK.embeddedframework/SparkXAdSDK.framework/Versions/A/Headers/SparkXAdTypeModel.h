//
//  SparkXAdTypeModel.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SparkXAdTypeModel : NSObject

@property (nonatomic ,assign) NSInteger adMasterId;

@property (nonatomic ,assign) NSInteger adTypId;

@property (nonatomic ,copy) NSString * name;

@property (nonatomic ,copy) NSString * adx_slot_id;

@property (nonatomic ,copy) NSString * ad_slot;

@property (nonatomic ,assign) NSInteger show_type;

@property (nonatomic ,copy) NSString * ssp_ad_pid;

@end

NS_ASSUME_NONNULL_END

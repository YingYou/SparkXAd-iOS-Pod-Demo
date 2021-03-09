//
//  SXReportManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/3.
//

#import <Foundation/Foundation.h>
#import "SXBaseSSPModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    SXReportShowType = 100,
    SXReportClickType,
} SXReportEventUrlType;

@interface SXReportManager : NSObject

@property (nonatomic ,strong,nullable) NSArray * reportUrlsShowArra;
@property (nonatomic ,strong,nullable) NSArray * reportUrlsClickArra;

+ (instancetype)defaultManager;

///根据reportType来区分不同的上报数据
- (void)reportUrlsWithType:(SXReportEventUrlType)reportType
                 withModel:(SXBaseSSPModel *)adModel
                __DOWN_X__:(NSString *)__DOWN_X__
                __DOWN_Y__:(NSString *)__DOWN_Y__
                  __UP_X__:(NSString *)__UP_X__
                  __UP_Y__:(NSString *)__UP_Y__
           __MS_EVENT_SEC_:(NSString *)__MS_EVENT_SEC_
         __MS_EVENT_MSEC__:(NSString *)__MS_EVENT_MSEC__ ;

@end

NS_ASSUME_NONNULL_END

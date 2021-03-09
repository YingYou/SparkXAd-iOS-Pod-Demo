//
//  SXError.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger ,SXErrorCode) {
    SXErrorCodeNoData = -1 ,///没有数据
    SXErrorCodeParamsFailure = 400,///请求参数错误
    SXErrorCodeFailure
    
};

@interface SXError : NSError

+ (instancetype)noDataErrorWithUserInfo:(nullable NSDictionary<NSErrorUserInfoKey,id> *)userInfo;

+ (instancetype)paramsErrorWithUserInfo:(nullable NSDictionary<NSErrorUserInfoKey, id> *)userInfo;

@end

NS_ASSUME_NONNULL_END

//
//  SXAdJumpManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/4.
//

#import <Foundation/Foundation.h>
#import "SXBaseSSPModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SXAdJumpManager : NSObject

+ (instancetype)defaultManager;

- (void)sxAdJumpWithClickType:(NSInteger)clickType withAdModel:(SXBaseSSPModel *)adModel;

@end

NS_ASSUME_NONNULL_END

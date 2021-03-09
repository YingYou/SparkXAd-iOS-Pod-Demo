//
//  SXSplashAdFactory.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/18.
//

#import <Foundation/Foundation.h>
#import "SXSplashAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface SXSplashAdFactory : NSObject

/**通过工厂方法创建SXSplashAd*/
+ (SXSplashAd *)createSplashAdWithPlacementId:(NSString *)placementId data:(NSDictionary *)data;

@end

NS_ASSUME_NONNULL_END

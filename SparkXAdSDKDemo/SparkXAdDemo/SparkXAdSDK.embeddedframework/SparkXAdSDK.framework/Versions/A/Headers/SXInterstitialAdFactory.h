//
//  SXInterstitialAdFactory.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import "SXInterstitialAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface SXInterstitialAdFactory : NSObject

/**通过工厂方法创建SXInterstitialAd*/
+ (void)createInterstitialAdWithPlacementId:(NSString *)placementId data:(NSDictionary *)data result:(nonnull void (^)(SXInterstitialAd * _Nullable interititialAd, NSError * _Nullable error))result;

@end

NS_ASSUME_NONNULL_END

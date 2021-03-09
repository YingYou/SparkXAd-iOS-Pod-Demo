//
//  SXBannerAdFactory.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import "SXBannerAdView.h"

NS_ASSUME_NONNULL_BEGIN

@interface SXBannerAdFactory : NSObject

/**通过工厂方法创建JHBannerAdView*/
+ (void)createBannerAdWithPlacementId:(NSString *)placementId data:(NSDictionary *)data frame:(CGRect)frame vc:(UIViewController *)vc  result:(nonnull void (^)(SXBannerAdView * _Nullable bannerAdView, NSError * _Nullable error))result;

@end

NS_ASSUME_NONNULL_END

//
//  SXNativeExpressAdFactory.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/24.
//

#import <Foundation/Foundation.h>
#import "SXNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface SXNativeExpressAdFactory : NSObject

/**通过工厂方法创建SXNativeExpressAd*/
+ (void)createNativeExpressAdWithPlacementId:(NSString *)placementId data:(NSDictionary *)data adSize:(CGSize)size listView:(UIView *)listView curVC:(UIViewController *)curVC result:(void(^)(SXNativeExpressAd * __nullable nativeExpressAd,NSError * __nullable error))result;


@end

NS_ASSUME_NONNULL_END

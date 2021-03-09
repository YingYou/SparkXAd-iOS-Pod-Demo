//
//  SparkXAdApi.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SparkXAdApi : NSObject

///init SparkX Ad SDK
+ (void)initWithSparkXAd:(NSString  *)appId;

///Returns the version of the SDK
+ (NSString *)sdkVersion;

/**
 User's consent for advertiser tracking.

 The setter API only works in iOS14 or above and won't take effect in iOS13 or below.
 */
+ (void)setAdvertiserTrackingEnabled:(BOOL)advertiserTrackingEnabled;

///Adds a test ad
+ (void)addTest:(BOOL)test;

@end

NS_ASSUME_NONNULL_END

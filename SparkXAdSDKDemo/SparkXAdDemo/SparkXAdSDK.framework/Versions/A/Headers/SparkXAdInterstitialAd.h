//
//  SparkXAdInterstitialAd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/4.
//

#import <Foundation/Foundation.h>
#import "SXAdConst.h"

NS_ASSUME_NONNULL_BEGIN

@class SparkXAdInterstitialAd;

@protocol SparkXAdInterstitialAdDelegate <NSObject>

@optional

/// Tells the delegate an ad request succeeded.
- (void)interstitialDidReceiveAd:(SparkXAdInterstitialAd *)interstitialAd;

/// Tells the delegate an ad request failed.
- (void)didFailToReceiveAdWithError:(SparkXAdInterstitialAd *)interstitialAd error:(NSError *)error;

/// Tells the delegate that an interstitial did Exposed.
- (void)interstitialAdDidExposed:(SparkXAdInterstitialAd *)interstitialAd;

- (void)interstitialAdDidClose:(SparkXAdInterstitialAd *)interstitialAd;

- (void)interstitialAdDidClick:(SparkXAdInterstitialAd *)interstitialAd;

@end

@interface SparkXAdInterstitialAd : NSObject

@property (nonatomic, weak) id <SparkXAdInterstitialAdDelegate> delegate;

//+ (instancetype)instance;
//
///**
// Display interstitial ad.
// @param rootViewController : root view controller for displaying ad.
//  @param adUnitId  ad adUnitId
// */
//- (void)showAdFromRootViewController:(UIViewController *)rootViewController;

/**
  Returns true if the interstitial ad has been successfully loaded.


 You should check `isAdValid` before trying to show the ad.
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

- (instancetype)initWithPlacementID:(NSString *)placementID adSize:(SXAdSize)adSize;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求
 */
- (void)loadAd;


/**
 *  广告展示方法
 *  详解：[必选]发起展示广告请求, 必须传入用于显示插播广告的UIViewController
 */

- (void)presentAdFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END

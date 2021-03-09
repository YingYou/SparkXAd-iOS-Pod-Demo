//
//  SparkXGoogleAdManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>
#import "SparkXAdManager.h"

NS_ASSUME_NONNULL_BEGIN
@class SparkXNativeExpressAdView;

@interface SparkXGoogleAdManager : NSObject

@property (nonatomic, strong ,readonly) SparkXNativeExpressAdView *nativeContainerView;

+ (instancetype)defaultManager;

+ (void)sdkVersion;

#pragma mark------ show banner
- (void)showBannerAdInView:(UIView *)view
                        vc:(UIViewController *)vc
                       pid:(NSString *)pid
                    adSize:(CGSize)adSize
             statusHandler:(SXAdLifeStatusHandler)statusHandler;

- (void)removeBannerAdInView;

#pragma mark---reward
- (void)loadRewardVideoWithStatusHandler:(SXAdLifeStatusHandler)statusHandler
                                   pid:(NSString *)pid;

- (void)showRewardVideoAdInViewController:(UIViewController *)viewController
                            statusHandler:(SXAdLifeStatusHandler)statusHandler;

#pragma mark ----interstitial
- (void)loadInterstitialWithStatusHandler:(SXAdLifeStatusHandler)statusHandler
                                   pid:(NSString *)pid;

- (void)showInterstitialAdInViewController:(UIViewController *)viewController
                             statusHandler:(SXAdLifeStatusHandler)statusHandler;

#pragma mark---native
- (void)showNativeAdInView:(UIView *)view
                        vc:(UIViewController *)vc
                       pid:(NSString *)pid
             statusHandler:(SXAdLifeStatusHandler)statusHandler;

- (void)showNativeWithStatusHandler:(UIViewController *)vc
                                pid:(NSString *)pid
                               adSize:(CGSize)adSize
                      statusHandler:(SXAdLifeStatusHandler)statusHandler;
                     

#pragma mark---splash
- (void)showSplashAdWithBottomView:(UIView *)view
                                vc:(UIViewController*)vc
                            pid:(NSString *)pid
                     statusHandler:(SXAdLifeStatusHandler)statusHandler;

- (void)loadSplashAdWithStatusHandler:(SXAdLifeStatusHandler)statusHandler                                       pid:(NSString *)pid;

- (void)removeSplashAd;

@end

NS_ASSUME_NONNULL_END


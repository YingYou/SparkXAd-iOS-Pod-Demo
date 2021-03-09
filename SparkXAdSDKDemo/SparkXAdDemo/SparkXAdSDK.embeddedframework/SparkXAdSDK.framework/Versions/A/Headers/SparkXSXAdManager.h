//
//  SparkXSXAdManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/19.
//

#import <Foundation/Foundation.h>
#import "SparkXAdManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface SparkXSXAdManager : NSObject

+ (instancetype)defaultManager;

#pragma mark---splash
- (void)showSplashAdWithBottomView:(UIView *)view
                                vc:(UIViewController*)vc
                               pid:(NSString *)pid
                           sxParam:(NSDictionary *)sxParam
                     statusHandler:(SXAdLifeStatusHandler)statusHandler;

#pragma mark ----interstitial
- (void)loadInterstitialWithStatusHandler:(SXAdLifeStatusHandler)statusHandler
                                      pid:(NSString *)pid
                                  sxParam:(NSDictionary *)sxParam;

- (void)showInterstitialAdInViewController:(UIViewController *)viewController
                             statusHandler:(SXAdLifeStatusHandler)statusHandler;


#pragma mark------ show banner
- (void)showBannerAdInView:(UIView *)view
                        vc:(UIViewController *)vc
                       pid:(NSString *)pid
                      adSize:(CGSize)adSize
          autoSwitchInterval:(NSInteger)autoSwitchInterval
                   sxParam:(NSDictionary *)sxParam
             statusHandler:(SXAdLifeStatusHandler)statusHandler;

- (void)removeBannerAdInView;

#pragma mark----native---show

- (void)showNativeWithStatusHandler:(UIViewController *)vc
                                pid:(NSString *)pid
                               adSize:(CGSize)adSize
                            sxParam:(NSDictionary *)sxParam
                      statusHandler:(SXAdLifeStatusHandler)statusHandler;

@end

NS_ASSUME_NONNULL_END

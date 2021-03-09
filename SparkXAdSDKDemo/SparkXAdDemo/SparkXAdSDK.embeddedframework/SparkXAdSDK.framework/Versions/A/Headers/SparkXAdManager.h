//
//  SparkXAdManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>
#import "SparkAdContainerCommonParams.h"
#import "SXNativeExpressAdView.h"
#import <GoogleMobileAds/GoogleMobileAds.h>
#import "FBTemplateView.h"

//40000-49999 错误码范围
NS_ASSUME_NONNULL_BEGIN

#define sparkx_master_google @"google"
#define sparkx_master_facebook @"facebook"
#define sparkx_master_sparkx @"ssp"

///ad master type
typedef NS_ENUM(NSInteger, SXAdsListType) {
    SXGoogleAdType = 2,
    SXFacebookAdType = 3,
    SXSparkXAdType = 1,
    SXUnkownAdType = -1
};

///广告样式类型
typedef NS_ENUM(NSInteger, SXAdCoreType) {
    SXAdCoreUnknownType = 0,
    SXAdCoreBannerType = 1,
    SXAdCoreAdNativeInfoType = 4,
    SXAdCoreAdInterstitialType = 2,
    SXAdCoreAdVideoType = 5,
    SXAdCoreAdFullScreenVideoType = 6,
    SXAdCoreAdSplashType = 3
};

///广告状态
typedef NS_ENUM(NSInteger, SXAdCoreAdStatus) {
    SXAdCoreAdStatusAdPrepare,
    SXAdCoreAdStatusAdDidReceived,
    SXAdCoreAdStatusAdDidExposure,
    SXAdCoreAdStatusAdDidClick,
    SXAdCoreAdStatusAdStartPlaying,
    SXAdCoreAdStatusDidRewardUser,
    SXAdCoreAdStatusDidRewardErrorUser,
    SXAdCoreAdStatusDidError,
    SXAdCoreAdStatusWillLeaveApplication,
    SXAdCoreAdStatusWillEnterSplash,
    SXAdCoreAdStatusWillleaveNative,
    SXAdCoreAdStatusRenderSuccessNative,
    SXAdCoreAdStatusRenderFailureNative,
    SXAdCoreAdStatusWillEnterNative,
    SXAdCoreAdStatusWillleaveBanner,
    SXAdCoreAdStatusWillEnterBanner,
    SXAdCoreAdStatusAdLoadWithTotalError,
    SXAdCoreAdStatusDidPlayEnd,
    SXAdCoreAdStatusDidComplete = 200,
    SXAdCoreAdStatusAdLoadWithError = 201,
    SXAdCoreAdStatusAdDidClose = 300,
    SXAdCoreAdStatusNativeCacheError = 400
};

typedef void(^_Nullable SXAdLifeStatusHandler)(SXAdCoreAdStatus status,NSError * _Nullable error,SparkAdContainerCommonParams *_Nullable commonParams);

typedef void(^_Nullable SXAdMasterStatusHandler)(SXAdsListType type,SXAdCoreAdStatus status);

@interface SparkXAdManager : NSObject

+ (instancetype)defaultManager;

///开始加载广告
+ (void)preloadAdWithCoreType:(SXAdCoreType)coreType
                       adType:(SXAdsListType)adType
                       params:(NSDictionary *)params
                         view:(UIView *_Nullable)view
            lifeStatusHandler:(SXAdLifeStatusHandler)statusHandler;

///显示广告
+ (void)showAdWithCoreType:(SXAdCoreType)coreType
                    adType:(SXAdsListType)adType
                    params:(NSDictionary *)params
                      view:(UIView *_Nullable)view
                        vc:(UIViewController *)vc
         lifeStatusHandler:(SXAdLifeStatusHandler)statusHandler;

///删除横幅广告
+ (void)removeBannerAdWithCoreType:(SXAdCoreType)coreType
                            adType:(SXAdsListType)adType;

///删除开屏广告
+ (void)removeSplashAdWithCoreType:(SXAdCoreType)coreType
                            adType:(SXAdsListType)adType;


+ (SparkAdContainerCommonParams *)packageAdContainerCommonParams:(NSArray<__kindof SXNativeExpressAdView *> *)views;

+ (SparkAdContainerCommonParams *)packageWithGoogleAdContainerCommonParams:(__kindof GADUnifiedNativeAdView *)view ;

+  (SparkAdContainerCommonParams *)packageWithFacebookAdContainerCommonParams:(__kindof FBTemplateView *)view ;

@end

NS_ASSUME_NONNULL_END

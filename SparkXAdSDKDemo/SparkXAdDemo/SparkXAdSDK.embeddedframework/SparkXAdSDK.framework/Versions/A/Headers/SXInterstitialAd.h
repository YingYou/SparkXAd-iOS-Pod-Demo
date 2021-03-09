//
//  SXInterstitialAd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SXInterstitialAd;

@protocol SXInterstitialAdDelegate <NSObject>

@optional

/**
 *  广告预加载成功回调
 *  详解:当接收服务器返回的广告数据成功且预加载后调用该函数
 */
- (void)sx_interstitialSuccessToLoadAd:(SXInterstitialAd *)interstitialAd;

/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)sx_interstitialFailToLoadAd:(SXInterstitialAd *)interstitialAd error:(NSError *)error;

/**
 *  插屏广告将要展示回调
 *  详解: 插屏广告即将展示回调该函数
 */
- (void)sx_interstitialWillPresentScreen:(SXInterstitialAd *)interstitialAd;

/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)sx_interstitialDidPresentScreen:(SXInterstitialAd *)interstitialAd;

/**
 *  插屏广告展示结束回调
 *  详解: 插屏广告展示结束回调该函数
 */
- (void)sx_interstitialDidDismissScreen:(SXInterstitialAd *)interstitialAd;

/**
 *  详解:当点击应用下载或者广告调用系统程序打开时调用
 */
- (void)sx_interstitialApplicationWillEnterBackground:(SXInterstitialAd *)interstitialAd;

/**
 *  插屏广告曝光回调
 */
- (void)sx_interstitialWillExposure:(SXInterstitialAd *)interstitialAd;

/**
 *  插屏广告点击回调
 */
- (void)sx_interstitialClicked:(SXInterstitialAd *)interstitialAd;

/**
 *  点击插屏广告以后即将弹出全屏广告页
 */
- (void)sx_interstitialAdWillPresentFullScreenModal:(SXInterstitialAd *)interstitialAd;

/**
 *  点击插屏广告以后弹出全屏广告页
 */
- (void)sx_interstitialAdDidPresentFullScreenModal:(SXInterstitialAd *)interstitialAd;

/**
 *  全屏广告页将要关闭
 */
- (void)sx_interstitialAdWillDismissFullScreenModal:(SXInterstitialAd *)interstitialAd;

/**
 *  全屏广告页被关闭
 */
- (void)sx_interstitialAdDidDismissFullScreenModal:(SXInterstitialAd *)interstitialAd;

@end

@interface SXInterstitialAd : NSObject

@property (nonatomic ,weak) id <SXInterstitialAdDelegate> delegate;

@property (nonatomic ,strong) NSDictionary * dataDictionary;

/**
 *  广告发起请求方法
 *  详解：[必选]发起拉取广告请求
 */
- (void)loadAd;

/**
 *  广告展示方法
 *  详解：[必选]发起展示广告请求, 必须传入用于显示插播广告的UIViewController
 */
- (void)presentFromRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END

//
//  SXNativeExpressAd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SXNativeExpressAd;
@class SXNativeExpressAdView;

@protocol SXNativeExpressAdDelegete <NSObject>

@optional
/**
 * 拉取原生模板广告成功
 */
- (void)sx_nativeExpressAdSuccessToLoad:(SXNativeExpressAd *)nativeExpressAd views:(NSArray<__kindof SXNativeExpressAdView *> *)views;

/**
 * 拉取原生模板广告失败
 */
- (void)sx_nativeExpressAdFailToLoad:(SXNativeExpressAd *)nativeExpressAd error:(NSError *)error;

/**
 * 原生模板广告渲染成功, 此时的 nativeExpressAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)sx_nativeExpressAdViewRenderSuccess:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告渲染失败
 */
- (void)sx_nativeExpressAdViewRenderFail:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告曝光回调
 */
- (void)sx_nativeExpressAdViewExposure:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告点击回调
 */
- (void)sx_nativeExpressAdViewClicked:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告被关闭
 */
- (void)sx_nativeExpressAdViewClosed:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 点击原生模板广告以后即将弹出全屏广告页
 */
- (void)sx_nativeExpressAdViewWillPresentScreen:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 点击原生模板广告以后弹出全屏广告页
 */
- (void)sx_nativeExpressAdViewDidPresentScreen:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 全屏广告页将要关闭
 */
- (void)sx_nativeExpressAdViewWillDissmissScreen:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 全屏广告页关闭
 */
- (void)sx_nativeExpressAdViewDidDissmissScreen:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 详解:当点击应用下载或者广告调用系统程序打开时调用
 */
- (void)sx_nativeExpressAdViewApplicationWillEnterBackground:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板视频广告 player 播放状态更新回调
 */
- (void)sx_nativeExpressAdView:(SXNativeExpressAdView *)nativeExpressAdView playerStatusChanged:(SXMediaPlayerStatus)status;

/**
 * 原生视频模板详情页 WillPresent 回调
 */
- (void)sx_nativeExpressAdViewWillPresentVideoVC:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生视频模板详情页 DidPresent 回调
 */
- (void)sx_nativeExpressAdViewDidPresentVideoVC:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生视频模板详情页 WillDismiss 回调
 */
- (void)sx_nativeExpressAdViewWillDismissVideoVC:(SXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生视频模板详情页 DidDismiss 回调
 */
- (void)sx_nativeExpressAdViewDidDismissVideoVC:(SXNativeExpressAdView *)nativeExpressAdView;

@end


@interface SXNativeExpressAd : NSObject

@property (nonatomic ,weak) id <SXNativeExpressAdDelegete> delegate;

@property (nonatomic ,assign) CGSize adSize;

@property (nonatomic ,strong) NSDictionary * dataDictionary;

/**
 *  非 WiFi 网络，是否自动播放。默认 NO。loadAd 前设置。
 */

@property (nonatomic, assign) BOOL videoAutoPlayOnWWAN;

/**
 *  自动播放时，是否静音。默认 YES。loadAd 前设置。
 */
@property (nonatomic, assign) BOOL videoMuted;


/**加载广告*/
- (void)loadAd;


@end

NS_ASSUME_NONNULL_END

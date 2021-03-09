//
//  SparkXAdNativeExpressAdManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/4.
//

#import <Foundation/Foundation.h>
#import "SparkXNativeExpressAdView.h"

NS_ASSUME_NONNULL_BEGIN

@class SparkXNativeExpressAd;


@protocol SparkXAdNativeExpressAdDelegate <NSObject>

@optional
/**
 * 拉取原生模板广告成功
 */
- (void)nativeExpressAdSuccessToLoad:(SparkXNativeExpressAd *)nativeExpressAd views:(NSArray<__kindof SparkXNativeExpressAdView *> *)views;


/**
 * 拉取原生模板广告失败
 */
- (void)nativeExpressAdFailToLoad:(SparkXNativeExpressAd *)nativeExpressAd error:(NSError *)error;


/**
 * 原生模板广告渲染成功, 此时的 nativeExpressAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)nativeExpressAdViewRenderSuccess:(SparkXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告渲染失败
 */
- (void)nativeExpressAdViewRenderFail:(SparkXNativeExpressAdView *)nativeExpressAdView;


/**
 * 原生模板广告曝光回调
 */
- (void)nativeExpressAdViewExposure:(SparkXNativeExpressAdView *)nativeExpressAdView;


///click
- (void)nativeExpressAdViewClicked:(SparkXNativeExpressAdView *)nativeExpressAdView;

/**
 * 原生模板广告被关闭
 */
- (void)nativeExpressAdViewClosed:(SparkXNativeExpressAdView *)nativeExpressAdView;

- (void)nativeExpressAdWillLeaveApplication:(SparkXNativeExpressAdView *)nativeExpressAdView;

/// Tells the delegate that the video controller has began or resumed playing a video.
- (void)videoControllerDidPlayVideo:(SparkXNativeExpressAdView *)nativeExpressAdView;

/// Tells the delegate that the video controller has paused video.
- (void)videoControllerDidPauseVideo:(SparkXNativeExpressAdView *)nativeExpressAdView;

/// Tells the delegate that the video controller's video playback has ended.
- (void)videoControllerDidEndVideoPlayback:(SparkXNativeExpressAdView *)nativeExpressAdView;

/// Tells the delegate that the video controller has muted video.
- (void)videoControllerDidMuteVideo:(SparkXNativeExpressAdView *)nativeExpressAdView;

/// Tells the delegate that the video controller has unmuted video.
- (void)videoControllerDidUnmuteVideo:(SparkXNativeExpressAdView *)nativeExpressAdView;

@end


@interface SparkXNativeExpressAd : NSObject

@property (nonatomic, weak) id <SparkXAdNativeExpressAdDelegate> delegate;


@property (nonatomic ,assign) CGSize adSize;

/**
 *  非 WiFi 网络，是否自动播放。默认 NO。loadAd 前设置。
 */

@property (nonatomic, assign) BOOL videoAutoPlayOnWWAN;

/**
 *  自动播放时，是否静音。默认 YES。loadAd 前设置。
 */
@property (nonatomic, assign) BOOL videoMuted;


/**
 *  构造方法
 *  详解：placementId - 广告位 ID
 *       adSize - 广告展示的宽高
 */

- (instancetype)initWithPlacementId:(NSString *)placementId adSize:(CGSize)size;

- (void)loadAd;

@end

NS_ASSUME_NONNULL_END

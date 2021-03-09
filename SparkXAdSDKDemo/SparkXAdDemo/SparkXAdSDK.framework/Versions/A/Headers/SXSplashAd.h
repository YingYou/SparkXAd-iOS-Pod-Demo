//
//  SXSplashAd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SXSplashAd;

@protocol SXSplashAdDelegate <NSObject>

@optional


/**
 *  开屏广告成功展示
 */
- (void)sx_splashAdSuccessPresentScreen:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告素材加载成功
 */
- (void)sx_splashAdDidLoad:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告展示失败
 */
- (void)sx_splashAdFailToPresent:(SXSplashAd * __nullable)splashAd withError:(NSError *)error;

/**
 *  应用进入后台时回调
 *  详解: 当点击下载应用时会调用系统程序打开，应用切换到后台
 */
- (void)sx_splashAdApplicationWillEnterBackground:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告曝光回调
 */
- (void)sx_splashAdExposured:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告点击回调
 */
- (void)sx_splashAdClicked:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告将要关闭回调
 */
- (void)sx_splashAdWillClosed:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)sx_splashAdClosed:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告点击以后即将弹出全屏广告页
 */
- (void)sx_splashAdWillPresentFullScreenModal:(SXSplashAd * __nullable)splashAd;

/**
 *  开屏广告点击以后弹出全屏广告页
 */
- (void)sx_splashAdDidPresentFullScreenModal:(SXSplashAd * __nullable)splashAd;

/**
 *  点击以后全屏广告页将要关闭
 */
- (void)sx_splashAdWillDismissFullScreenModal:(SXSplashAd * __nullable)splashAd;

/**
 *  点击以后全屏广告页已经关闭
 */
- (void)sx_splashAdDidDismissFullScreenModal:(SXSplashAd * __nullable)splashAd;

/**
 * 开屏广告剩余时间回调
 */
- (void)sx_splashAdLifeTime:(NSUInteger)time splashAd:(SXSplashAd *__nullable)splashAd;




@end


@interface SXSplashAd : NSObject

/**
 *  delegate
 */
@property (nonatomic, weak) id<SXSplashAdDelegate> delegate;

@property (nonatomic ,strong) NSDictionary *dataDictionary;

/**
 *  拉取广告超时时间，默认为3秒
 *  详解：拉取广告超时时间，开发者调用loadAd方法以后会立即展示backgroundImage，然后在该超时时间内，如果广告拉
 *  取成功，则立马展示开屏广告，否则放弃此次广告展示机会。
 */
@property (nonatomic, assign) NSInteger fetchDelay;



/**
 *  广告发起请求并展示在Window中
 *  详解：[可选]发起拉取广告请求,并将获取的广告以全屏形式展示在传入的Window参数中
 *  提示: Splash广告只支持竖屏
 *  @param rootVC 展示全屏开屏的容器
 */
- (void)loadAdAndShowInRootVC:(UIViewController *)rootVC;

@end

NS_ASSUME_NONNULL_END

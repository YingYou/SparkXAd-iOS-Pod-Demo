//
//  SparkXAdSplashAd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/4.
//

#import <Foundation/Foundation.h>

@class SparkXAdSplashAd;

NS_ASSUME_NONNULL_BEGIN


@protocol SparkXAdSplashAdDelegate <NSObject>

/**
 *  开屏广告成功展示
 */
- (void)splashAdSuccessPresentScreen:(SparkXAdSplashAd * __nullable)splashAd;

/**
 *  开屏广告素材加载成功
 */
- (void)splashAdDidLoad:(SparkXAdSplashAd * __nullable)splashAd;

/**
 *  开屏广告展示失败
 */
- (void)splashAdFailToPresent:(SparkXAdSplashAd * __nullable)splashAd withError:(NSError *)error;

/**
 *  开屏广告曝光回调
 */
- (void)splashAdExposured:(SparkXAdSplashAd * __nullable)splashAd;

/**
 *  开屏广告点击回调
 */
- (void)splashAdClicked:(SparkXAdSplashAd * __nullable)splashAd;

/**
 *  开屏广告将要关闭回调
 */
- (void)splashAdClosed:(SparkXAdSplashAd * __nullable)splashAd;


/**
 *  开屏广告点击以后弹出全屏广告页
 */
- (void)splashAdDidPresentFullScreenModal:(SparkXAdSplashAd * __nullable)splashAd;


/**
 *  点击以后全屏广告页已经关闭
 */
- (void)splashAdDidDismissFullScreenModal:(SparkXAdSplashAd * __nullable)splashAd;


@end

@interface SparkXAdSplashAd : NSObject

@property (nonatomic, weak) id <SparkXAdSplashAdDelegate> delegate;

//+ (instancetype) instance;

/**
 *  构造方法
 *  详解：placementId - 广告位 ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId;

/**
 Display Splash ad.
 @param rootViewController : root viewcontroller.
 */

- (void)showAdFromRootViewController:(UIViewController *)rootViewController;

/**
Display Splash ad.
@param rootViewController : root viewcontroller.
 
 @param bottomView :底部logo自定义
*/
- (void)showAdFromRootViewController:(UIViewController *)rootViewController withBottomView:(nullable UIView *)bottomView;

/**
 * 返回广告是否可展示
 * 对于并行请求，在调用showAdFromRootViewController前时需判断下
 * @return 当广告已经加载完成且未曝光时，为YES，否则为NO
 */
- (BOOL)isAdValid;

@end

NS_ASSUME_NONNULL_END

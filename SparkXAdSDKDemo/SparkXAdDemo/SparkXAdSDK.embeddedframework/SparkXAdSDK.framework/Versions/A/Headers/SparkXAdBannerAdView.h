//
//  SparkXAdBannerAdView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>
#import "SXAdConst.h"

NS_ASSUME_NONNULL_BEGIN

@class SparkXAdBannerAdView;


@protocol SparkXAdBannerAdDelegate <NSObject>

/**
 *  请求广告条数据成功后调用
 *  当接收服务器返回的广告数据成功后调用该函数
 */
- (void)bannerViewDidLoad:(SparkXAdBannerAdView *)bannerView;

/**
 *  请求广告条数据失败后调用
 *  当接收服务器返回的广告数据失败后调用该函数
 */
- (void)bannerViewFailedToLoad:(SparkXAdBannerAdView *)bannerView error:(NSError *)error;

/**
 *  曝光回调
 */
- (void)bannerViewWillExpose:(SparkXAdBannerAdView *)bannerView;

/**
 *  点击回调
 */
- (void)bannerViewClicked:(SparkXAdBannerAdView *)bannerView;

/**
 * 广告点击以后弹出全屏广告页完毕
 */
- (void)bannerViewDidPresentFullScreenModal:(SparkXAdBannerAdView *)bannerView;

/**
 *  全屏广告页已经被关闭
 */
- (void)bannerViewDidDismissFullScreenModal:(SparkXAdBannerAdView *)bannerView;

@end


@interface SparkXAdBannerAdView : UIView

@property (nonatomic, weak) id <SparkXAdBannerAdDelegate> delegate;

@property (nonatomic ,assign) SXAdSize adSize;

//+ (instancetype)instance;

///**
// Display banner ad.
// @param rootView : root view  for displaying ad.
// @param rootViewController : current viewcontroller.
// @param adSize banner size
// */
//
//- (void)showAdFromRootView:(UIView *)rootView
//        rootViewController:(UIViewController *)rootViewController
//              withSXAdSize:(SXAdSize)adSize;
//
///***hide banner ad */
//- (void)hideBannerAd;

/**
 *  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。 [可选]
 */
@property (nonatomic) int autoSwitchInterval;

- (instancetype)initWithPlacementID:(NSString *)placementID
                             adSize:(SXAdSize)adSize
                 rootViewController:(nullable UIViewController *)rootViewController ;

/**
 *  拉取并展示广告
 */
- (void)loadAdAndShow;



@end

NS_ASSUME_NONNULL_END

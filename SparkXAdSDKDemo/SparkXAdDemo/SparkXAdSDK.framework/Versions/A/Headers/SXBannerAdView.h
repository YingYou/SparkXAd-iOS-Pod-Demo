//
//  SXBannerAdView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SXBannerAdView;

@protocol SXBannerViewDelegate <NSObject>

@optional

/**
 *  请求广告条数据成功后调用
 *  当接收服务器返回的广告数据成功后调用该函数
 */
- (void)sx_bannerViewDidLoad:(SXBannerAdView *)bannerView;
/**
 *  请求广告条数据失败后调用
 *  当接收服务器返回的广告数据失败后调用该函数
 */
- (void)sx_bannerViewFailedToLoad:(SXBannerAdView *)bannerView error:(NSError *)error;

/**
 *  banner2.0曝光回调
 */
- (void)sx_bannerViewWillExpose:(SXBannerAdView *)bannerView;

/**
 *  banner2.0点击回调
 */
- (void)sx_bannerViewClicked:(SXBannerAdView *)bannerView;

/**
 *  banner2.0广告点击以后即将弹出全屏广告页
 */
- (void)sx_bannerViewWillPresentFullScreenModal:(SXBannerAdView *)bannerView;

/**
 *  banner2.0广告点击以后弹出全屏广告页完毕
 */
- (void)sx_bannerViewDidPresentFullScreenModal:(SXBannerAdView *)bannerView;

/**
 *  全屏广告页即将被关闭
 */
- (void)sx_bannerViewWillDismissFullScreenModal:(SXBannerAdView *)bannerView;

/**
 *  全屏广告页已经被关闭
 */
- (void)sx_bannerViewDidDismissFullScreenModal:(SXBannerAdView *)bannerView;

/**
 *  当点击应用下载或者广告调用系统程序打开
 */
- (void)sx_bannerViewWillLeaveApplication:(SXBannerAdView *)bannerView;

/**
 *  banner2.0被用户关闭时调用
 */
- (void)sx_bannerViewWillClose:(SXBannerAdView *)bannerView;


@end

@interface SXBannerAdView : UIView

@property (nonatomic ,weak) id<SXBannerViewDelegate> delegate;

@property (nonatomic ,strong) NSDictionary * dataDictionary;

/**
 *  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。 [可选]
 */
@property (nonatomic) int autoSwitchInterval;

/**
 *  拉取并展示广告
 */
- (void)loadAdAndShow;


@end

NS_ASSUME_NONNULL_END

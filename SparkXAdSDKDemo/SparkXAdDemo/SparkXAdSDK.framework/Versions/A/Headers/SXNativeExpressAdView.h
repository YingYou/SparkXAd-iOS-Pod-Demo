//
//  SXNativeExpressAdView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/24.
//

#import <UIKit/UIKit.h>
#import "SXBaseSSPModel.h"
#import "SXNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@class SXNativeExpressAdView;

@protocol SXNativeExpressAdViewDelegate <NSObject>

- (void)nativeExpressAdViewExposure:(SXNativeExpressAdView *)nativeExpressAdView;

- (void)nativeExpressAdViewRenderFail:(SXNativeExpressAdView *)nativeExpressAdView withError:(NSError *)error;

@end

@interface SXNativeExpressAdView : UIView

@property (nonatomic ,weak) id<SXNativeExpressAdViewDelegate> delegate;

@property (nonatomic ,strong) SXBaseSSPModel  *sspModel;

@property (nonatomic ,strong) SXNativeExpressAd *nativeAd;

/**
 * 是否渲染完毕
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 * 是否是视频模板广告
 */
@property (nonatomic, assign, readonly) BOOL isVideoAd;


/*
 *  viewControllerForPresentingModalView
 *  详解：[必选]开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *controller;

/**
 *[必选]
 *原生模板广告渲染
 */
- (void)render;

/**
 * 视频模板广告时长，单位 ms
 */
- (CGFloat)videoDuration;

/**
 * 视频模板广告已播放时长，单位 ms
 */
- (CGFloat)videoPlayTime;



@end

NS_ASSUME_NONNULL_END

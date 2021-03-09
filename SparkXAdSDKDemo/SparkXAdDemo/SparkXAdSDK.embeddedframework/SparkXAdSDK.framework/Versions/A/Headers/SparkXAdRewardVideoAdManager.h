//
//  SparkXAdRewardVideoAdManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SparkXAdRewardVideoAdDelegate <NSObject>

@optional

/**
 广告数据加载成功回调

 */
- (void)rewardVideoAdSuccess;


/**
视频广告各种错误信息回调
 
@param error 具体错误信息
*/
- (void)didFailWithError:(NSError *)error;

/**
 视频广告视频播放完成
 */
- (void)rewardVideoAdDidPlayFinish;

/**
 视频广告曝光回调

 */
- (void)rewardVideoAdDidExposed;

/**
 视频播放页关闭回调

 */
- (void)rewardVideoAdDidClose;

/**
 视频广告播放达到激励条件回调

 */
- (void)rewardVideoAdDidRewardEffective;

/**
 视频广告信息点击回调
 */
- (void)rewardVideoAdDidClicked;


@end

@interface SparkXAdRewardVideoAdManager : NSObject

@property (nonatomic, weak) id <SparkXAdRewardVideoAdDelegate> delegate;

+ (instancetype) instance;

/**
 Display video ad.
 @param rootViewController : root view controller for displaying ad.
  @param adUnitId  ad adUnitId
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END

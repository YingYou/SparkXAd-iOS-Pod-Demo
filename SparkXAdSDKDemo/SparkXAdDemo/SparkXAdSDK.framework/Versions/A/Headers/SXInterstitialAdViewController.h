//
//  SXInterstitialAdViewController.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/19.
//

#import <UIKit/UIKit.h>
#import "SXInterstitialAd.h"
#import "SXBaseSSPModel.h"

NS_ASSUME_NONNULL_BEGIN



typedef void(^SXInterstitialAdHandler)(void);

@interface SXInterstitialAdViewController : UIViewController

@property (nonatomic ,strong) SXInterstitialAd *interstitialAd;

+ (instancetype)newInstanceWithAdModel:(SXBaseSSPModel *)model
                               handler:(SXInterstitialAdHandler)handler;

- (void)showInViewController:(UIViewController *)viewController;

#pragma mark---关闭alert
- (void)closeAlert;

@end

NS_ASSUME_NONNULL_END

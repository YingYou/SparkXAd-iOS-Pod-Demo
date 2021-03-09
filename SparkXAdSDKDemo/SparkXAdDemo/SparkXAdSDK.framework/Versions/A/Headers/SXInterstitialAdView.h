//
//  SXInterstitialAdView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SXInterstitialAdView;

@protocol SXInterstitialAdViewDelegate <NSObject>

- (void)closeDidInterstitialAdView:(SXInterstitialAdView *)view ;

- (void)clickDidInterstitialAdView:(SXInterstitialAdView *)view ;

- (void)interstitialWillExposureAdView:(SXInterstitialAdView *)view ;

- (void)interstitialFailToLoadAdView:(SXInterstitialAdView *)view error:(NSError *)error;

@end

@interface SXInterstitialAdView : UIView

@property (nonatomic ,weak) id<SXInterstitialAdViewDelegate> delegate;

@property (nonatomic ,strong) SXBaseSSPModel  *sspModel;

@end

NS_ASSUME_NONNULL_END

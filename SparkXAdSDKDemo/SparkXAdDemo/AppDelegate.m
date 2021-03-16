//
//  AppDelegate.m
//  SparkXAdDemo
//
//  Created by Wei yang on 2021/2/2.
//

#import "AppDelegate.h"
#import "AdListViewController.h"
#import <SparkXAdSDK/SparkXAdSplashAd.h>
#import <SparkXAdSDK/SparkXAdApi.h>
#import <AppTrackingTransparency/AppTrackingTransparency.h>
@interface AppDelegate ()<SparkXAdSplashAdDelegate>

@property (nonatomic ,strong) SparkXAdSplashAd * splashAd;

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    if (@available(iOS 14, *)) {
        [ATTrackingManager requestTrackingAuthorizationWithCompletionHandler:^(ATTrackingManagerAuthorizationStatus status) {
            [SparkXAdApi initWithSparkXAd:@"546FF24D-08C6-91AB-FF0F-9C930521E406"];
                   //to do something，like preloading
        }];
    } else {
        // Fallback on earlier versions
        [SparkXAdApi initWithSparkXAd:@"546FF24D-08C6-91AB-FF0F-9C930521E406"];
               //to do something，like preloading
    }
    [SparkXAdApi setLogEnabled:YES];
    [SparkXAdApi setAdvertiserTrackingEnabled:YES];
    
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor];

    
    AdListViewController *adListVC = [[AdListViewController alloc] init];
    UINavigationController *na = [[UINavigationController alloc] initWithRootViewController:adListVC];
    self.window.rootViewController = na;
    [self.window makeKeyAndVisible];
    
    self.splashAd = [[SparkXAdSplashAd alloc]initWithPlacementId:@"546FF24D-08C6-91AB-FF0F-9C930521E406-3"];
    self.splashAd.delegate = self;
    [self.splashAd showAdFromRootViewController:self.window.rootViewController withBottomView:nil];
    
    return YES;
}

#pragma mark----SparkXAdSplashAdDelegate

/**
 *  开屏广告成功展示
 */
- (void)splashAdSuccessPresentScreen:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告素材加载成功
 */
- (void)splashAdDidLoad:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告展示失败
 */
- (void)splashAdFailToPresent:(SparkXAdSplashAd *)splashAd withError:(NSError *)error {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告曝光回调
 */
- (void)splashAdExposured:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告点击回调
 */
- (void)splashAdClicked:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告将要关闭回调
 */
- (void)splashAdClosed:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}


/**
 *  开屏广告点击以后弹出全屏广告页
 */
- (void)splashAdDidPresentFullScreenModal:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}


/**
 *  点击以后全屏广告页已经关闭
 */
- (void)splashAdDidDismissFullScreenModal:(SparkXAdSplashAd *)splashAd {
    NSLog(@"%s", __FUNCTION__);
}



@end

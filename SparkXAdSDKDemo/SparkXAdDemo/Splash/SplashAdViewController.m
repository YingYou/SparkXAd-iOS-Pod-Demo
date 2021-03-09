//
//  SplashAdViewController.m
//  SparkXAdDemo
//
//  Created by Wei yang on 2021/2/2.
//  Copyright © 2021 SparkX. All rights reserved.
//

#import "SplashAdViewController.h"
#import <SparkXAdSDK/SparkXAdSplashAd.h>
#import "AppDelegate.h"
@interface SplashAdViewController ()<SparkXAdSplashAdDelegate>
@property (nonatomic, strong) UILabel *statusLabel;

@property (nonatomic ,strong) SparkXAdSplashAd * splashAd;

@end

@implementation SplashAdViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    self.view.backgroundColor = [UIColor whiteColor];
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    _statusLabel = [[UILabel alloc]init];
    [_statusLabel setFont:[UIFont systemFontOfSize:16]];
    [_statusLabel setTextColor:[UIColor redColor]];
    [_statusLabel setTextAlignment:NSTextAlignmentCenter];
    _statusLabel.translatesAutoresizingMaskIntoConstraints = NO;
    _statusLabel.text = @"Tap button to load and show Ad";
    [self.view addSubview:_statusLabel];
    
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-20-[_statusLabel]-20-|" options:0 metrics:nil views:NSDictionaryOfVariableBindings(_statusLabel)]];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:|-35-[_statusLabel(25)]" options:0 metrics:nil views:NSDictionaryOfVariableBindings(_statusLabel)]];
    
    
    UIButton *loadsplashAd = [UIButton buttonWithType:UIButtonTypeSystem];
    loadsplashAd.layer.borderWidth = 0.5;
    loadsplashAd.layer.cornerRadius = 8;
    loadsplashAd.layer.borderColor = [UIColor lightGrayColor].CGColor;
    loadsplashAd.translatesAutoresizingMaskIntoConstraints = NO;
    [loadsplashAd addTarget:self action:@selector(loadsplashAd:) forControlEvents:UIControlEventTouchUpInside];
    [loadsplashAd setTitle:@"Load SplashAd" forState:UIControlStateNormal];
    [loadsplashAd setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [self.view addSubview:loadsplashAd];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-30-[loadsplashAd]-170-|" options:NSLayoutFormatAlignAllCenterX metrics:nil views:NSDictionaryOfVariableBindings(loadsplashAd)]];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[_statusLabel]-20-[loadsplashAd(40)]" options:0 metrics:nil views:NSDictionaryOfVariableBindings(_statusLabel,loadsplashAd)]];

}
///@"ca-app-pub-3940256099942544/5662855259"
- (void)loadsplashAd:(id)sender {
    
    AppDelegate *appdelegate = (AppDelegate  *)[UIApplication sharedApplication].delegate;
    
    self.splashAd = [[SparkXAdSplashAd alloc]initWithPlacementId:@"546FF24D-08C6-91AB-FF0F-9C930521E406-3"];
    self.splashAd.delegate = self;
    [self.splashAd showAdFromRootViewController:appdelegate.window.rootViewController withBottomView:nil];
    
//    [SparkXAdSplashAdManager instance].delegate = self;
   
//    [[SparkXAdSplashAdManager instance]showAdFromRootViewController:appdelegate.window.rootViewController withBottomView:nil];
    self.statusLabel.text = @"Loading......";
}

#pragma mark----SparkXAdSplashAdDelegate

/**
 *  开屏广告成功展示
 */
- (void)splashAdSuccessPresentScreen {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告素材加载成功
 */
- (void)splashAdDidLoad {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告展示失败
 */
- (void)splashAdFailToPresentWithError:(NSError *)error {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告曝光回调
 */
- (void)splashAdExposured {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告点击回调
 */
- (void)splashAdClicked {
    NSLog(@"%s", __FUNCTION__);
}

/**
 *  开屏广告将要关闭回调
 */
- (void)splashAdClosed {
    NSLog(@"%s", __FUNCTION__);
}


/**
 *  开屏广告点击以后弹出全屏广告页
 */
- (void)splashAdDidPresentFullScreenModal {
    NSLog(@"%s", __FUNCTION__);
}


/**
 *  点击以后全屏广告页已经关闭
 */
- (void)splashAdDidDismissFullScreenModal {
    NSLog(@"%s", __FUNCTION__);
}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

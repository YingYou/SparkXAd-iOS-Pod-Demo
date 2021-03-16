//
//  NativeAdViewController.m
//  SparkXAdDemo
//
//  Created by Wei yang on 2021/2/4.
//  Copyright © 2021 SparkX. All rights reserved.
//

#import "NativeAdViewController.h"
#import <SparkXAdSDK/SparkXNativeExpressAd.h>

@interface NativeAdViewController ()<SparkXAdNativeExpressAdDelegate>
@property (nonatomic, strong) UILabel *statusLabel;

@property (nonatomic ,strong) UIView *nativeView;

@property (strong, nonatomic) SparkXNativeExpressAd *nativeAd;

@end

@implementation NativeAdViewController

- (UIView *)nativeView {
    if (!_nativeView) {
        _nativeView = [[UIView alloc]initWithFrame:CGRectMake(0, 200, [UIScreen mainScreen].bounds.size.width - 0, ([UIScreen mainScreen].bounds.size.width - 0)*0.3)];
        [self.view addSubview:_nativeView];
    }
    return _nativeView;
}

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
    
    
    UIButton *loadNativeAd = [UIButton buttonWithType:UIButtonTypeSystem];
    loadNativeAd.layer.borderWidth = 0.5;
    loadNativeAd.layer.cornerRadius = 8;
    loadNativeAd.layer.borderColor = [UIColor lightGrayColor].CGColor;
    loadNativeAd.translatesAutoresizingMaskIntoConstraints = NO;
    [loadNativeAd addTarget:self action:@selector(loadNativeAd:) forControlEvents:UIControlEventTouchUpInside];
    [loadNativeAd setTitle:@"Load Native Ad" forState:UIControlStateNormal];
    [loadNativeAd setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [self.view addSubview:loadNativeAd];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-30-[loadNativeAd]-170-|" options:NSLayoutFormatAlignAllCenterX metrics:nil views:NSDictionaryOfVariableBindings(loadNativeAd)]];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[_statusLabel]-20-[loadNativeAd(40)]" options:0 metrics:nil views:NSDictionaryOfVariableBindings(_statusLabel,loadNativeAd)]];
    
    UIButton *removeNativeAd = [UIButton buttonWithType:UIButtonTypeSystem];
    removeNativeAd.layer.borderWidth = 0.5;
    removeNativeAd.layer.cornerRadius = 8;
    removeNativeAd.layer.borderColor = [UIColor lightGrayColor].CGColor;
    removeNativeAd.translatesAutoresizingMaskIntoConstraints = NO;
    [removeNativeAd addTarget:self action:@selector(removeNativeAd:) forControlEvents:UIControlEventTouchUpInside];
    [removeNativeAd setTitle:@"removeNativeAd" forState:UIControlStateNormal];
    [removeNativeAd setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [self.view addSubview:removeNativeAd];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-30-[removeNativeAd]-170-|" options:NSLayoutFormatAlignAllCenterX metrics:nil views:NSDictionaryOfVariableBindings(removeNativeAd)]];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[loadNativeAd]-20-[removeNativeAd(40)]" options:0 metrics:nil views:NSDictionaryOfVariableBindings(loadNativeAd,removeNativeAd)]];
}

- (void)removeNativeAd:(id)sender {
    for (SparkXNativeExpressAdView *view in self.nativeView.subviews) {
        if ([view isKindOfClass:[SparkXNativeExpressAdView class]]) {
            [view removeFromSuperview];
        }
    }
    
}

- (void)loadNativeAd:(id)sender {
    
    self.nativeAd = [[SparkXNativeExpressAd alloc]initWithPlacementId:@"546FF24D-08C6-91AB-FF0F-9C930521E406-4" adSize:self.nativeView.frame.size];
    self.nativeAd.delegate = self;
    [self.nativeAd loadAd];
    
//    [SparkXAdNativeExpressAdManager instance].delegate = self;
//    [[SparkXAdNativeExpressAdManager instance]showAdFromRootView:self.nativeView rootViewController:self];
    self.statusLabel.text = @"Loading......";
}

#pragma mark----delegate

/**
 * 拉取原生模板广告成功
 */
- (void)nativeExpressAdSuccessToLoad:(SparkXNativeExpressAd *)nativeExpressAd views:(NSArray<__kindof SparkXNativeExpressAdView *> *)views {
    self.statusLabel.text = @"Ad loaded Success";
    SparkXNativeExpressAdView *view = views.firstObject;
    view.controller = self;
    [view render];
    [self.nativeView addSubview:view];
    view.frame = self.nativeView.bounds;
    
}


/**
 * 拉取原生模板广告失败
 */
- (void)nativeExpressAdFailToLoad:(SparkXNativeExpressAd *)nativeExpressAd error:(NSError *)error {
    self.statusLabel.text = @"Ad loaded fail";
}


/**
 * 原生模板广告渲染成功, 此时的 nativeExpressAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)nativeExpressAdViewRenderSuccess:(SparkXNativeExpressAdView *)nativeExpressAdView {
    self.statusLabel.text = @"Ad loaded render success";
}

/**
 * 原生模板广告渲染失败
 */
- (void)nativeExpressAdViewRenderFail:(SparkXNativeExpressAdView *)nativeExpressAdView {
    self.statusLabel.text = @"Ad loaded render fail";
}


/**
 * 原生模板广告曝光回调
 */
- (void)nativeExpressAdViewExposure:(SparkXNativeExpressAdView *)nativeExpressAdView {
    self.statusLabel.text = @"Ad loaded exposure";
}


/**
 * 原生模板广告被关闭
 */
- (void)nativeExpressAdViewClosed:(SparkXNativeExpressAdView *)nativeExpressAdView {
    
}

- (void)nativeExpressAdWillLeaveApplication:(SparkXNativeExpressAdView *)nativeExpressAdView {
    
}

@end

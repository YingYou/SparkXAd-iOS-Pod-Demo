//
//  InterstitialAdViewController.m
//  SparkXAdDemo
//
//  Created by Wei yang on 2021/2/4.
//  Copyright © 2021 SparkX. All rights reserved.
//

#import "InterstitialAdViewController.h"
#import <SparkXAdSDK/SparkXAdInterstitialAd.h>

@interface InterstitialAdViewController ()<SparkXAdInterstitialAdDelegate>
@property (nonatomic, strong) UILabel *statusLabel;

@property (nonatomic, strong) SparkXAdInterstitialAd *interstitial;

@end

@implementation InterstitialAdViewController

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
    
    
    UIButton *loadInterstitialAd = [UIButton buttonWithType:UIButtonTypeSystem];
    loadInterstitialAd.layer.borderWidth = 0.5;
    loadInterstitialAd.layer.cornerRadius = 8;
    loadInterstitialAd.layer.borderColor = [UIColor lightGrayColor].CGColor;
    loadInterstitialAd.translatesAutoresizingMaskIntoConstraints = NO;
    [loadInterstitialAd addTarget:self action:@selector(loadInterstitialAd:) forControlEvents:UIControlEventTouchUpInside];
    [loadInterstitialAd setTitle:@"Load Interstitial" forState:UIControlStateNormal];
    [loadInterstitialAd setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [self.view addSubview:loadInterstitialAd];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-30-[loadInterstitialAd]-170-|" options:NSLayoutFormatAlignAllCenterX metrics:nil views:NSDictionaryOfVariableBindings(loadInterstitialAd)]];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[_statusLabel]-20-[loadInterstitialAd(40)]" options:0 metrics:nil views:NSDictionaryOfVariableBindings(_statusLabel,loadInterstitialAd)]];
    
    UIButton *showInterstitialAd = [UIButton buttonWithType:UIButtonTypeSystem];
    showInterstitialAd.layer.borderWidth = 0.5;
    showInterstitialAd.layer.cornerRadius = 8;
    showInterstitialAd.layer.borderColor = [UIColor lightGrayColor].CGColor;
    showInterstitialAd.translatesAutoresizingMaskIntoConstraints = NO;
    [showInterstitialAd addTarget:self action:@selector(showInterstitialAd:) forControlEvents:UIControlEventTouchUpInside];
    [showInterstitialAd setTitle:@"Show Interstitial" forState:UIControlStateNormal];
    [showInterstitialAd setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [self.view addSubview:showInterstitialAd];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-30-[showInterstitialAd]-170-|" options:NSLayoutFormatAlignAllCenterX metrics:nil views:NSDictionaryOfVariableBindings(showInterstitialAd)]];
    [self.view addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[loadInterstitialAd]-20-[showInterstitialAd(40)]" options:0 metrics:nil views:NSDictionaryOfVariableBindings(loadInterstitialAd,showInterstitialAd)]];
}

//@"ca-app-pub-3940256099942544/4411468910"  @"YOUR_PLACEMENT_ID"
- (void)loadInterstitialAd:(id)sender {
//    [SparkXAdInterstitialAdManager instance].delegate = self;
//    [[SparkXAdInterstitialAdManager instance]showAdFromRootViewController:self];
    self.statusLabel.text = @"Loading......";
    if (self.interstitial) {
        self.interstitial.delegate = nil;
    }
    self.interstitial = [[SparkXAdInterstitialAd alloc]initWithPlacementID:@"546FF24D-08C6-91AB-FF0F-9C930521E406-2" adSize:SXAdSizeFromCGSize(self.view.frame.size)];
    self.interstitial.delegate = self;
    [self.interstitial loadAd];
    
}

- (void)showInterstitialAd:(id)sender {
    if (self.interstitial.isAdValid) {
        [self.interstitial presentAdFromRootViewController:self];
    }
    
}

#pragma mark---SparkXAdInterstitialAdDelegate

/// Tells the delegate an ad request succeeded.
- (void)interstitialDidReceiveAd:(SparkXAdInterstitialAd *)interstitialAd {
    self.statusLabel.text = @"Ad loaded Success";
}

/// Tells the delegate an ad request failed.
- (void)didFailToReceiveAdWithError:(SparkXAdInterstitialAd *)interstitialAd error:(NSError *)error {
    self.statusLabel.text = @"Ad loaded fail";
}

/// Tells the delegate that an interstitial did Exposed.
- (void)interstitialAdDidExposed:(SparkXAdInterstitialAd *)interstitialAd {
    self.statusLabel.text = @"Ad Exposed";
}

- (void)interstitialAdDidClose:(SparkXAdInterstitialAd *)interstitialAd {
    self.statusLabel.text = @"Ad Close";
}

- (void)interstitialAdDidClick:(SparkXAdInterstitialAd *)interstitialAd {
    self.statusLabel.text = @"Ad Click";
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
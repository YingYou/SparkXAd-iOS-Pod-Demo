//
//  SXLogoAdCommonView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SXLogoAdCommonView : UIView

@property (nonatomic ,strong) UIImageView * logoImageView;
@property (nonatomic ,strong) UILabel *adTipLabel;

+ (instancetype)newInstance;

- (void)updateView;

@end

NS_ASSUME_NONNULL_END

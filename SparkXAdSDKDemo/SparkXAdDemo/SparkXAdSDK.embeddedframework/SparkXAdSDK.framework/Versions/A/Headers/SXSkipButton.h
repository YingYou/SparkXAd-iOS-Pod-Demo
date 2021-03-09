//
//  SXSkipButton.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//typedef void(^SXSkipButtonBlock)(void);
@class SXSkipButton;

@protocol SXSkipButtonDelegate <NSObject>

- (void)skipButtonDidClickClose:(SXSkipButton *)skipButton;

- (void)skipButtonDidTimeEnd:(SXSkipButton *)skipButton;

- (void)skipButton:(SXSkipButton *)skipButton withTime:(NSInteger)time;

@end

@interface SXSkipButton : UIView

@property (nonatomic ,assign) NSInteger time;

@property (nonatomic ,weak) id<SXSkipButtonDelegate> delegate;

//@property (nonatomic ,copy) SXSkipButtonBlock skipBtnBlock;

+ (instancetype)newInstance;

@end

NS_ASSUME_NONNULL_END

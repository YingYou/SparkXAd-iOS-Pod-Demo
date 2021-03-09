//
//  SparkXAdIndicatorView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    SXIndicatorRewardType,
    SXIndicatorOtherType
} SXIndicatorType;

@interface SparkXAdIndicatorView : UIView

+ (instancetype)showSXAddedTo:(UIView *)view type:(SXIndicatorType)type;

+ (instancetype)showSXAddedTo:(UIView *)view
                         type:(SXIndicatorType)type
                   delayBlock:(void (^)(void))delayBlock;

+ (instancetype)showSXAddedTo:(UIView *)view
                         type:(SXIndicatorType)type
                        delay:(NSTimeInterval)delay;

+ (void)hideSXForView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END

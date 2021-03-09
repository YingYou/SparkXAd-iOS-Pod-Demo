#import <UIKit/UIKit.h>
@interface SparkXAdBBMBProgressHUD : UIView
+ (void)showToast:(NSString *)toast toView:(UIView *)view;
+ (void)showToast:(NSString *)toast;
+(void)showSuccess:(NSString *)totast;
+(void)showError:(NSString *)totast;
+(void)showRecording:(NSString *)toast  ;
+ (void)showToast:(NSString *)toast offsetY:(CGFloat)offsetY;
+ (void)showAttributedToast:(NSAttributedString *)toast offsetY:(CGFloat)offsetY;
+ (void)showToast:(NSString *)toast offsetY:(CGFloat)offsetY delay:(NSInteger)delay;
+ (void)showPlayRewardToastView;
+ (void)showPlayRewardToastViewWithGoldNum:(NSString *)goldNum;
+ (void)showAdsRewardToastViewWithGoldNum:(NSString *)goldNum;
+ (void)showActivityToastView;
+ (void)hideActivityToastView;
@end

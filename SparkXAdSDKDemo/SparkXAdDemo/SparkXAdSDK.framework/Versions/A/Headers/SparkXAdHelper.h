#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface SparkXAdHelper : NSObject
CGRect screen_bounds(void);
BOOL isIPhoneXSeriess(void);
UIViewController* visible_view_controller(void) ;
NSString *floatToString(CGFloat distance);
NSString *timeToFormatString(CGFloat time);
+ (NSString *)getDurationFormat:(float)time;
+ (void)clearCache;
+ (NSInteger)getRandomNumber:(NSInteger)from to:(NSInteger)to;
BOOL isFirstInstall(void);

+ (UIImage *)imageNamed:(NSString *)name;
@end
NS_ASSUME_NONNULL_END

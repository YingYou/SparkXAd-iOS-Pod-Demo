//
//  SparkXAdAlertView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SparkXAdAlertView : NSObject

+(void)alert:(NSString*)title
     message:(NSString*)message
dismissTitle:(NSString*)dismissTitle
viewController:(UIViewController*)viewController
dismissAction:(void (^)(id ret))dismissAction;
+(void)confirmOrCancel:(NSString*)title
               message:(NSString*)message
          confirmTitle:(NSString*)confirmTitle
           cancelTitle:(NSString*)cancelTitle
        viewController:(UIViewController*)viewController
         confirmAction:(void (^)(id ret))confirmAction
         dismissAction:(void (^)(id ret))dismissAction;


+(void)confirmOrCancelWithTextField:(NSString*)title
                            message:(NSString*)message
                       confirmTitle:(NSString*)confirmTitle
                        cancelTitle:(NSString*)cancelTitle
                     viewController:(UIViewController*)viewController
                      confirmAction:(void (^)(NSString* text))confirmAction                      dismissAction:(void (^)(id ret))dismissAction
               configurationHandler:(void (^ __nullable)(UITextField *textField))configurationHandler;

@end

NS_ASSUME_NONNULL_END

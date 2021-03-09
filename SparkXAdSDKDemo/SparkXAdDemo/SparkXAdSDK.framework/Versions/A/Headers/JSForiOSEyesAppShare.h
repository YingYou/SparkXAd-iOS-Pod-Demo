#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
NS_ASSUME_NONNULL_BEGIN
extern NSString * const YXNetworkAvailableNotification;
extern NSString * const YXNetworkChangedNotification;
@interface JSForiOSEyesAppShare : NSObject
+ (instancetype)sharedInstance;
@property (nonatomic, readonly) AFNetworkReachabilityStatus networkStatus;
@property (nonatomic, readonly) BOOL networkIsAvailable;
@end
NS_ASSUME_NONNULL_END

#import <Foundation/Foundation.h>
#import "JSForiOSEyesDomainManager.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^CompletionHandler)(NSURLSessionTask *task, NSError *_Nullable error, _Nullable id responseObjct);
NSTimeInterval accurate_to_ms(NSTimeInterval time);


FOUNDATION_EXPORT NSString const  *api_signSecretKey;

@interface JSForiOSEyesNetWork : NSObject
@property (class, nonatomic, assign) BOOL resetBoboHttpHeaders;
@property (nonatomic) BOOL callbackWhenCancelled;
@property (nonatomic, class, readonly) unsigned long long serverTime;
@property (nonatomic, copy) NSString *signSecretKey;
@property (nonatomic, copy) NSString *signLogSecretKey;
@property (nonatomic, copy) NSString *rc4_key;
+ (BOOL)isTestAPI;
+(NSString *)abId;
+ (void)syncServerInfo;
+ (void)getCookie;
- (void)POST:(NSString *)url
      params:(nullable NSDictionary *)params
completionHandler:(CompletionHandler)completionHandler;
- (void)logPOST:(NSString *)url
      params:(nullable NSDictionary *)params
completionHandler:(CompletionHandler)completionHandler;
- (void)cancel;

+ (void)setNetSignWithKey:(NSString *)signSecretKey
signLogSecretKey:(NSString *)signLogSecretKey
         rc4_key:(NSString *)rc4_key;
@end
NS_ASSUME_NONNULL_END

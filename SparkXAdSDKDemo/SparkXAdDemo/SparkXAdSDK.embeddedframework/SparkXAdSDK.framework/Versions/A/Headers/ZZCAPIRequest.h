#import <Foundation/Foundation.h>
#import "JSForiOSEyesNetWork.h"
NS_ASSUME_NONNULL_BEGIN
#define SX_Client_Req_Ad     @"client/req_ad"

@interface ZZCAPIRequest : NSObject

#pragma mark-------全局配置接口--------
+ (JSForiOSEyesNetWork *)getApiAdHttp:(NSDictionary *)params
                        apiName:(NSString *)apiName
              complectonHandler:(CompletionHandler)complectionHandler;

+ (JSForiOSEyesNetWork *)getAdsPlayReport:(NSDictionary *)params complectonHandler:(CompletionHandler)complectionHandler;

+ (void)configAPiWithUrl:(NSString *)url
                  params:(NSDictionary *)params
       complectonHandler:(CompletionHandler)complectionHandler;

@end
NS_ASSUME_NONNULL_END

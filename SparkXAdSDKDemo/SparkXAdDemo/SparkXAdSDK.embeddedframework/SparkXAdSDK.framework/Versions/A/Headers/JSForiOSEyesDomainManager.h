#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, YXRequestType) {
    YXRequestTypeAPI, 
    YXRequestTypeLog 
};

typedef NS_ENUM(NSUInteger,MKApiMode) {
    MKApiMode_Release,
    MKApiMode_Production,
    MKApiMode_Test,
    MKApiMode_Custom,
};

@interface JSForiOSEyesDomainManager : NSObject
@property (nonatomic, readonly, getter=isTestAPI) BOOL testAPI;
@property (nonatomic) BOOL noEncrypt;
@property (nonatomic) MKApiMode apiMode;

//----用户设备标识符
@property (nonatomic ,strong) NSString *userId;

//-----用户是否第一次安装
@property (nonatomic, assign) BOOL firstInstall;

@property (nonatomic) NSTimeInterval timeDifference;
@property (nonatomic) NSString *abId;//------

#pragma mark----对外方法
+ (void)sets_AbId:(NSString *)abId;
+ (void)setNetSignWithKey:(NSString *)signSecretKey
         signLogSecretKey:(NSString *)signLogSecretKey
                  rc4_key:(NSString *)rc4_key;

+ (instancetype)sharedManager;
- (NSString *)apiForRequestType:(YXRequestType)requestType;
- (NSMutableArray<NSString *> *)domainsForRequsetType:(YXRequestType)requestType;
- (void)sortDomainsWithSuccessDomain:(NSString *)domain requestType:(YXRequestType)requestType;
@end
NS_ASSUME_NONNULL_END

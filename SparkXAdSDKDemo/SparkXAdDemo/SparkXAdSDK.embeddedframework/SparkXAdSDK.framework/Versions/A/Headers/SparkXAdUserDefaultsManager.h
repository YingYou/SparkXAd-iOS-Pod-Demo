//
//  SparkXAdUserDefaultsManager.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/5.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "SparkXAdConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SparkXAdUserDefaultsManager : NSObject

@property (nonatomic, copy, class) NSString *customApiDomain;

@property (nonatomic ,assign,class) CGFloat adRate;

@property(nonatomic,assign)NSInteger reTryCount;

@property (nonatomic ,copy, readonly) NSString *appId;

//@property (nonatomic,strong) NSDictionary *configDic;

@property (nonatomic) SparkXAdConfigDataModel *appConfigModel;

@property (nonatomic ,strong,readonly) NSMutableArray<SparkXAdTypeModel *> * bannerTotalArra;
@property (nonatomic ,strong,readonly) NSMutableArray<SparkXAdTypeModel *> * interstitialTotalArra;
@property (nonatomic ,strong,readonly) NSMutableArray<SparkXAdTypeModel *> * splashTotalArra;
@property (nonatomic ,strong,readonly) NSMutableArray<SparkXAdTypeModel *> * nativeTotalArra;

@property (nonatomic ,copy,readonly)  NSString  *googleAppKey;

@property (nonatomic ,copy,readonly)  NSString *facebookAppKey;

@property (nonatomic ,assign) NSInteger deviceOrientation;


+ (instancetype)sharedManager;

- (NSString *)agentStr;

- (void)initAdAppId:(NSString *)appId;

///获取当前需要使用的广告位pid
- (SparkXAdTypeModel *)queryAdTypeWithMaster:(NSInteger)adType
                                    slotType:(NSInteger)slotType
                                       sspId:(NSString *)sspId;

@end

NS_ASSUME_NONNULL_END

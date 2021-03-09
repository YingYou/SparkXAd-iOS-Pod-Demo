//
//  SparkAdContainerCommonParams.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/25.
//

#import <Foundation/Foundation.h>
#import "SparkXNativeExpressAdView.h"
#import "SparkXNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface SparkAdContainerCommonParams : NSObject

@property (nonatomic ,strong) NSArray<__kindof SparkXNativeExpressAdView *> *views;

@property (nonatomic ,strong) SparkXNativeExpressAd * _Nullable  nativeExpressAd;

@property (nonatomic ,strong,nonnull) __kindof SparkXNativeExpressAdView * currentNativeExpressAdView;



@end

NS_ASSUME_NONNULL_END

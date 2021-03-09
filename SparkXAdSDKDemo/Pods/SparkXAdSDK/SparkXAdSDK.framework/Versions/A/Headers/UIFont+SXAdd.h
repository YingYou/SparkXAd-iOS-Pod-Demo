//
//  UIFont+SXAdd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (SXAdd)

+ (instancetype)sx_sysRegularFontOfSize:(CGFloat)fontSize;
+ (instancetype)sx_sysMediumFontOfSize:(CGFloat)fontSize;
+ (instancetype)sx_sysBoldFontOfSize:(CGFloat)fontSize;
+ (instancetype)sx_sysSemiboldFontOfSize:(CGFloat)fontSize;
+ (instancetype)sx_sysHeavyFontOfSize:(CGFloat)fontSize;
+ (instancetype)sx_sysLightFontOfSize:(CGFloat)fontSize;

@end

NS_ASSUME_NONNULL_END

//
//  SXBaseSSPModel.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/2.
//

#import <Foundation/Foundation.h>
#import "SparkXAdInfoModel.h"
#import "SXBaseModel.h"

NS_ASSUME_NONNULL_BEGIN


@interface SXBaseSSPModel : NSObject

@property (nonatomic ,assign)  NSInteger from ;//广告商

@property (nonatomic ,assign) NSInteger priority;

@property (nonatomic ,assign) CGFloat weight;

@property (nonatomic ,strong) SparkXAdInfoModel * ssp;


@property (nonatomic ,assign) SXAdSize adSize;

@property (nonatomic ,copy ,nonnull) NSString *pid;//广告pid

@property (nonatomic ,copy, nonnull) NSString * appid;


@end


NS_ASSUME_NONNULL_END

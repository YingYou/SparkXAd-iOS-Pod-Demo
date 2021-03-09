//
//  SparkXAdConfigModel.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/2.
//

#import <Foundation/Foundation.h>
#import "SXBaseModel.h"
#import "SparkXAdTypeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SparkXAdConfigModel : NSObject

@property (nonatomic ,assign) NSInteger  adId;

@property (nonatomic ,copy) NSString * name;

@property (nonatomic ,copy) NSString * app_id;

@property (nonatomic) NSArray<SparkXAdTypeModel *> *slots;



@end

@interface SparkXAdConfigDataModel : SXBaseModel

@property (nonatomic ,strong) NSArray <SparkXAdConfigModel *> * data;

@end

NS_ASSUME_NONNULL_END

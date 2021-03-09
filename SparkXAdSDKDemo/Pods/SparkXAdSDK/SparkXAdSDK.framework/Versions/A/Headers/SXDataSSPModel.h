//
//  SXDataSSPModel.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/9.
//

#import "SXBaseModel.h"
#import "SXBaseSSPModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SXDataSSPModel : SXBaseModel
@property (nonatomic ,strong) NSArray <SXBaseSSPModel *> * data;
@end

NS_ASSUME_NONNULL_END

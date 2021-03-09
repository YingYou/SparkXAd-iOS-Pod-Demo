//
//  SXBaseModel.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/3/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define SX_Code_Success  1

@interface SXBaseModel : NSObject

@property (nonatomic ,assign) NSInteger code ;

@property (nonatomic ,copy) NSString * msg;

@property (nonatomic ,assign) NSInteger timestamp;

@end

NS_ASSUME_NONNULL_END

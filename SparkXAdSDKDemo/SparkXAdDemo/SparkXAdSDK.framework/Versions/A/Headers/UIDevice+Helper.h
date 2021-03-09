#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface UIDevice (Helper)
@property (nullable, nonatomic, readonly) NSString *udid;
@property (nullable, nonatomic, readonly) NSString *machineModel;
@property (nullable, nonatomic, readonly) NSString *machineModelName;
@property (nullable, nonatomic, readonly) NSString *plat;
@property (nullable, nonatomic, readonly) NSString *networkStatus;
@property (nonatomic, readonly) int networkType;
@property (nullable, nonatomic, readonly) NSString *idfv;
@property (nullable, nonatomic, readonly) NSString *resolution;
@property (nullable, nonatomic, readonly) NSString *carrier;

@property (nullable, nonatomic, readonly) NSString *common_sw;//设备屏幕分辨率宽度
@property (nullable, nonatomic, readonly) NSString *common_sh;//设备屏幕分辨率⾼高度
@property (nullable, nonatomic, readonly) NSString *common_w;
@property (nullable, nonatomic, readonly) NSString *common_h;
@property (nullable, nonatomic, readonly) NSString *common_deny;
@property (nullable, nonatomic, readonly) NSString *common_deviceType;

@property (nonatomic ,assign) NSInteger orientation;

@property (nonatomic ,copy) NSString *sysLng;


- (BOOL)isIPhone4s;
@end
NS_ASSUME_NONNULL_END

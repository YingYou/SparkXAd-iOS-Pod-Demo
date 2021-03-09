#import "SparkXAdHelper.h"

#ifndef SXUtilities_h
#define SXUtilities_h
#define SXRootVC    [UIApplication sharedApplication].keyWindow.rootViewController
#define SXWindow  [UIApplication sharedApplication].windows.firstObject
#define kScreenBounds  (screen_bounds())
#define kScreenSize    (kScreenBounds.size)
#define kScreenWidth   (kScreenSize.width)
#define kScreenHeight  (kScreenSize.height)
#define kWidthScale    ((kScreenWidth * 1.0)/375.0)
#define kHeightScale   ((kScreenHeight * 1.0)/667.0)
#define kIsIPhoneX  isIPhoneXSeriess()
#define kStatusBarHeight  (kIsIPhoneX ? 44.0 : 20.0)
#define kCustomNaviBarHeight  (44.0)
#define kCustomNaviBarBigHeight  (55.0)
#define kNavigationBarBigHeight  (kStatusBarHeight + kCustomNaviBarBigHeight)
#define kNavigationBarHeight  (kStatusBarHeight + kCustomNaviBarHeight)
#define kTabbarSafeBottomMargin (kIsIPhoneX ? 34.0 : 0.0)
#define kTabBarHeight  (kTabbarSafeBottomMargin + 49.0)

#define SXAd_Image(file)                 [SparkXAdHelper imageNamed:file]

#define SX_UserAgent   [[SparkXAdUserDefaultsManager sharedManager] agentStr]
#define SX_Scale       [UIScreen mainScreen].scale

#endif 

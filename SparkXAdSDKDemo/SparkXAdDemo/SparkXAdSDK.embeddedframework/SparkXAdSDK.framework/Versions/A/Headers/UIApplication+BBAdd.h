#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, KGLaunchType) {
    KGLaunchTypeDefault = 0,
    KGLaunchTypeFirst = 1,
    KGLaunchTypeOverlayInstallation = 2
};
@interface UIApplication (BBAdd)
@property (nonatomic, readonly) KGLaunchType kg_launchType;
- (NSURL *)wt_documentsURL;
- (NSString *)wt_documentsPath;
- (NSURL *)wt_cachesURL;
- (NSString *)wt_cachesPath;
- (NSURL *)wt_libraryURL;
- (NSString *)wt_libraryPath;
- (NSString *)wt_appBundleName;
- (NSString *)wt_appBundleID;
- (NSString *)wt_appVersion;
- (NSString *)wt_appBuildVersion;

- (NSString *)wt_appDisplayName;
@end
NS_ASSUME_NONNULL_END

#import <Foundation/Foundation.h>
@interface JSForiOSEyesFileHash : NSObject
+ (NSString *)md5HashOfFileAtPath:(NSString *)filePath;
+ (NSString *)sha1HashOfFileAtPath:(NSString *)filePath;
+ (NSString *)sha512HashOfFileAtPath:(NSString *)filePath;
@end

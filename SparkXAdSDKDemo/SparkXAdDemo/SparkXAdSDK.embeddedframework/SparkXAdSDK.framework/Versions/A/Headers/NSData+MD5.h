#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@interface NSData (MD5)
- (NSString *)yx_MD5;
NSData* yx_rc4_process(NSData *data, const char *rc4_key);
@end
@interface NSData (Zip)
- (nullable NSData *)kg_gzippedDataWithCompressionLevel:(float)level;
- (nullable NSData *)kg_gzippedData;
- (nullable NSData *)kg_gunzippedData;
- (BOOL)kg_isGzippedData;
@end
NS_ASSUME_NONNULL_END

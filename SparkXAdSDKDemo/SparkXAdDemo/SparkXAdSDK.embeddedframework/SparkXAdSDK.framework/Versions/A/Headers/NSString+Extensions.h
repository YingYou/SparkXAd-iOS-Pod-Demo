#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>
@interface NSString (Extensions)
- (NSString *)lowercaseFirstCharacter;
- (NSString *)uppercaseFirstCharacter;
- (BOOL)isEmpty;
- (NSString *)replaceNullString;
- (NSString *)trim;
- (NSString *)trimTheExtraSpaces;
- (NSString *)escapeHTML;
- (NSString *)stringByDecodingXMLEntities;
- (NSString *)md5;
- (NSString *)md5ForUTF16;
- (CGFloat)fontSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (NSMutableArray *)tokenizationStringByNSStringEnumerationOptions:(NSStringEnumerationOptions)opts;
- (NSString *)languageForString;
- (NSMutableArray *)analyseTextOfSentences;
+ (NSString *)documentPath;
+ (NSString*)libraryPath;
+ (NSString *)cachePath;
+ (NSString *)imageCachePath;
+ (NSString *)localShoppingCartPath;
- (BOOL)isValidSecurityCode;
- (BOOL)isValidEmail;
- (BOOL)isValidPhoneNumber;
- (BOOL)isValidPersonID;
- (BOOL)areaCode:(NSString *)code;
+ (NSString *)pathWithFileName:(NSString *)fileName;
+ (NSString *)pathWithFileName:(NSString *)fileName ofType:(NSString *)type;
+ (NSString *)dateWithSeconds:(NSUInteger)seconds;
- (NSDictionary *)queryDictionary;
- (NSString *)URLStringByAppendingQueryString:(NSString *)queryString;
- (CGSize)textSizeIn:(CGSize)size font:(UIFont *)font;
- (CGSize)textSizeIn:(CGSize)size font:(UIFont *)font breakMode:(NSLineBreakMode)breakMode;
- (CGSize)textSizeIn:(CGSize)size font:(UIFont *)font breakMode:(NSLineBreakMode)breakMode align:(NSTextAlignment)alignment;
@end

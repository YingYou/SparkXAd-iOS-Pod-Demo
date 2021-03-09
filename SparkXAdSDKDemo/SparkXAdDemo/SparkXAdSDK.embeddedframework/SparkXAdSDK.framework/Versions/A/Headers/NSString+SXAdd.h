//
//  NSString+SXAdd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SXAdd)
- (CGSize)sx_textSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;
- (CGSize)sx_CommentSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size WithLineSpace:(CGFloat)lineSpace;
@end

NS_ASSUME_NONNULL_END

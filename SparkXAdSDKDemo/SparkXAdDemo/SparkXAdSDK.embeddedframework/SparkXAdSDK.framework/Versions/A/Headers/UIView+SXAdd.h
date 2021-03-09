//
//  UIView+SXAdd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SXAdd)

@property (nonatomic) CGFloat sx_left;
@property (nonatomic) CGFloat sx_right;
@property (nonatomic) CGFloat sx_top;
@property (nonatomic) CGFloat sx_bottom;
@property (nonatomic) CGFloat sx_width;
@property (nonatomic) CGFloat sx_height;
@property (nonatomic) CGFloat sx_centerX;
@property (nonatomic) CGFloat sx_centerY;
@property (nonatomic) CGPoint sx_origin;
@property (nonatomic) UIEdgeInsets sx_extendInset;
- (void)sx_runAddAnimaion;
- (void)sx_runRemoveAnimaion;
- (void)sx_setRoundedCorners:(UIRectCorner)corners radii:(CGSize)radii;
- (void)sx_setRoundedCorners:(UIRectCorner)corners radii:(CGSize)radii bounds:(CGRect)bounds;
- (void)sx_setBorderWithCornerRadius:(CGFloat)cornerRadius
                         borderWidth:(CGFloat)borderWidth
                         borderColor:(UIColor *)borderColor
                                type:(UIRectCorner)corners;


@end

NS_ASSUME_NONNULL_END

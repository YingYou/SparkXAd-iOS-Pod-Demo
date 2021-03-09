//
//  FBTemplateView.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/26.
//

#import <UIKit/UIKit.h>
#import <FBAudienceNetwork/FBAudienceNetwork.h>

NS_ASSUME_NONNULL_BEGIN

/// Constants used to style your template.
typedef NSString* FBNativeTemplateStyleKey NS_STRING_ENUM;

/// The font, font color and background color for your call to action view.
/// All templates have a call to action view.
#pragma mark - Call To Action

/// Call to action font. Expects a UIFont.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyCallToActionFont;

/// Call to action font color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyCallToActionFontColor;

/// Call to action background color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyCallToActionBackgroundColor;

/// The font, font color and background color for the first row of text in the template.
/// All templates have a primary text area which is populated by the native ad's headline.
#pragma mark - Primary Text

/// Primary text font. Expects a UIFont.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyPrimaryFont;

/// Primary text font color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyPrimaryFontColor;

/// Primary text background color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyPrimaryBackgroundColor;

/// The font, font color and background color for the second row of text in the template.
/// All templates have a secondary text area which is populated either by the body of the ad,
/// or by the rating of the app.
#pragma mark - Secondary Text

/// Secondary text font. Expects a UIFont.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeySecondaryFont;

/// Secondary text font color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeySecondaryFontColor;

/// Secondary text background color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeySecondaryBackgroundColor;

/// The font, font color and background color for the third row of text in the template.
/// The third row is used to display store name or the default tertiary text.
#pragma mark - Tertiary Text

/// Tertiary text font. Expects a UIFont.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyTertiaryFont;

/// Tertiary text font color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyTertiaryFontColor;

/// Tertiary text background color. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyTertiaryBackgroundColor;

#pragma mark - Additional Style Options

/// The background color for the bulk of the ad. Expects a UIColor.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyMainBackgroundColor;

/// The corner rounding radius for the icon view and call to action. Expects an NSNumber.
extern FBNativeTemplateStyleKey const FBNativeTemplateStyleKeyCornerRadius;


@interface FBTemplateView : UIView
@property(nonatomic, copy) NSDictionary<FBNativeTemplateStyleKey, NSObject*>* styles;

@property(weak) IBOutlet UILabel* primaryTextView;
@property(weak) IBOutlet UILabel* secondaryTextView;
@property(weak) IBOutlet UILabel* tertiaryTextView;
@property(weak) IBOutlet UILabel* adBadge;
@property(weak) IBOutlet UIImageView* brandImage;
@property(weak) IBOutlet UIView* backgroundView;
@property (weak)IBOutlet FBMediaView *adCoverMediaView;

@property (weak) IBOutlet UIButton *adCallToActionButton;

@property(weak) UIView* rootView;

@property (nonatomic ,strong) FBNativeAd *nativeAd;


/// Adds a constraint to the superview so that the template spans the width of its parent.
/// Does nothing if there is no superview.
- (void)addHorizontalConstraintsToSuperviewWidth;

/// Adds a constraint to the superview so that the template is centered vertically in its parent.
/// Does nothing if there is no superview.
- (void)addVerticalCenterConstraintToSuperview;

@end

NS_ASSUME_NONNULL_END

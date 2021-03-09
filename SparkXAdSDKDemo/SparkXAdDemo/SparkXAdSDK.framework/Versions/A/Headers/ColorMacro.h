#ifndef ColorMacro_h
#define ColorMacro_h
#define UIColorFromRGBWithAlpha(rgbValue, alphaValue)   [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:alphaValue]
#define UIColorFromRGB(rgbValue)    UIColorFromRGBWithAlpha(rgbValue, 1.0)
#define kTabBarBgColor    UIColorFromRGB(0xFFFFFF)
#define kBaseControllerColor    UIColorFromRGB(0xFFFFFF)
#define kNavigationTitleColor   UIColorFromRGB(0x262628) 
#define kNavigationBarLineColor   UIColorFromRGB(0xdddddd)
#define kTextColorBlack     UIColorFromRGB(0x333333)
#define kTextColorRed       UIColorFromRGB(0xFF7676)
#define KTextColorBlack     UIColorFromRGB(0x262628) 
#define KTextColorDarkGrey     UIColorFromRGB(0x9999a1)
#define KTextColorGrey     UIColorFromRGB(0xbabac1) 
#define kTextAlignmentCenter_SC NSTextAlignmentCenter
#define kTextAlignmentLeft_SC NSTextAlignmentLeft
#define kTextAlignmentRight_SC NSTextAlignmentRight
#endif 

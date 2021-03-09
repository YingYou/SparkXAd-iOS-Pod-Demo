//
//  DebugCell.h
//  AFNetworking
//
//  Created by yw on 2020/5/14.
//

#import <UIKit/UIKit.h>
#import "DebugViewController.h"
#import "NSString+MD5.h"
#import "NSString+SXAdd.h"
#import "UIDevice+Helper.h"
#import "SXAppMacro.h"
#import "JSForiOSEyesDomainManager.h"
#import "NetTool.h"
#import "SparkXAdUserDefaultsManager.h"
#import "SparkXAdBBMBProgressHUD.h"
#import "SparkXAdAlertView.h"
#import "SparkXAdHelper.h"
NS_ASSUME_NONNULL_BEGIN

@interface DebugCell : UITableViewCell
@property (nonatomic,weak) DebugViewController *debugVc;
- (void)showInfo:(NSMutableArray*)dataSoucre indexPath:(NSIndexPath *)index;
- (void)changeSwitchState;

@end

NS_ASSUME_NONNULL_END

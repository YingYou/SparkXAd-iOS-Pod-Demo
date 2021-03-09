#import "ZZCAPIRequest.h"

#define Game_App_Start @"app_start"
#define Game_Start @"start"
#define Game_Exit @"exit"
#define Game_bb_reward_video_ad_status @"bb_reward_video_ad_status"
#define Game_push_show_notify    @"push_show_notify"
#define Game_push_click_notify     @"push_click_notify"
#define push_arrive     @"push_arrive"
#define user_rec_game_click     @"user_rec_game_click"
#define user_center_show        @"user_center_show"
#define user_center_amount_click    @"user_center_amount_click"

//------广告投递----///
#define Game_Ad_Sdk_Request    @"event_ad_sdk_request"
#define Game_Ad_Sdk_Response    @"event_ad_sdk_response"
#define Game_Ad_Client_Show    @"event_ad_client_show"
#define Game_Ad_Client_Click    @"event_ad_client_click"

NS_ASSUME_NONNULL_BEGIN
@interface ZZCAPIRequest (ZZCLog)
+ (void)event:(NSString *)eventId attributes:(NSDictionary *_Nullable)attributes;
+ (void)eventAd:(NSString *)eventId attributes:(NSDictionary *_Nullable)attributes;
+ (void)eventAdReport:(NSInteger)adType
               adsPid:(NSString *)adsPid
           adsPidType:(NSString *)adsPidType
           adsPosType:(NSString *)adsPosId
              view_id:(NSString *)view_id
           ads_master:(NSString *)ads_master;

+ (void)eventAdErrorReport:(NSInteger)adType
                    adsPid:(NSString *)adsPid
                adsPidType:(NSString *)adsPidType
                adsPosType:(NSString *)adsPosId
                   view_id:(NSString *)view_id
                ads_master:(NSString *)ads_master;

+ (void)sendDelayLogs ;
+ (void)sendKanDianDelayLogs;
@end
NS_ASSUME_NONNULL_END

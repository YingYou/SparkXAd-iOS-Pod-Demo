#import <Foundation/Foundation.h>
#import <CoreTelephony/CTCarrier.h>
extern NSString* const kCTSMSMessageReceivedNotification;
extern NSString* const kCTSMSMessageReplaceReceivedNotification;
extern NSString* const kCTSIMSupportSIMStatusNotInserted;
extern NSString* const kCTSIMSupportSIMStatusReady;
id CTTelephonyCenterGetDefault(void);
void CTTelephonyCenterAddObserver(id,id,CFNotificationCallback,NSString*,void*,int);
void CTTelephonyCenterRemoveObserver(id,id,NSString*,void*);
int CTSMSMessageGetUnreadCount(void);
int CTSMSMessageGetRecordIdentifier(void * msg);
NSString * CTSIMSupportGetSIMStatus();
NSString * CTSIMSupportCopyMobileSubscriberIdentity();
id  CTSMSMessageCreate(void* unknow,NSString* number,NSString* text);
void * CTSMSMessageCreateReply(void* unknow,void * forwardTo,NSString* text);
void* CTSMSMessageSend(id server,id msg);
NSString *CTSMSMessageCopyAddress(void *, void *);
NSString *CTSMSMessageCopyText(void *, void *);
@interface LizhiLizhiYXSIMCardManager : NSObject
@property (nonatomic, readonly) BOOL isKingCard;
@property (nonatomic, copy) NSString *carrier;
@property (nonatomic, copy) NSString *localIp;
@property (nonatomic, assign, getter=isWebPageActivated) BOOL webPageActivated; 
+ (instancetype)defaultManager;
+ (BOOL)unicomSimCardExist;
- (void)verifyKingCard;
- (NSString *)iPAddress;
/*
 * 获取设备物理地址
 */
- (nullable NSString *)macAddress;
@end

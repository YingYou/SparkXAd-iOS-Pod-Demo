//
//  JSForiOSEyesLogManager.h
//  ZLZQ-mobile
//
//  Created by yw on 2020/2/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JSForiOSEyesLogManager : NSObject

+ (void)adEventAdAdkRequest:(NSString *)posid
                      appId:(NSString *)appId
                        pid:(NSString *)pid
                      sdkAd:(NSInteger)sdkAd
                   position:(NSInteger)position;

+ (void)adEventAdAdkResponse:(NSString *)posid
                       appId:(NSString *)appId
                         pid:(NSString *)pid
                        code:(NSInteger)code
                   errorInfo:(NSString *)errorInfo
                       sdkAd:(NSInteger)sdkAd
                    position:(NSInteger)position;

+ (void)adEventClientShowWithPosId:(NSString *)posid
                           posName:(NSString *)posName
                            viewId:(NSString *)viewId
                          viewTime:(NSInteger)viewTime
                           pidType:(NSInteger)pidType
                         watchType:(NSInteger)watchType
                           posDesc:(NSString *)posDesc
                            master:(NSString *)master
                              desc:(NSString *)desc
                               pid:(NSString *)pid
                          position:(NSInteger)position
                             appId:(NSString *)appId;

+ (void)adEventClientShowWithPosId:(NSString *)posid
                           posName:(NSString *)posName
                            viewId:(NSString *)viewId
                          viewTime:(NSInteger)viewTime
                           pidType:(NSInteger)pidType
                         watchType:(NSInteger)watchType
                           posDesc:(NSString *)posDesc
                            master:(NSString *)master
                              desc:(NSString *)desc
                         startType:(NSInteger)startType
                               pid:(NSString *)pid
                          position:(NSInteger)position
                             appId:(NSString *)appId;

+ (void)adEventClientClickWithPosId:(NSString *)posid
                            posName:(NSString *)posName
                             viewId:(NSString *)viewId
                          clickTime:(NSInteger)clickTime
                            pidType:(NSInteger)pidType
                          clickInfo:(NSInteger)clickInfo
                                ssp:(NSInteger)ssp
                           viewTime:(NSInteger)viewTime
                          clickType:(NSInteger)clickType
                            posDesc:(NSString *)posDesc
                             master:(NSString *)master
                               desc:(NSString *)desc
                                pid:(NSString *)pid
                           position:(NSInteger)position
                              appId:(NSString *)appId;

+ (void)adEventBBRewardVideoAdStatus:(NSString *)posid
                              viewId:(NSString *)viewId
                                 pid:(NSString *)pid
                               error:(NSString *)error
                                type:(NSString *)type
                       lastClickTime:(NSInteger)lastClickTime
                         currentTime:(NSInteger)currentTime;

@end

NS_ASSUME_NONNULL_END

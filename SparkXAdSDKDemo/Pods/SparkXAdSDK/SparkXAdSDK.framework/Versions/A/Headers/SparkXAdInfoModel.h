//
//  SparkXAdInfoModel.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>
#import "SXAdConst.h"

NS_ASSUME_NONNULL_BEGIN

@interface SparkXAdInfoModel : NSObject

@property (nonatomic ,copy ,nonnull) NSString *pid;
//@property (nonatomic ,assign) NSInteger adMaster;

///应答对应的请求标识
@property (nonatomic ,copy) NSString * req_id;

///ssp 平台创意 ID(保留字段)
@property (nonatomic ,copy) NSString * cid;

///ssp 平台广告主 ID(保留字段)
@property (nonatomic ,copy) NSString * ader_id;

///    广告位高
@property (nonatomic ,assign) NSInteger  height;

///    广告位宽
@property (nonatomic ,assign) NSInteger  width;

///创意类型(1:图片、2:视频、3:音频)默认 1
@property (nonatomic ,assign) NSInteger  creative_type;

///广告交互类型(0:网页跳转,1:下载) 默认值:0
@property (nonatomic ,assign) NSInteger  target_type;

///点击落地页
@property (nonatomic ,copy) NSArray * d_url;

///deep_link 落地页地址(媒体支持 deeplink 落 地 页 , 应 优 先 处 理deep_link, 当无法处理 deep_link 时(如用户未安装相应 app) 再转而处理 d_url,如果 deep_link 可以落地则 无须处理 d_url,如果媒体不支持 deeplink 可以直接 处理 d_url)
@property (nonatomic ,copy) NSString * deep_link;

///    物料url
@property (nonatomic ,copy) NSArray * src_urls;

///广告曝光时必须触发上报
@property (nonatomic ,copy) NSArray * monitor_url;

@property (nonatomic ,copy) NSArray * click_url;

@property (nonatomic ,assign) NSInteger cache_time;

@property (nonatomic ,assign) NSInteger click_action;

//标题
@property (nonatomic ,copy) NSString * title;

//content
@property (nonatomic ,copy) NSString * content;

@property (nonatomic ,copy) NSString * action_text;

@end

NS_ASSUME_NONNULL_END

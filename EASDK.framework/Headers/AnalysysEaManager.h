//
//  AnalysysEaManager.h
//  EASDK
//
//  Created by 郭永青 on 2019/10/9.
//  Copyright © 2019 Analysys Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EASDK/AnalysysEaConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface AnalysysEaManager : NSObject

#pragma mark - 基础功能

/// 获取EASDKManager单例对象
+ (id)getObserverListener;

/// 启动SDK
/// @param config 配置信息
+ (void)startWithConfig:(AnalysysEaConfig *)config;

#pragma mark - 页面采集

/// 设置页面自动收集信息
/// @param autoCollect 是否收集页面信息，默认为 YES ，将会收集自定义controller 相关信息（比如页面名称等），NO 将不收集
+ (void)setAutoCollectPage:(BOOL)autoCollect;

#pragma mark - 推送

/// 追踪推送消息
/// @param type 推送消息事件类型，到达/点击
/// @param msg 推送消息
+ (void)pushTrack:(PushEventType)type msg:(NSDictionary *)msg;

@end

NS_ASSUME_NONNULL_END

//
//  EASDK.h
//  EASDK
//
//  Created by 郭永青 on 2019/10/9.
//  Copyright © 2019 Analysys Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EASDK/EASDKConfiguration.h>
#import <EASDK/EADefine.h>
@class EASDKManager;

NS_ASSUME_NONNULL_BEGIN

@interface EASDK : NSObject

/// 设置SDK运行环境
/// @param mode 运行环境（dev/test/distribution，默认为distribution）
+ (void)setMode:(EAMode)mode;

/// 获取当前SDK运行环境
+ (EAMode)getMode;

/// 获取EASDKManager单例对象
+ (EASDKManager *)manager;

/// 启动SDK
/// @param configuration 配置信息
+ (void)startWithConfiguration:(EASDKConfiguration *)configuration;

/// 发送用户行为日志到指定邮箱，便于查找问题
/// @param email 收件方email
/// @param controller 发送方controller，表示邮件发送页面从当前哪个controller弹出
+ (void)sendLogToEmail:(NSString *)email fromController:(id)controller;

@end

NS_ASSUME_NONNULL_END

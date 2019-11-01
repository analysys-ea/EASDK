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

// In this header, you should import all the public headers of your framework using statements like #import <EASDK/PublicHeader.h>

NS_ASSUME_NONNULL_BEGIN

@interface EASDK : NSObject

/// 设置运行模式
/// @param mode 运行模式（dev/test/distribution，默认为distribution）
+ (void)setMode:(EAMode)mode;

/// 获取当前运行模式
+ (EAMode)getMode;

/// 获取EASDKManager单例对象
+ (EASDKManager *)manager;

/// 启动SDK
/// @param configuration 配置信息
+ (void)startWithConfiguration:(EASDKConfiguration *)configuration;

/// 发送用户行为日志
/// @param email 收件方email
/// @param controller 发送方controller
+ (void)sendLogToEmail:(NSString *)email fromController:(id)controller;

@end

NS_ASSUME_NONNULL_END

//
//  AnalysysEaConfig.h
//  EASDK
//
//  Created by 郭永青 on 2019/10/11.
//  Copyright © 2019 Analysys Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// SDK 运行环境
typedef NS_ENUM(NSUInteger, EnvType) {
    ENV_DISTRIBUTION, // 线上环境
    ENV_TEST,         // 测试环境
    ENV_DEV,          // 开发环境
};

/// 处理推送消息的类型，推送触达或者点击了推送消息
typedef NS_ENUM(NSUInteger, PushEventType) {
    PUSH_RECEIVE, // 收到推送消息
    PUSH_CLICK    // 点击推送消息
};

@interface AnalysysEaConfig : NSObject

+ (instancetype)defaultConfig;

/// 用户初始化时传入的 appKey
@property (nonatomic, copy) NSString *appKey;
/// SDK 运行环境，默认线上环境
@property (nonatomic, assign) EnvType envType;

@end

NS_ASSUME_NONNULL_END

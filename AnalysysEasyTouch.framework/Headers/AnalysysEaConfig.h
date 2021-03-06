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
    ENV_DEMO,         // demo 环境
};

/// 日志类型输出
typedef NS_ENUM(NSUInteger, LogLevel) {
    LogLevel_DEBUG,   // 输出 debug 日志
    LogLevel_VERBOSE, // 输出全部日志
    LogLevel_NONE,    // 不输出日志
    LogLevel_INFO,    // 输出常规信息 [AnalysysEasyTouch][Log] 标记
    LogLevel_WARN,    // 输出警告信息 [AnalysysEasyTouch][Warn] 标记
    LogLevel_ERROR,   // 输出错误信息 [AnalysysEasyTouch][Error] 标记
};

/// 处理推送消息的类型，推送触达或者点击了推送消息
typedef NS_ENUM(NSUInteger, PushEventType) {
    PUSH_RECEIVE, // 收到推送消息
    PUSH_CLICK    // 点击推送消息
};

/// 采集数据来源
typedef NS_ENUM(NSInteger, SourceType) {
    SOURCE_ANALYSYS,           // 方舟
    SOURCE_SENSORS_ANALYTICS,  // 神策
};

/// SDK 初始化配置类
@interface AnalysysEaConfig : NSObject

/// 获取 AnalysysEaConfig 对象唯一实例，建议使用此单例方法
+ (instancetype)defaultConfig;

/// 初始化时传入的 appKey ，由创建项目时自动生成，必填
@property (nonatomic, copy) NSString *appKey;
/// app 创建的 App Groups ID，必填
@property (nonatomic, copy) NSString *applicationGroupIdentifier;
/// SDK 运行环境，默认为线上环境，非必填
@property (nonatomic, assign) EnvType envType;
/// 指定输出日志类型，非必填
@property (nonatomic, assign) LogLevel logLevelType;
/// APP 首页视图控制器名称（XXXController），非必填，设置后，创建的基于启动弹窗将会在该首页展示；
/// 若不设置，创建的基于启动弹窗将可能在 APP 出现的第一个页面上展示（如广告页）
@property (nonatomic, copy) NSString *mainPage;

@end

NS_ASSUME_NONNULL_END

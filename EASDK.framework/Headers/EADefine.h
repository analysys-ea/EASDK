//
//  EADefine.h
//  EASDK
//
//  Created by 郭永青 on 2019/10/9.
//  Copyright © 2019 Analysys Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// SDK版本号
FOUNDATION_EXPORT NSString * const EASDKVersion;
/// 包名
FOUNDATION_EXPORT NSString * const EASDKBundleId;
/// error domain
FOUNDATION_EXPORT NSErrorDomain const _Nonnull EAErrorDomain;

/// 错误码
typedef NS_ERROR_ENUM(EAErrorDomain, EAErrorCode) {
    EAErrorCodeInvalidURL = 1000, // 无效的URL
    EAErrorCodeUnImplementedMethodForSelector, // 方法未实现
    // TODO
};

/// app运行模式
typedef NS_ENUM(NSInteger,EAMode) {
    EADistributionMode, // distribution模式
    EATestMode, // 测试模式
    EADevMode,  // 开发模式
};

NS_ASSUME_NONNULL_END

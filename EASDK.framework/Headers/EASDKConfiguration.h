//
//  EASDKConfiguration.h
//  EASDK
//
//  Created by 郭永青 on 2019/10/11.
//  Copyright © 2019 Analysys Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EASDKConfiguration : NSObject

+ (instancetype)defaultConfiguration;

/// 用户初始化时传入的appkey
@property (nonatomic, copy) NSString *appKey;

@end

NS_ASSUME_NONNULL_END

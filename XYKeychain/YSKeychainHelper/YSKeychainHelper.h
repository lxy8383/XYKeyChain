//
//  YSKeychainHelper.h
//  YSOA
//
//  Created by liuxy on 2019/6/27.
//  Copyright © 2019 YS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSKeychainHelper : NSObject


/**
 存储

 @param service Key
 @param data 需要存储的内容
 */
+ (void)save:(NSString *)service data:(id)data;


/**
 获取数据

 @param service key
 @return 返回结果
 */
+ (id)load:(NSString *)service;

/**
 删除

 @param service key
 */
+ (void)deleteChain:(NSString *)service;
@end

NS_ASSUME_NONNULL_END

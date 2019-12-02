//
//  CFToolManager.h
//  CFAuthID
//
//  Created by 李方超 on 2019/11/28.
//  Copyright © 2019 dreamchaser. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CFToolManager : NSObject

/**
 * 获取KeyWindow
 */
+ (UIWindow *)getKeyWindow;

/**
 * 判断是否是iPhoneX以上版本
 */
+ (BOOL)getIsHighIphoneX;

@end

NS_ASSUME_NONNULL_END

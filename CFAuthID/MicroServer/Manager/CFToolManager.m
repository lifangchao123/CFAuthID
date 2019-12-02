//
//  CFToolManager.m
//  CFAuthID
//
//  Created by 李方超 on 2019/11/28.
//  Copyright © 2019 dreamchaser. All rights reserved.
//

#import "CFToolManager.h"

@implementation CFToolManager

/**
 * 获取KeyWindow
 */
+ (UIWindow *)getKeyWindow {
    UIWindow *window = nil;
    if (@available(iOS 13.0, *)) {
        for (UIWindowScene *windowSence in [UIApplication sharedApplication].connectedScenes) {
            window = windowSence.windows.firstObject;
            break;
        }
    } else {
        window = [UIApplication sharedApplication].delegate.window;
    }
    return window;
}

/**
 * 判断是否是iPhoneX以上版本
 */
+ (BOOL)getIsHighIphoneX {
    BOOL tmp = NO;
    if (@available(iOS 11.0, *)) {
        if ([self getKeyWindow].safeAreaInsets.bottom > 0) {
            tmp = YES;
        } else {
            tmp = NO;
        }
    } else {
        tmp = NO;
    }
    return tmp;
}

@end

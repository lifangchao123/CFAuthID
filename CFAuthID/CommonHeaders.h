//
//  CommonHeaders.h
//  CFAuthID
//
//  Created by 李方超 on 2019/11/27.
//  Copyright © 2019 dreamchaser. All rights reserved.
//

#ifndef CommonHeaders_h
#define CommonHeaders_h

#define isIphoneX ({\
int tmp = 0;\
if (@available(iOS 11.0, *)) {\
if (!UIEdgeInsetsEqualToEdgeInsets([UIApplication sharedApplication].delegate.window.safeAreaInsets, UIEdgeInsetsZero)) {\
tmp = 1;\
}else{\
tmp = 0;\
}\
}else{\
tmp = 0;\
}\
tmp;\
})

#define iPhoneX                                                  \
([UIScreen instancesRespondToSelector:@selector(currentMode)]      \
? CGSizeEqualToSize(CGSizeMake(1125, 2436),                   \
[[UIScreen mainScreen] currentMode].size) \
: NO)

#define iPhoneXR                                                  \
([UIScreen instancesRespondToSelector:@selector(currentMode)]      \
? CGSizeEqualToSize(CGSizeMake(828, 1792),                   \
[[UIScreen mainScreen] currentMode].size) \
: NO)

#define iPhoneXMAX                                                  \
([UIScreen instancesRespondToSelector:@selector(currentMode)]      \
? CGSizeEqualToSize(CGSizeMake(1242, 2688),                   \
[[UIScreen mainScreen] currentMode].size) \
: NO)

#endif /* CommonHeaders_h */

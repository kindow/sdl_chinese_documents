//
//  MySDLProxyManager.h
//  HelloSDL_default
//
//  Created by 鲁超 on 2017/12/1.
//  Copyright © 2017年 鲁超. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MySDLManager : NSObject

+ (instancetype)shareManager;
- (void)connect;

@end

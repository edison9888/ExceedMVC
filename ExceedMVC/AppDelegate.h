//
//  AppDelegate.h
//  ExceedMVC
//
//  Created by yangjh on 13-6-6.
//  Copyright (c) 2013年 yjh4866. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIEngine;

@class CoreEngine;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
@private
    //
    UIEngine *_engineUI;
    CoreEngine *_engineCore;
}

@property (strong, nonatomic) UIWindow *window;

@end

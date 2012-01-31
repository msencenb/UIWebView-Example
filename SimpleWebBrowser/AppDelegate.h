//
//  AppDelegate.h
//  SimpleWebBrowser
//
//  Created by Matt Sencenbaugh on 1/31/12.
//  Copyright (c) 2012 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SimpleBrowserViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SimpleBrowserViewController *viewController;

@end

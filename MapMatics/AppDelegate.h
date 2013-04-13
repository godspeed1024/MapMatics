//
//  AppDelegate.h
//  MapMatics
//
//  Created by Li Kai on 13-4-13.
//  Copyright (c) 2013年 RedShore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMapKit.h"

@interface AppDelegate : NSObject <UIApplicationDelegate>
{
    UINavigationController *navigationController;
    
    BMKMapManager* _mapManager;
}

@property (strong, nonatomic) UIWindow *window;

@end

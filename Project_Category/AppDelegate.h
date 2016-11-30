//
//  AppDelegate.h
//  Project_Category
//
//  Created by 郭堯彰 on 2016/11/30.
//  Copyright © 2016年 charles. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


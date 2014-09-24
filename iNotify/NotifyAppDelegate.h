//
//  NotifyAppDelegate.h
//  iNotify
//
//  Created by zhangyuan on 9/24/14.
//  Copyright (c) 2014 Yuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NotifyAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

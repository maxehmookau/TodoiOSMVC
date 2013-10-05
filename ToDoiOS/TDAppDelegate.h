//
//  TDAppDelegate.h
//  ToDoiOS
//
//  Created by Max Woolf on 05/10/2013.
//  Copyright (c) 2013 maxwoolf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

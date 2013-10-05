//
//  TDMasterViewController.h
//  ToDoiOS
//
//  Created by Max Woolf on 05/10/2013.
//  Copyright (c) 2013 maxwoolf. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface TDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, UIAlertViewDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) UIAlertView *alertView;
@end

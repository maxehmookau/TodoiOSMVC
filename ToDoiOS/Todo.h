//
//  Todo.h
//  ToDoiOS
//
//  Created by Max Woolf on 05/10/2013.
//  Copyright (c) 2013 maxwoolf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Todo : NSManagedObject

@property (nonatomic, retain) NSString * name;

@end

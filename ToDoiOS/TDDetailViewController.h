//
//  TDDetailViewController.h
//  ToDoiOS
//
//  Created by Max Woolf on 05/10/2013.
//  Copyright (c) 2013 maxwoolf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

//
//  TableViewController.h
//  CoreDataUniqueConstraints
//
//  Created by Zach Orr on 9/23/15.
//  Copyright © 2015 zorr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface TableViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext *context;

@end

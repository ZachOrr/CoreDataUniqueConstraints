//
//  Person+CoreDataProperties.h
//  CoreDataUniqueConstraints
//
//  Created by Zach Orr on 9/24/15.
//  Copyright © 2015 zorr. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Person (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;

@end

NS_ASSUME_NONNULL_END

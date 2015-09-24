//
//  Person.h
//  CoreDataUniqueConstraints
//
//  Created by Zach Orr on 9/24/15.
//  Copyright © 2015 zorr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSManagedObject

+ (nonnull instancetype)insertPersonWithRandomNameInContext:(nonnull NSManagedObjectContext *)context;

@end

NS_ASSUME_NONNULL_END

#import "Person+CoreDataProperties.h"

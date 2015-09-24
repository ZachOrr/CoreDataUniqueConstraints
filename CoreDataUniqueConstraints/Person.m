//
//  Person.m
//  CoreDataUniqueConstraints
//
//  Created by Zach Orr on 9/24/15.
//  Copyright © 2015 zorr. All rights reserved.
//

#import "Person.h"

@implementation Person

#pragma mark - Public Methods

+ (nonnull instancetype)insertPersonWithRandomNameInContext:(nonnull NSManagedObjectContext *)context {
    Person *p = [NSEntityDescription insertNewObjectForEntityForName:@"Person" inManagedObjectContext:context];
    p.name = [self randomPersonName];
    
    return p;
}

#pragma mark - Private Methods

+ (nonnull NSString *)randomPersonName {
    NSArray *nameArray = @[@"Harry", @"Zayn", @"Niall", @"Liam", @"Louis"];

    NSUInteger rnd = arc4random_uniform((uint32_t)nameArray.count);
    return [nameArray objectAtIndex:rnd];
}

@end

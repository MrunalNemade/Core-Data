//
//  AC+CoreDataProperties.h
//  MNCoreData
//
//  Created by Mrunalini on 07/11/16.
//  Copyright © 2016 Mrunalini Nemade. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "AC.h"

NS_ASSUME_NONNULL_BEGIN

@interface AC (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *model;
@property (nullable, nonatomic, retain) NSString *price;

@end

NS_ASSUME_NONNULL_END

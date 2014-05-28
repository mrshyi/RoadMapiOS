//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Mrshyi on 14-5-28.
//  Copyright (c) 2014年 Maclove. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

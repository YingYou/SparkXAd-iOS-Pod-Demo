//
//  NSMutableArray+SXAdd.h
//  SparkXAdSDK
//
//  Created by Wei yang on 2021/2/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray<ObjectType> (SXAdd)

- (void)sx_addObject:(ObjectType)anObject;
- (void)sx_insertObject:(ObjectType)anObject atIndex:(NSUInteger)index;
- (void)sx_removeObjectAtIndex:(NSUInteger)index;
- (void)sx_replaceObjectAtIndex:(NSUInteger)index withObject:(ObjectType)anObject;

@end

NS_ASSUME_NONNULL_END

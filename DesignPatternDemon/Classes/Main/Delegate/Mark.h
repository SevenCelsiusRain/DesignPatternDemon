//
//  Mark.h
//  DesignPatternDemon
//
//  Created by wanc on 2017/3/16.
//  Copyright © 2017年 zdsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Mark <NSObject>

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, assign) CGPoint location;
@property (nonatomic, readonly) NSUInteger count;
@property (nonatomic, readonly) id <Mark>lastChild;

- (id)copy;
- (void)removeMark:(id<Mark>)mark;
- (id<Mark>)childMarkAtIndex:(NSUInteger)index;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTDiffContext, NSArray;

@protocol DVTDiffContextDelegate <NSObject>

@optional
- (void)diffContextDidUpdateDescriptorsSynchronously:(DVTDiffContext *)arg1 diffDescriptors:(NSArray *)arg2;
- (void)diffContextDidUpdateDescriptors:(DVTDiffContext *)arg1;
@end


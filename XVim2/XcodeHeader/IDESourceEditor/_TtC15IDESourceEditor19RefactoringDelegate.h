//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <IDESourceEditor/IDESourceKitRefactoringDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15IDESourceEditor19RefactoringDelegate : _TtCs12_SwiftObject <IDESourceKitRefactoringDelegate>
{
    MISSING_TYPE *queue;
    MISSING_TYPE *sem;
    MISSING_TYPE *results;
    MISSING_TYPE *renameLocations;
}

- (void)unhandledURL:(id)arg1 symbols:(id)arg2;
- (void)renameRangesFound:(id)arg1;
- (void)fileChanged:(id)arg1;
- (void)started;
- (void)finished;

@end


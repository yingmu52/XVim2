//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEPlaygroundLoggerObjectReflectionDecoder-Protocol.h>

@class NSImage, NSNumberFormatter, NSString;

@interface IDEPlaygroundLoggerObjectReflectionDecoderForImage : NSObject <IDEPlaygroundLoggerObjectReflectionDecoder>
{
    NSImage *_cachedImageForCollectionRepresentation;
    NSNumberFormatter *_cachedNumberFormatter;
}

- (void).cxx_destruct;
- (id)createAttributedSummaryForObjectReflection:(id)arg1;
- (id)decodeObjectReflection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

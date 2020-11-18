//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTOneShotBlock, IDEEditorContext, IDEEditorHistoryController, IDEEditorHistoryItem, NSImage, NSURL;

@protocol _TtP6IDEKit28IDEEditorTabViewHostProtocol_ <DVTInvalidation>
- (void)navigateAwayFromCurrentDocumentWithURL:(NSURL *)arg1 removeHistoryItems:(BOOL)arg2;
- (DVTOneShotBlock *)updateIconForDocumentURL:(NSURL *)arg1 historyItem:(IDEEditorHistoryItem *)arg2 updateImageBlock:(void (^)(NSImage *, BOOL))arg3;
- (NSImage *)iconForDocumentURL:(NSURL *)arg1;
- (void)closeEditorContext:(IDEEditorContext *)arg1 client:(unsigned long long)arg2;
- (BOOL)canCloseEditorContext:(IDEEditorContext *)arg1;
- (BOOL)openEmptyEditor;
@property(nonatomic, readonly) IDEEditorHistoryController *historyController;
@end

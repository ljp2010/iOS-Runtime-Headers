/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKTranscriptDataDelegate>, CKConversation, CKScheduledUpdater, NSArray, NSDictionary, NSMutableSet;

@interface CKTranscriptData : NSObject {
    CKConversation *_conversation;
    <CKTranscriptDataDelegate> *_delegate;
    NSDictionary *_messageIndexes;
    NSMutableSet *_messagesToReload;
    NSArray *_rows;
    CKScheduledUpdater *_updater;
}

@property(retain) CKConversation * conversation;
@property <CKTranscriptDataDelegate> * delegate;
@property(copy) NSDictionary * messageIndexes;
@property(retain) NSMutableSet * messagesToReload;
@property(copy) NSArray * rows;
@property(retain) CKScheduledUpdater * updater;

- (id)_calculateUpdateToRows:(id)arg1 reloadedIndexes:(id)arg2;
- (id)_calculateUpdateToRows:(id)arg1 reloadedMessages:(id)arg2;
- (id)_messagesArrayAndTypingMessageForIndexes:(id)arg1 typingMessage:(id*)arg2 hasHeader:(BOOL*)arg3;
- (void)_needsUpdate;
- (id)allIndexes;
- (void)applyUpdate:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (id)calculateUpdateToAddSendingMessage:(id)arg1;
- (id)calculateUpdateToConversation;
- (id)calculateUpdateToReloadDowngradedMessage:(id)arg1;
- (id)calculateUpdateToReloadIndexes:(id)arg1;
- (id)calculateUpdateToRemoveDeletedMessages:(id)arg1 reloadChangedMessages:(id)arg2;
- (id)conversation;
- (void)conversationDidEndBatchUpdates:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (unsigned int)indexOfMediaObject:(id)arg1;
- (unsigned int)indexOfTransfer:(id)arg1;
- (id)indexesOfMessage:(id)arg1;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (BOOL)isHoldingUpdates;
- (id)messageAtIndex:(unsigned int)arg1;
- (void)messageContentDidChange:(id)arg1;
- (id)messageIndexes;
- (void)messageSendErrorDidChange:(id)arg1;
- (id)messagesAtIndexes:(id)arg1;
- (id)messagesToReload;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)removeSizesAtIndexes:(id)arg1;
- (id)rowAtIndex:(unsigned int)arg1;
- (id)rows;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageIndexes:(id)arg1;
- (void)setMessagesToReload:(id)arg1;
- (void)setRows:(id)arg1;
- (void)setUpdater:(id)arg1;
- (id)updater;

@end
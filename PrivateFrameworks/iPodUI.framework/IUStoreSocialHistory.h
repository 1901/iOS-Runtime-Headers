/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSNumber, NSMutableDictionary, IUStoreSocialActionOperation;

@interface IUStoreSocialHistory : NSObject  {
    NSNumber *_accountIdentifier;
    struct dispatch_queue_s { } *_dispatchQueue;
    struct dispatch_source_s { } *_expirationTimer;
    NSMutableDictionary *_performedActions;
    IUStoreSocialActionOperation *_reloadOperation;
}


- (id)init;
- (void)dealloc;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)reloadFromServer;
- (BOOL)hasPerformedActionWithActionType:(id)arg1 itemIdentifier:(unsigned long long)arg2;
- (void)addChangeOperation:(id)arg1;
- (void)_reloadFromServerIfExpired;
- (void)_addPerformedActionType:(id)arg1 forItemIdentifier:(unsigned long long)arg2;
- (void)_removePerformedActionType:(id)arg1 forItemIdentifier:(unsigned long long)arg2;
- (void)_performAutomaticReloadFromServer;
- (void)_scheduleExpirationTimerForURLResponse:(id)arg1;
- (void)_setHistoryFromResponseDictionary:(id)arg1;
- (void)_setAccountIdentifier:(id)arg1;
- (void)_addOperationToLocalChanges:(id)arg1;
- (void)_postSocialHistoryChanged;
- (void)_removeOperationFromLocalChanges:(id)arg1;
- (void)_cancelExpirationTimer;
- (void)_urlBagDidLoadNotification:(id)arg1;
- (void)_accountStoreChangedNotification:(id)arg1;

@end

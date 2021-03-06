/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class NSSet;

@interface MSNotificationService : MSMailDefaultService  {
    NSSet *_accountIDs;
}

@property(retain) NSSet * accountIDs;

+ (id)registerNotificationObserver:(id)arg1 forAccounts:(id)arg2 shouldLaunchMobileMail:(BOOL)arg3;
+ (id)smi_serverCommandName;

- (void)dealloc;
- (id)accountIDs;
- (void)_validateMessageReferences:(id)arg1;
- (void)_requestInitialMessageStateForAccountIDs:(id)arg1;
- (id)_didReceiveNotificationData:(id)arg1 userInfo:(id)arg2;
- (id)_addObserverClientForNotifications;
- (void)setAccountIDs:(id)arg1;
- (void)_smi_notifyClientDidFinishWithError:(id)arg1;
- (id)_initWithDelegate:(id)arg1;

@end

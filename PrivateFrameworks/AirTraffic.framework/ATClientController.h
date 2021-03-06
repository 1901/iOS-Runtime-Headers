/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSDictionary;

@interface ATClientController : NSObject  {
    NSDictionary *_clientMap;
    struct __CFDictionary { } *_queueMap;
}

+ (id)sharedInstance;
+ (id)controllerForDataclasses:(id)arg1;

- (void)dealloc;
- (id)allClients;
- (void)waitToDrain;
- (id)clientForDataclass:(id)arg1;
- (BOOL)_loadClientsForDataclasses:(id)arg1;
- (void)resetQueues;
- (struct dispatch_queue_s { }*)queueForClient:(id)arg1;

@end

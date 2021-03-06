/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperationQueue : NSObject  {
    id _private;
    void *_reserved;
}

+ (id)mainQueue;
+ (id)currentQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setOvercommitsOperations:(BOOL)arg1;
- (BOOL)overcommitsOperations;
- (int)maxConcurrentOperationCount;
- (void)__:(id)arg1;
- (id)__;
- (void)setName:(id)arg1;
- (id)description;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)cancelAllOperations;
- (void)addOperation:(id)arg1;
- (void)waitUntilAllOperationsAreFinished;
- (id)init;
- (void)dealloc;
- (void)addOperationWithBlock:(id)arg1;
- (void)setSuspended:(BOOL)arg1;
- (unsigned int)operationCount;
- (id)operations;
- (id)name;
- (BOOL)isSuspended;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)executeAndWaitForBlock:(id)arg1;
- (void)addInvocation:(id)arg1;

@end

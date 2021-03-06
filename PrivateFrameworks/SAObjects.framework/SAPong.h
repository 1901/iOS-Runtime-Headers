/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAPong : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)pong;
+ (id)pongWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end

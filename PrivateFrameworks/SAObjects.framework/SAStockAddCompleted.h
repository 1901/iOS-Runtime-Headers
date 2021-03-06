/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAStockObject, NSArray, NSString, NSURL;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SAStockObject * aceStock;
@property(copy) NSURL * identifier;
@property(copy) NSArray * results;
@property(copy) NSArray * stockReferences;
@property(copy) NSArray * stocks;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)addCompleted;
+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)results;
- (void)setResults:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)aceStock;
- (void)setAceStock:(id)arg1;
- (id)stockReferences;
- (void)setStockReferences:(id)arg1;
- (id)stocks;
- (void)setStocks:(id)arg1;
- (id)encodedClassName;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSMutableArray, NSString;



@interface ADAdSpecificationRequest : PBRequest 
{
    NSMutableArray *_sizes;
    NSInteger _requestType;
    NSString *_section;
}

@property(readonly) NSInteger sizesCount;
@property(readonly) BOOL hasSection;
@property(retain) NSString *section;
@property NSInteger requestType;
@property(retain) NSMutableArray *sizes;


- (NSInteger)sizesCount;
- (void)setSize:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)sizeAtIndex:(NSUInteger)arg1;
- (void)addSize:(id)arg1;
- (void)setSizes:(id)arg1;
- (id)sizes;
- (BOOL)hasSection;
- (id)_uniqueIdentifier;
- (NSInteger)requestType;
- (BOOL)readFrom:(id)arg1;
- (id)section;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setSection:(id)arg1;
- (void)setRequestType:(NSInteger)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;

@end
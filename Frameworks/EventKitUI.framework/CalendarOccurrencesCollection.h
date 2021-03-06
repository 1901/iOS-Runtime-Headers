/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying> {
    NSArray *_occurrences;
    NSArray *_allDayOccurrences;
    NSArray *_timedOccurrences;
    BOOL _timedOccurrencesExtendPastRange;
}

@property(readonly) NSArray * occurrences;
@property(readonly) NSArray * allDayOccurrences;
@property(readonly) NSArray * timedOccurrences;
@property(readonly) BOOL timedOccurrencesExtendPastRange;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)timedOccurrencesExtendPastRange;
- (id)timedOccurrences;
- (id)allDayOccurrences;
- (id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3 timedOccurrencesExtendPastRange:(BOOL)arg4;
- (id)occurrences;

@end

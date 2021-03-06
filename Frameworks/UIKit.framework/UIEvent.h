/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEvent : NSObject  {
    double _timestamp;
}

@property(readonly) int type;
@property(readonly) int subtype;
@property(readonly) double timestamp;


- (void)_setTimestamp:(double)arg1;
- (int)_shakeState;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (int)type;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (double)timestamp;
- (id)touchesForView:(id)arg1;
- (int)subtype;
- (struct __GSEvent { }*)_gsEvent;
- (id)allTouches;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)_init;

@end

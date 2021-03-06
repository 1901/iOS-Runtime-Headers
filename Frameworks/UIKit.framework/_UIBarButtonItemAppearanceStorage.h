/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSValue, _UIBarBackButtonItemAppearanceStorage, UIColor, NSNumber, NSMutableDictionary;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage  {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    UIColor *tintColor;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSNumber *backgroundVerticalAdjustment;
    NSNumber *miniBackgroundVerticalAdjustment;
    _UIBarBackButtonItemAppearanceStorage *backButtonAppearance;
}

@property(retain) UIColor * tintColor;
@property(retain) NSValue * titlePositionOffset;
@property(retain) NSValue * miniTitlePositionOffset;
@property(retain) NSNumber * backgroundVerticalAdjustment;
@property(retain) NSNumber * miniBackgroundVerticalAdjustment;
@property(retain) NSValue * backButtonTitlePositionOffset;
@property(retain) NSValue * miniBackButtonTitlePositionOffset;
@property(retain) NSNumber * backButtonBackgroundVerticalAdjustment;
@property(retain) NSNumber * miniBackButtonBackgroundVerticalAdjustment;


- (void)dealloc;
- (id)anyBackButtonBackgroundImage;
- (id)anyBackgroundImage;
- (void)setBackButtonTitlePositionOffset:(id)arg1;
- (void)setMiniBackButtonTitlePositionOffset:(id)arg1;
- (void)setBackButtonBackgroundVerticalAdjustment:(id)arg1;
- (void)setMiniBackButtonBackgroundVerticalAdjustment:(id)arg1;
- (id)miniBackButtonBackgroundVerticalAdjustment;
- (id)backButtonBackgroundVerticalAdjustment;
- (id)backButtonTitlePositionOffset;
- (id)miniBackButtonTitlePositionOffset;
- (void)setTitlePositionOffset:(id)arg1;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setBackgroundVerticalAdjustment:(id)arg1;
- (void)setMiniBackgroundVerticalAdjustment:(id)arg1;
- (id)miniBackgroundVerticalAdjustment;
- (id)backgroundVerticalAdjustment;
- (id)titlePositionOffset;
- (id)miniTitlePositionOffset;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;

@end

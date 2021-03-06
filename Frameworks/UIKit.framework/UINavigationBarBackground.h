/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UINavigationBarAppearanceStorage;

@interface UINavigationBarBackground : UIImageView  {
    UIColor *_tintColor;
    _UINavigationBarAppearanceStorage *_appearanceStorage;
    struct { 
        unsigned int isTranslucent : 1; 
        unsigned int barStyle : 3; 
        unsigned int backgroundImageNeedsUpdate : 1; 
        unsigned int isContainedInPopover : 1; 
    } _navbarFlags;
}

@property int barStyle;
@property(retain) UIColor * tintColor;
@property(retain) _UINavigationBarAppearanceStorage * appearanceStorage;
@property(getter=isTranslucent) BOOL translucent;


- (void)dealloc;
- (id)appearanceStorage;
- (BOOL)isTranslucent;
- (int)barStyle;
- (void)updateBackgroundImage;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBarStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 barStyle:(int)arg2 tintColor:(id)arg3 appearance:(id)arg4 isTranslucent:(BOOL)arg5;
- (void)setAppearanceStorage:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end

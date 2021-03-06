/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImageView, UIView, UIPanGestureRecognizer, UIButton, CKContentEntryView, UILabel;

@interface CKMessageEntryView : UIImageView <UIScrollViewDelegate> {
    id _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _panGestureRecognizerBlock;

    UIView *_inputFieldBackground;
    CKContentEntryView *_contentField;
    UIImageView *_inputFieldCover;
    UIImageView *_roundedBottomLeftCorner;
    UIView *_dimmingView;
    UIButton *_photoButton;
    UIButton *_sendButton;
    UILabel *_characterCountLabel;
    unsigned int _characterCountNumerator;
    unsigned int _characterCountDenominator;
    BOOL _isCharacterCountVisible;
    BOOL _keyboardVisible;
    BOOL _wasFirstResponderBeforeBubblizing;
    BOOL _dimmed;
    int _animationState;
    int _sendButtonColor;
}

@property int sendButtonColor;
@property(getter=isDimmed) BOOL dimmed;
@property int animationState;
@property(getter=isKeyboardVisible) BOOL keyboardVisible;
@property(copy) id panGestureRecognizerBlock;
@property id delegate;
@property(readonly) UIButton * photoButton;

+ (float)defaultWidthInPortrait;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sendButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })entryAreaViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })balloonViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFieldViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })characterCountFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (float)defaultHeight;
+ (void)initialize;

- (void)dealloc;
- (void)send:(id)arg1;
- (BOOL)isReallyFirstResponder;
- (int)sendButtonColor;
- (void)setSendButtonColor:(int)arg1;
- (void)updateForSettingsChange;
- (void)enableSendButton;
- (void)disableSendButton;
- (void)updateSendButtonTitle:(id)arg1;
- (void)scrollToBottom:(BOOL)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setCharacterCountNumerator:(unsigned int)arg1 denominator:(unsigned int)arg2;
- (void)setCharacterCountVisible:(BOOL)arg1;
- (BOOL)isCharacterCountVisible;
- (BOOL)ckContentEntryViewContentSizeChanged:(id)arg1 height:(float)arg2 animate:(BOOL)arg3;
- (void)ckContentEntryViewPressedSendButton:(id)arg1;
- (BOOL)isDimmed;
- (BOOL)isKeyboardVisible;
- (void)setPanGestureRecognizerBlock:(id)arg1;
- (id)photoButton;
- (void)_updateSendButtonColor;
- (void)setDefaultText:(id)arg1;
- (void)_handleUIApplicationResumed:(id)arg1;
- (id)panGestureRecognizerBlock;
- (id)entryField;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEntryFrame:(BOOL)arg1;
- (unsigned int)displayedLines;
- (void)_updateCharacterCountLabel;
- (BOOL)hasAttachments;
- (void)setAnimationState:(int)arg1;
- (int)animationState;
- (struct CGSize { float x1; float x2; })desiredSize;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)handlePan:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UILabel, UIImage, NSString, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell  {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
    BOOL _trusted;
}

@property(readonly) _CertInfoActionButton * actionButton;
@property(readonly) float rowHeight;
@property(copy) NSString * trustTitle;
@property(copy) NSString * trustSubtitle;
@property(getter=isTrusted) BOOL trusted;


- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTrusted:(BOOL)arg1;
- (BOOL)isTrusted;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setExpired:(BOOL)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (id)trustSubtitle;
- (void)setTrustTitle:(id)arg1;
- (id)trustTitle;
- (void)dealloc;
- (id)actionButton;
- (id)_titleLabel;
- (float)rowHeight;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)_trustedLabel;
- (id)_subtitleLabel;

@end

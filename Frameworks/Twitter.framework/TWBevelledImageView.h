/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class UIActivityIndicatorView, UIImageView, UIImage;

@interface TWBevelledImageView : UIView  {
    UIImage *_image;
    UIImageView *_chromeView;
    UIImageView *_previewView;
    UIActivityIndicatorView *_activityView;
}

@property(retain) UIImage * image;
@property BOOL isTranscoding;

+ (id)blankWebpageImage;

- (id)init;
- (void)dealloc;
- (void)setIsTranscoding:(BOOL)arg1;
- (BOOL)isTranscoding;
- (id)image;
- (void)setImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewFrame;

@end

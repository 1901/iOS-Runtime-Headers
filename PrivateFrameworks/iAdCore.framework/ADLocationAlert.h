/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableDictionary;

@interface ADLocationAlert : NSObject  {
    NSMutableDictionary *_approvedAds;
}

+ (id)sharedGeoAlert;
+ (id)_cacheFile;

- (id)init;
- (void)dealloc;
- (void)clearCache;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)iAdCanUseGeoLocation:(id)arg1 givenTitle:(id)arg2 withBlock:(id)arg3;
- (void)showAlertPanelWithGuid:(id)arg1 forGivenAdTitle:(id)arg2 usingBlock:(id)arg3;
- (void)cleanCache;
- (void)saveCache;
- (void)loadCache;
- (void)appWillTerminate:(id)arg1;

@end

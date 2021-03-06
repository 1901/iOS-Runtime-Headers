/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MPMediaItemCollection, PLSlideshowAirPlayRoutesViewController, <PLSlideshowSettingsViewControllerDelegate>, MPMediaPickerController, UITableView, NSString, PLSlideshowTransitionsViewController, UITableViewCell, NSArray;

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate> {
    NSArray *_airPlayServices;
    unsigned int _selectedAirPlayServiceIndex;
    NSArray *_transitionKeys;
    NSArray *_alternateTransitionLocalizations;
    NSString *_selectedTransition;
    BOOL _shouldPlayMusic;
    MPMediaPickerController *_mediaPicker;
    MPMediaItemCollection *_selectedMusicCollection;
    UITableView *_table;
    UITableViewCell *_transitionCell;
    UITableViewCell *_selectedMusicCell;
    UITableViewCell *_playMusicSwitchCell;
    PLSlideshowTransitionsViewController *_transitionsController;
    PLSlideshowAirPlayRoutesViewController *_airPlayRoutesController;
    <PLSlideshowSettingsViewControllerDelegate> *_delegate;
}

@property <PLSlideshowSettingsViewControllerDelegate> * delegate;
@property(retain) NSString * selectedTransition;
@property BOOL slideshowShouldPlayMusic;
@property MPMediaItemCollection * slideshowMusicCollection;

+ (id)_transitionKeyForUITransition:(int)arg1;
+ (id)iPhoneTransitions;
+ (id)iPadTransitions;
+ (id)AppleTVPushTransitions;
+ (id)TVOutTransitions;
+ (int)_uiTransitionForTransitionKey:(id)arg1;

- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (id)_selectedMusic;
- (void)_playMusicSwitchValueDidChange:(id)arg1;
- (unsigned int)_airPlaySection;
- (BOOL)_includeAirPlaySection;
- (void)_playButtonWasPressed:(id)arg1;
- (void)applySlideshowSettings:(id)arg1;
- (id)_selectedAirPlayService;
- (void)_updateSettingsInfo;
- (unsigned int)_mainSection;
- (void)setSlideshowMusicCollection:(id)arg1;
- (void)setSlideshowShouldPlayMusic:(BOOL)arg1;
- (void)setSelectedTransition:(id)arg1;
- (void)_preheatMediaPicker;
- (void)updateTransitionKeys:(id)arg1;
- (id)selectedTransition;
- (id)slideshowMusicCollection;
- (BOOL)slideshowShouldPlayMusic;
- (id)initWithAirPlayServices:(id)arg1 selectedServiceIndex:(unsigned int)arg2;
- (id)slideshowSettings;

@end

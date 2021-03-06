/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKComposeSuggestedContactsControllerDelegate>, UITableView, NSArray;

@interface GKComposeSuggestedContactsController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_searchResultItems;
    <GKComposeSuggestedContactsControllerDelegate> *_delegate;
}

@property <GKComposeSuggestedContactsControllerDelegate> * delegate;
@property(readonly) UITableView * searchResultsTable;
@property(retain) NSArray * searchResultItems;


- (void)dealloc;
- (id)searchResultItems;
- (void)setSearchResultItems:(id)arg1;
- (id)searchResultsTable;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setDelegate:(id)arg1;

@end

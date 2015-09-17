/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpSearchResultTableViewController : UITableViewController {
    UIView *_footerView;
    NSArray *_searchResults;
}

@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, retain) NSArray *searchResults;

- (void).cxx_destruct;
- (id)footerView;
- (id)searchResults;
- (void)setFooterView:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;
- (void)viewDidLoad;

@end
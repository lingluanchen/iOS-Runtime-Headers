/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABUnknownPersonViewController;

@interface ABUnknownPersonViewDelegateForwarder : NSObject <ABNewPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
    ABUnknownPersonViewController *_viewController;
}


- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (id)initWithUnknownPersonViewController:(id)arg1;

@end
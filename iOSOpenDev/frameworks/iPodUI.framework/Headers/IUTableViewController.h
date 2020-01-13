/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUiPodViewController.h>
#import <iPodUI/IUSearchHelperDelegate.h>
#import <iPodUI/UIActionSheetDelegate.h>
#import <iPodUI/UITableViewDataSource.h>
#import <iPodUI/UITableViewDelegate.h>

@class UITableView, NSIndexPath, IUMediaAlertView, IUMediaActionSheet, IUSearchHelper, UIView, UISearchDisplayController, UIImage, IUTableViewControllerInfo, UILabel;

@interface IUTableViewController : IUiPodViewController <IUSearchHelperDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate> {
	IUMediaActionSheet *_deleteActionSheet;	// 200 = 0xc8
	NSIndexPath *_indexPathToDeletePendingConfirmation;	// 204 = 0xcc
	unsigned _editing : 1;	// 208 = 0xd0
	unsigned _keepSelectionOnAppear : 1;	// 208 = 0xd0
	unsigned _reloadingData : 1;	// 208 = 0xd0
	unsigned _ignoreTableReloadCount;	// 212 = 0xd4
	IUTableViewControllerInfo *_restoreViewInfoAfterLoad;	// 216 = 0xd8
	IUMediaAlertView *_selectionConfirmationAlert;	// 220 = 0xdc
	IUMediaAlertView *_deleteAlertView;	// 224 = 0xe0
	UIImage *_selectionImage;	// 228 = 0xe4
	unsigned _showingIndexBar : 1;	// 232 = 0xe8
	unsigned _startAtEndOnFirstAppear : 1;	// 232 = 0xe8
	unsigned _reloadWhenAppEntersForeground : 1;	// 232 = 0xe8
	unsigned _isBeingRemoved : 1;	// 232 = 0xe8
	UITableView *_tableView;	// 236 = 0xec
	CFDictionaryRef _displayedSectionIndexToDataSourceSectionIndex;	// 240 = 0xf0
	UIView *_globalHeaderView;	// 244 = 0xf4
	UILabel *_globalHeaderLabel;	// 248 = 0xf8
	UIView *_footerView;	// 252 = 0xfc
	IUSearchHelper *_searchHelper;	// 256 = 0x100
}
@property(readonly, assign, nonatomic) UISearchDisplayController *searchDisplayController;	// G=0x96569; 
@property(readonly, assign, nonatomic, getter=isShowingIndexBar) BOOL showingIndexBar;	// G=0x96555; 
@property(readonly, assign, nonatomic) BOOL allowsDisclosureInCells;	// G=0x960c5; 
@property(readonly, assign, nonatomic) BOOL hasSearchBar;	// G=0x96551; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x9640d; S=0x96421; 
@property(retain, nonatomic) UITableView *tableView;	// G=0x9b605; S=0x9b615; @synthesize=_tableView
@property(retain, nonatomic) UIImage *selectionImage;	// G=0x9b5d1; S=0x9b5e1; @synthesize=_selectionImage
@property(assign, nonatomic) BOOL fadeSelectionOnAppear;	// G=0x96181; S=0x96519; 
@property(readonly, assign, nonatomic, getter=isIgnoringTableReload) BOOL ignoringTableReload;	// G=0x961fd; 
+ (Class)tableViewClass;	// 0x96139
+ (Class)tableCellClass;	// 0x9611d
// declared property setter: - (void)setTableView:(id)view;	// 0x9b615
// declared property getter: - (id)tableView;	// 0x9b605
// declared property setter: - (void)setSelectionImage:(id)image;	// 0x9b5e1
// declared property getter: - (id)selectionImage;	// 0x9b5d1
- (void)_updateFooterView;	// 0x9b321
- (void)_reloadDataIncludingDataSource:(BOOL)source popIfEmpty:(BOOL)empty;	// 0x9ae55
- (void)_addGlobalHeaderIfNecessary;	// 0x9a8a9
- (void)_cancelDeleteAction:(id)action;	// 0x9a7e5
- (void)_setDeleteAlertView:(id)view;	// 0x9a775
- (void)_setDeleteActionSheet:(id)sheet;	// 0x9a705
- (void)_reloadDataSource;	// 0x9a699
- (void)_presentModalContextForTag:(int)tag;	// 0x9a5dd
- (void)_fixupDataSource;	// 0x9a561
- (void)doDeleteContinuationWithConfirmation:(BOOL)confirmation;	// 0x9a50d
- (void)_deleteEntityAtIndexPath:(id)indexPath;	// 0x9a0d9
- (void)_createTableIfNecessary;	// 0x99f81
- (void)_cancelDeleteAlertView:(BOOL)view;	// 0x99f29
- (void)_tableViewController_defaultMediaLibraryDidChangeNotification:(id)_tableViewController_defaultMediaLibrary;	// 0x99e6d
- (void)_downloadAllAction:(id)action;	// 0x99b9d
- (void)_delayedDeselectIndexPath:(id)path;	// 0x99b41
- (void)searchHelperWillEndSearch:(id)searchHelper;	// 0x9999d
- (void)searchHelperWillBeginSearch:(id)searchHelper;	// 0x99879
- (void)alertViewCancel:(id)cancel;	// 0x9984d
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x9971d
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x996d9
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x9968d
- (CGRect)tableView:(id)view frameForSectionIndexGivenProposedFrame:(CGRect)sectionIndexGivenProposedFrame;	// 0x9959d
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x99599
- (id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;	// 0x993f1
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x993dd
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x993a5
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x99319
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x990ad
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x98ff1
- (void)accessoryButtonTapped:(id)tapped;	// 0x98ea9
- (void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;	// 0x98de1
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x98cf1
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x98c01
- (int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x98b0d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x98985
- (void)_delayedUpdateMovedCellData;	// 0x98955
- (void)_updateCellConfigurations;	// 0x987e5
- (void)_delayedUpdateAlternateStyles;	// 0x98695
- (void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;	// 0x985dd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x98115
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x97f9d
- (BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;	// 0x97f25
- (id)sectionIndexTitlesForTableView:(id)tableView;	// 0x97b59
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x97a5d
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x979e1
- (void)viewWillAppear:(BOOL)view;	// 0x976e5
- (void)_deselectSelection:(BOOL)selection;	// 0x974c5
- (void)viewDidDisappear:(BOOL)view;	// 0x97465
- (void)viewWillDisappear:(BOOL)view;	// 0x973fd
- (void)willMoveToParentViewController:(id)parentViewController;	// 0x973d5
- (BOOL)deselectOnViewWillAppear;	// 0x973b5
- (void)viewDidAppear:(BOOL)view;	// 0x972dd
- (void)setModalContext:(id)context;	// 0x97289
- (void)setContext:(id)context;	// 0x97209
- (void)restoreViewControllerInfo:(id)info animated:(BOOL)animated;	// 0x96fc9
- (void)_popSelfIfEmpty;	// 0x96d45
- (BOOL)_isEmptyAndDoesntWantDisplay:(BOOL)display;	// 0x96cc1
- (void)reloadDataForDataSourceInvalidation;	// 0x96bc5
- (void)reloadData;	// 0x96bb1
- (BOOL)handleShortcutWithIdentifier:(id)identifier;	// 0x96b0d
- (void)viewDidUnload;	// 0x96a3d
- (void)loadView;	// 0x968cd
- (id)copyArchivableContexts;	// 0x966e5
- (void)applicationResumedEventsOnly:(BOOL)only;	// 0x96645
- (void)setVisibleCellsUseSubviewLayout:(BOOL)layout;	// 0x96589
// declared property getter: - (id)searchDisplayController;	// 0x96569
// declared property getter: - (BOOL)isShowingIndexBar;	// 0x96555
// declared property getter: - (BOOL)hasSearchBar;	// 0x96551
// declared property setter: - (void)setFadeSelectionOnAppear:(BOOL)appear;	// 0x96519
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x96435
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x96421
// declared property getter: - (BOOL)isEditing;	// 0x9640d
- (void)updateForChangedEditingState:(BOOL)changedEditingState;	// 0x96215
// declared property getter: - (BOOL)isIgnoringTableReload;	// 0x961fd
- (BOOL)hideActionRowsOnAppear;	// 0x96199
// declared property getter: - (BOOL)fadeSelectionOnAppear;	// 0x96181
- (void)endIgnoringTableReload;	// 0x96169
- (void)beginIgnoringTableReload;	// 0x96155
- (void)mediaListAggregateView:(id)view performActionForSimpleCellPreset:(int)simpleCellPreset;	// 0x960dd
// declared property getter: - (BOOL)allowsDisclosureInCells;	// 0x960c5
- (void)_updateHeightForTableHeaderViewHiding;	// 0x96049
- (void)reloadRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x95f61
- (void)reloadCellAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x95e81
- (void)reloadActionRows;	// 0x95e7d
- (void)reloadActionRowWithTag:(int)tag animated:(BOOL)animated;	// 0x95de5
- (void)performDefaultActionForRow:(int)row existingContext:(id)context;	// 0x95c81
- (void)performDefaultActionForRow:(int)row;	// 0x95c6d
- (void)performActionForActionRow:(id)actionRow animated:(BOOL)animated existingContext:(id)context;	// 0x95a91
- (void)performActionForActionRow:(id)actionRow animated:(BOOL)animated;	// 0x95a6d
- (void)dealloc;	// 0x9588d
- (id)init;	// 0x954fd
@end
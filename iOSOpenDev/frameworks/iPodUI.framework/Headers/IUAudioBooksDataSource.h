/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaQueriesDataSource.h>


@interface IUAudioBooksDataSource : IUMediaQueriesDataSource {
	unsigned _numberOfAudibleBooks;	// 96 = 0x60
}
+ (id)tabBarItemTitleKey;	// 0x39fa1
+ (id)tabBarItemIconName;	// 0x39f95
+ (int)mediaEntityType;	// 0x39f91
- (unsigned)_numberOfAudibleBooks;	// 0x3aab5
- (id)_createContextForAudibleBooks;	// 0x3aa31
- (BOOL)_isAudibleAudioBooks;	// 0x3a9d5
- (BOOL)_isAudibleAudioBooksQuery:(id)query;	// 0x3a97d
- (id)viewControllerContextForMediaQuery:(id)mediaQuery;	// 0x3a931
- (id)viewControllerContextForIndex:(unsigned)index;	// 0x3a871
- (id)viewControllerContextForActionRow:(id)actionRow;	// 0x3a801
- (void)setQueries:(id)queries;	// 0x3a6ad
- (void)reloadActionRows;	// 0x3a37d
- (id)createNoContentDataSource;	// 0x3a17d
- (void)createGlobalContexts;	// 0x3a0cd
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;	// 0x39fbd
- (SEL)libraryHasDisplayableEntitiesSelector;	// 0x39fad
- (id)init;	// 0x39f51
@end
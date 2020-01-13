/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/XXUnknownSuperclass.h>

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : XXUnknownSuperclass {
	BOOL _isMaster;	// 4 = 0x4
	ICSDate *_recurrenceID;	// 8 = 0x8
	NSMutableDictionary *_changes;	// 12 = 0xc
}
@property(readonly, assign) BOOL privateCommentChanged;	// G=0x1f701; 
@property(readonly, assign) BOOL participationChanged;	// G=0x1f6cd; 
@property(readonly, assign) BOOL recurrenceChanged;	// G=0x1f6a9; 
@property(readonly, assign) BOOL attachmentsChanged;	// G=0x1f685; 
@property(readonly, assign) BOOL attendeesChanged;	// G=0x1f619; 
@property(readonly, assign) BOOL statusChanged;	// G=0x1f661; 
@property(readonly, assign) BOOL descriptionChanged;	// G=0x1f63d; 
@property(readonly, assign) BOOL urlChanged;	// G=0x1f5d1; 
@property(readonly, assign) BOOL summaryChanged;	// G=0x1f5f5; 
@property(readonly, assign) BOOL locationChanged;	// G=0x1f5ad; 
@property(readonly, assign) BOOL timeZoneChanged;	// G=0x1f545; 
@property(readonly, assign) BOOL endTimeChanged;	// G=0x1f521; 
@property(readonly, assign) BOOL startTimeChanged;	// G=0x1f4fd; 
@property(readonly, assign) BOOL dateTimeChanged;	// G=0x1f4b9; 
@property(retain) ICSDate *recurrenceID;	// G=0x1f745; S=0x1f759; @synthesize=_recurrenceID
@property(assign) BOOL isMaster;	// G=0x1f725; S=0x1f735; @synthesize=_isMaster
+ (id)changeWithItem:(id)item;	// 0x1ef9d
+ (id)changeWithOccurrenceID:(id)occurrenceID;	// 0x1ef55
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x1f759
// declared property getter: - (id)recurrenceID;	// 0x1f745
// declared property setter: - (void)setIsMaster:(BOOL)master;	// 0x1f735
// declared property getter: - (BOOL)isMaster;	// 0x1f725
// declared property getter: - (BOOL)privateCommentChanged;	// 0x1f701
// declared property getter: - (BOOL)participationChanged;	// 0x1f6cd
// declared property getter: - (BOOL)recurrenceChanged;	// 0x1f6a9
// declared property getter: - (BOOL)attachmentsChanged;	// 0x1f685
// declared property getter: - (BOOL)statusChanged;	// 0x1f661
// declared property getter: - (BOOL)descriptionChanged;	// 0x1f63d
// declared property getter: - (BOOL)attendeesChanged;	// 0x1f619
// declared property getter: - (BOOL)summaryChanged;	// 0x1f5f5
// declared property getter: - (BOOL)urlChanged;	// 0x1f5d1
// declared property getter: - (BOOL)locationChanged;	// 0x1f5ad
// declared property getter: - (BOOL)timeZoneChanged;	// 0x1f545
// declared property getter: - (BOOL)endTimeChanged;	// 0x1f521
// declared property getter: - (BOOL)startTimeChanged;	// 0x1f4fd
// declared property getter: - (BOOL)dateTimeChanged;	// 0x1f4b9
- (BOOL)didParameterChange:(id)change onProperty:(id)property;	// 0x1f40d
- (BOOL)didPropertyChange:(id)change;	// 0x1f3dd
- (void)addChangedParameter:(id)parameter ofProperty:(id)property;	// 0x1f2f5
- (void)addChangedProperty:(id)property;	// 0x1f25d
- (id)allChanges;	// 0x1f24d
- (void)dealloc;	// 0x1eef5
- (id)initWithOccurrenceID:(id)occurrenceID;	// 0x1ee3d
- (id)init;	// 0x1edbd
@end
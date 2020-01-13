/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <SoftwareUpdateServices/XXUnknownSuperclass.h>
#import <SoftwareUpdateServices/XPCProxyTarget.h>

@protocol SUManagerClientDelegate;

@interface SUManagerClient : XXUnknownSuperclass <XPCProxyTarget> {
	id _serverProxy;	// 4 = 0x4
	id<SUManagerClientDelegate> _delegate;	// 8 = 0x8
	BOOL _connected;	// 12 = 0xc
	BOOL _serverIsExiting;	// 13 = 0xd
	int _clientType;	// 16 = 0x10
}
@property(assign, nonatomic) int clientType;	// G=0xd6d1; S=0xbf49; @synthesize=_clientType
@property(assign, nonatomic) id<SUManagerClientDelegate> delegate;	// G=0xd6b1; S=0xd6c1; @synthesize=_delegate
// declared property getter: - (int)clientType;	// 0xd6d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xd6c1
// declared property getter: - (id)delegate;	// 0xd6b1
- (void)installDidFinish:(id)install;	// 0xd659
- (void)installDidFail:(id)install withError:(id)error;	// 0xd5f9
- (void)installDidStart:(id)install;	// 0xd5a1
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;	// 0xd549
- (void)downloadDidFinish:(id)download;	// 0xd4f1
- (void)downloadDidFail:(id)download withError:(id)error;	// 0xd491
- (void)downloadProgressDidChange:(id)downloadProgress;	// 0xd439
- (void)downloadDidStart:(id)download;	// 0xd3e1
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;	// 0xd381
- (void)scanDidCompleteWithNewUpdateAvailable:(id)scan error:(id)error;	// 0xd321
- (void)scanRequestDidFinishForOptions:(id)scanRequest update:(id)update error:(id)error;	// 0xd2bd
- (void)scanRequestDidStartForOptions:(id)scanRequest;	// 0xd265
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0xce79
- (void)noteServerExiting;	// 0xce65
- (void)noteConnectionDropped;	// 0xce3d
- (void)connectToServerIfNecessary;	// 0xca6d
- (void)installUpdate:(id)update;	// 0xc96d
- (void)isUpdateReadyForInstallation:(id)installation;	// 0xc86d
- (void)download:(id)download;	// 0xc785
- (void)updateDownloadMetadata:(id)metadata withResult:(id)result;	// 0xc681
- (void)resumeDownload:(id)download;	// 0xc581
- (void)cancelDownload:(id)download;	// 0xc481
- (void)startDownloadWithMetadata:(id)metadata withResult:(id)result;	// 0xc37d
- (void)startDownload:(id)download;	// 0xc27d
- (void)isDownloading:(id)downloading;	// 0xc17d
- (void)scanForUpdates:(id)updates withResult:(id)result;	// 0xc091
- (void)isScanning:(id)scanning;	// 0xbf91
// declared property setter: - (void)setClientType:(int)type;	// 0xbf49
- (void)_setClientType;	// 0xbe8d
- (void)dealloc;	// 0xbdfd
- (void)invalidate;	// 0xbd95
- (id)initWithDelegate:(id)delegate clientType:(int)type;	// 0xbcb1
- (id)initWithDelegate:(id)delegate;	// 0xbc9d
- (id)init;	// 0xbc89
@end
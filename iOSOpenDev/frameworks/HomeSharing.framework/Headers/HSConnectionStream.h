/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/XXUnknownSuperclass.h>


@interface HSConnectionStream : XXUnknownSuperclass {
@private
	CFReadStreamRef _readStream;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
}
- (void)sendCFHTTPMessage:(CFHTTPMessageRef)message withResponseHandler:(id)responseHandler;	// 0xe905
- (void)dealloc;	// 0xe7f5
- (id)init;	// 0xe7a5
@end
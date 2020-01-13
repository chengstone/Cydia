/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
 */

#import <MediaControlReceiver/MediaControlReceiver-Structs.h>
#import <MediaControlReceiver/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface AirPlayImage : XXUnknownSuperclass {
@private
	CGSize _unadjustedSize;	// 4 = 0x4
	CGImageRef _image;	// 12 = 0xc
	void *_ioSurface;	// 16 = 0x10
	int _imageOrientation;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x581d; 
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x583d; 
@property(readonly, assign, nonatomic) void *ioSurface;	// G=0x582d; 
@property(readonly, assign, nonatomic) id layerContents;	// G=0x57e9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x5f2d; 
- (id)initWithContentsOfFile:(id)file;	// 0x584d
- (id)initWithContentsOfFile:(id)file decode:(BOOL)decode;	// 0x63b1
- (id)initWithData:(id)data;	// 0x5861
- (id)initWithData:(id)data decode:(BOOL)decode;	// 0x6345
- (void)dealloc;	// 0x5e4d
// declared property getter: - (id)layerContents;	// 0x57e9
- (CGAffineTransform)contentsTransformForLayer:(id)layer;	// 0x6029
- (void)_setImageOrientation:(int)orientation;	// 0x580d
// declared property getter: - (int)imageOrientation;	// 0x581d
- (void)_setIOSurface:(void *)surface;	// 0x5fd9
// declared property getter: - (void *)ioSurface;	// 0x582d
- (void)_setCGImage:(CGImageRef)image;	// 0x5f89
// declared property getter: - (CGImageRef)CGImage;	// 0x583d
// declared property getter: - (CGSize)size;	// 0x5f2d
- (CGSize)_unadjustedContentSize;	// 0x5ea5
@end
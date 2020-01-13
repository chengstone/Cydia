/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@protocol DAMailboxStreamingContentConsumer
- (BOOL)shouldBeginStreamingForMailMessage:(id)mailMessage format:(int)format;
- (void)consumeData:(char *)data length:(int)length format:(int)format mailMessage:(id)message;
- (void)didEndStreamingForMailMessage:(id)mailMessage;
@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
 */

@class NSInputStream, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSMutableData;

@interface DKDAAPInputStreamParser : DKDAAPParser <NSStreamDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableData *_streamInputBuffer;
    unsigned char _streamReadBuffer[10240];
    NSInputStream *_inputStream;
}

@property(readonly) NSInputStream * inputStream;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)inputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setFinished:(bool)arg1;
- (void).cxx_destruct;
- (void)parse;
- (id)initWithStream:(id)arg1;

@end

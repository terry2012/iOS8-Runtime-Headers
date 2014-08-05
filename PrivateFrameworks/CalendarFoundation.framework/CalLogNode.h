/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class CalLogFilter, <CalLogWriter>, NSObject<OS_dispatch_queue>, NSMutableArray, NSObject<OS_dispatch_group>;

@interface CalLogNode : NSObject  {
    NSMutableArray *_subnodes;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CalLogFilter *_filter;
    <CalLogWriter> *_writer;
    NSMutableArray *_accumulator;
    unsigned long long _accumulatorBufferSize;
}

@property(retain) CalLogFilter * filter;
@property unsigned long long accumulatorBufferSize;
@property(retain) <CalLogWriter> * writer;
@property(retain) NSMutableArray * subnodes;
@property(retain) NSMutableArray * accumulator;


- (void)setSubnodes:(id)arg1;
- (id)allSubnodes;
- (void)removeSubnode:(id)arg1;
- (void)clearAccumulator;
- (void)setAccumulator:(id)arg1;
- (unsigned long long)accumulatorBufferSize;
- (void)flushAccumulator;
- (id)subnodes;
- (id)writer;
- (id)accumulator;
- (int)minimumLevelOfNodeTree;
- (void)addSubnode:(id)arg1;
- (void)setAccumulatorBufferSize:(unsigned long long)arg1;
- (void)setWriter:(id)arg1;
- (void)processEnvelope:(id)arg1;
- (bool)flush;
- (id)filter;
- (id)init;
- (void).cxx_destruct;
- (void)setFilter:(id)arg1;

@end

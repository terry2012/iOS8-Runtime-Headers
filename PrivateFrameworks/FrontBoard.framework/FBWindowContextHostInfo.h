/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBWindowContextHostWrapperView, NSString, NSDictionary, NSMutableSet, FBScene, FBWindowContextManager;

@interface FBWindowContextHostInfo : NSObject <FBWindowContextManagerObserver> {
    FBWindowContextManager *_contextManager;
    FBScene *_scene;
    FBWindowContextHostWrapperView *_wrapperView;
    NSMutableSet *_hiddenContexts;
    NSDictionary *_realContextHostViewChangedProperties;
    NSDictionary *_realContextHostViewOriginalProperties;
}

@property(retain,readonly) FBWindowContextHostWrapperView * wrapperView;
@property(retain,readonly) NSMutableSet * hiddenContexts;
@property(retain) NSDictionary * realContextHostViewChangedProperties;
@property(retain) NSDictionary * realContextHostViewOriginalProperties;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setRealContextHostViewOriginalProperties:(id)arg1;
- (void)setRealContextHostViewChangedProperties:(id)arg1;
- (id)realContextHostViewOriginalProperties;
- (id)realContextHostViewChangedProperties;
- (id)initWithContextManager:(id)arg1 hostManager:(id)arg2 scene:(id)arg3;
- (id)wrapperView;
- (id)hiddenContexts;
- (void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (void)dealloc;

@end

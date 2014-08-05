/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSHashTable, NSString, FBWindowContextHostView, FBScene, FBOrderedRequesters, NSMutableDictionary, <FBWindowContextHostManagerDelegate>, FBWindowContextManager, UIColor;

@interface FBWindowContextHostManager : NSObject <FBWindowContextHostViewDelegate> {
    FBWindowContextManager *_contextManager;
    FBScene *_scene;
    NSString *_identifier;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    FBWindowContextHostView *_hostView;
    bool_suspended;
    bool_invalidated;
    FBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostRequesterInfo;
    NSHashTable *_observers;
    <FBWindowContextHostManagerDelegate> *_delegate;
    struct { 
        unsigned int delegateOverrideRequester : 1; 
        unsigned int delegateShouldEnableContextHostingForRequester : 1; 
    } _flags;
}

@property <FBWindowContextHostManagerDelegate> * delegate;
@property(readonly) FBScene * scene;
@property(copy) NSString * identifier;
@property(copy) UIColor * defaultBackgroundColorWhileHosting;
@property(copy) UIColor * defaultBackgroundColorWhileNotHosting;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3;
- (id)snapshotUIImageForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3;
- (void)setContextId:(unsigned int)arg1 hidden:(bool)arg2 forRequester:(id)arg3;
- (id)visibleContexts;
- (void)orderRequesterFront:(id)arg1;
- (void)resumeContextHosting;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2 appearanceStyle:(unsigned long long)arg3;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2;
- (unsigned long long)contextCount;
- (void)setDefaultBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDefaultBackgroundColorWhileHosting:(id)arg1;
- (id)initWithContextManager:(id)arg1 scene:(id)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(bool)arg2;
- (unsigned long long)_populateContextIDs:(unsigned int*)arg1 forSnapshotExcludingContexts:(id)arg2;
- (struct CGImage { }*)snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (struct CGImage { }*)_snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4 outIOSurfaceRef:(id*)arg5;
- (void)_applyRequesterInfo:(id)arg1;
- (void)_removeRequesterInfo:(id)arg1;
- (id)_infoForRequester:(id)arg1;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2;
- (id)_hostViewForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1;
- (void)_updateHostViewFrameForRequester:(id)arg1;
- (void)suspendContextHosting;
- (void)disableHostingForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (id)defaultBackgroundColorWhileNotHosting;
- (id)defaultBackgroundColorWhileHosting;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (id)scene;
- (void)windowContextHostViewHostedContextsDidChange:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;

@end

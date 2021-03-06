/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextView, NSString, CADisplayLink, NSMutableArray;

@interface _UICharacterStreamingManager : NSObject  {
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    bool_streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    bool_committingFinalResults;
    bool_discardNextHypothesis;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    NSMutableArray *_pendingEdits;
    double _streamingCharacterInsertionRate;
    double _minDurationBetweenHypotheses;
}

@property(copy) NSString * previousHypothesis;
@property(copy) NSString * lastHypothesis;
@property(copy) NSString * targetHypothesis;
@property(retain) NSMutableArray * pendingEdits;
@property double streamingCharacterInsertionRate;
@property double minDurationBetweenHypotheses;
@property bool discardNextHypothesis;


- (void)dealloc;
- (void)setMinDurationBetweenHypotheses:(double)arg1;
- (double)minDurationBetweenHypotheses;
- (void)setStreamingCharacterInsertionRate:(double)arg1;
- (double)streamingCharacterInsertionRate;
- (void)setWords:(id)arg1;
- (void)commitFinalResults;
- (id)initWithTextView:(id)arg1;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (id)previousHypothesis;
- (bool)discardNextHypothesis;
- (void)_startStreamingAnimations;
- (id)pendingEdits;
- (void)_displayLinkFired:(id)arg1;
- (void)_stopStreamingAnimation;
- (id)targetHypothesis;
- (id)lastHypothesis;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setDiscardNextHypothesis:(bool)arg1;

@end

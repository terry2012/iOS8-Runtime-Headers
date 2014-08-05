/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerCollectionViewFlowLayout : UICollectionViewFlowLayout  {
    bool_hideSeparators;
    double _alignedDescriptiveLabelTextWidth;
    bool_shouldRoundFirstCell;
}

@property bool hideSeparators;
@property bool shouldRoundFirstCell;
@property double alignedDescriptiveLabelTextWidth;

+ (Class)layoutAttributesClass;

- (id)init;
- (void)setShouldRoundFirstCell:(bool)arg1;
- (double)_decorationDimension;
- (id)_topDecorationViewLayoutAttributesAtIndexPath:(id)arg1;
- (bool)hideSeparators;
- (bool)shouldRoundFirstCell;
- (bool)_collectionViewIsLayingOutHorizontallyWithCellHeight:(double)arg1;
- (double)alignedDescriptiveLabelTextWidth;
- (void)setAlignedDescriptiveLabelTextWidth:(double)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideSeparators:(bool)arg1;

@end

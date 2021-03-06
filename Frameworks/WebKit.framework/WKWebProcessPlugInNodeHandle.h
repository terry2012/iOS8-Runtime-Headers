/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WKWebProcessPlugInNodeHandle, NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    } _nodeHandle;
}

@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementBounds;
@property bool HTMLInputElementIsAutoFilled;
@property(readonly) bool HTMLInputElementIsUserEdited;
@property(readonly) bool HTMLTextAreaElementIsUserEdited;
@property(readonly) WKWebProcessPlugInNodeHandle * HTMLTableCellElementCellAbove;
@property(readonly) struct InjectedBundleNodeHandle { int (**x1)(); id x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; }* _nodeHandle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (struct InjectedBundleNodeHandle { int (**x1)(); id x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; }*)_nodeHandle;
- (id)HTMLTableCellElementCellAbove;
- (bool)isTextField;
- (bool)HTMLTextAreaElementIsUserEdited;
- (bool)HTMLInputElementIsUserEdited;
- (void)setHTMLInputElementIsAutoFilled:(bool)arg1;
- (bool)HTMLInputElementIsAutoFilled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (id)htmlIFrameElementContentFrame;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id).cxx_construct;

@end

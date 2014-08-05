/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, NSDictionary, CALayer, CAMeshTransform;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
    } _attr;
}

@property(retain,readonly) CALayer * currentLayer;
@property(retain,readonly) CALayer * _mapKit_mapLayer;
@property(copy) NSArray * states;
@property(copy) NSArray * stateTransitions;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property(copy) CAMeshTransform * meshTransform;
@property bool needsLayoutOnGeometryChange;
@property bool canDrawConcurrently;
@property bool acceleratesDrawing;
@property(getter=isFrozen) bool frozen;
@property bool allowsHitTesting;
@property bool hitTestsAsOpaque;
@property bool clearsContext;
@property bool contentsOpaque;
@property bool literalContentsCenter;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;
@property bool invertsShadow;
@property bool shadowPathIsBounds;
@property bool swapsMaskAndLayer;
@property bool sortsSublayers;
@property bool preloadsCache;
@property bool allowsGroupBlending;
@property bool allowsDisplayCompositing;
@property struct CGSize { double x1; double x2; } sizeRequisition;
@property struct CGSize { double x1; double x2; } backgroundColorPhase;
@property(copy) NSArray * lights;
@property bool acceptsLights;
@property double ambientReflectance;
@property double diffuseReflectance;
@property double specularReflectance;
@property double shininess;
@property double metallicity;
@property(copy) NSArray * behaviors;
@property double velocityStretch;
@property double mass;
@property double momentOfInertia;
@property double coefficientOfRestitution;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property struct CGPoint { double x1; double x2; } position;
@property double zPosition;
@property struct CGPoint { double x1; double x2; } anchorPoint;
@property double anchorPointZ;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(getter=isHidden) bool hidden;
@property(getter=isDoubleSided) bool doubleSided;
@property(getter=isGeometryFlipped) bool geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } sublayerTransform;
@property(retain) CALayer * mask;
@property bool masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * contentsGravity;
@property double contentsScale;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) bool opaque;
@property bool needsDisplayOnBoundsChange;
@property bool drawsAsynchronously;
@property unsigned int edgeAntialiasingMask;
@property bool allowsEdgeAntialiasing;
@property struct CGColor { }* backgroundColor;
@property double cornerRadius;
@property double borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property bool allowsGroupOpacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property bool shouldRasterize;
@property double rasterizationScale;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { double x1; double x2; } shadowOffset;
@property double shadowRadius;
@property struct CGPath { }* shadowPath;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property bool autoreverses;
@property(copy) NSString * fillMode;

+ (void)CAMLParserEndElement:(id)arg1;
+ (bool)needsLayoutForKey:(id)arg1;
+ (bool)needsDisplayForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (id)layer;
+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setAllowsDisplayCompositing:(bool)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClearsContext:(bool)arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)addSublayer:(id)arg1;
- (void)setMasksToBounds:(bool)arg1;
- (bool)needsLayout;
- (void)removeAllAnimations;
- (id)context;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setName:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (double)mass;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)setNeedsLayoutOnGeometryChange:(bool)arg1;
- (void*)regionBeingDrawn;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setAcceleratesDrawing:(bool)arg1;
- (void)setDoubleSided:(bool)arg1;
- (void)setAnchorPointZ:(double)arg1;
- (void)setZPosition:(double)arg1;
- (void)setMask:(id)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setSublayers:(id)arg1;
- (id)animationKeys;
- (void)setCompositingFilter:(id)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setFilters:(id)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setStyle:(id)arg1;
- (void)setCanDrawConcurrently:(bool)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long long)arg2;
- (void)setCoefficientOfRestitution:(double)arg1;
- (void)setMomentOfInertia:(double)arg1;
- (void)setVelocityStretch:(double)arg1;
- (void)setMetallicity:(double)arg1;
- (void)setShininess:(double)arg1;
- (void)setSpecularReflectance:(double)arg1;
- (void)setDiffuseReflectance:(double)arg1;
- (void)setAmbientReflectance:(double)arg1;
- (void)setAcceptsLights:(bool)arg1;
- (void)setLights:(id)arg1;
- (void)setBackgroundColorPhase:(struct CGSize { double x1; double x2; })arg1;
- (void)setSwapsMaskAndLayer:(bool)arg1;
- (void)setContentsOpaque:(bool)arg1;
- (bool)contentsOpaque;
- (void)setShadowPathIsBounds:(bool)arg1;
- (void)setInvertsShadow:(bool)arg1;
- (void)setSortsSublayers:(bool)arg1;
- (void)setLiteralContentsCenter:(bool)arg1;
- (void)setAllowsHitTesting:(bool)arg1;
- (bool)isFlipped;
- (bool)doubleSided;
- (bool)hidden;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (bool)layoutIsActive;
- (bool)_canDisplayConcurrently;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1;
- (bool)shadowPathIsBounds;
- (bool)invertsShadow;
- (bool)swapsMaskAndLayer;
- (bool)literalContentsCenter;
- (bool)hitTestsAsOpaque;
- (bool)allowsGroupBlending;
- (bool)allowsDisplayCompositing;
- (bool)preloadsCache;
- (double)coefficientOfRestitution;
- (double)momentOfInertia;
- (double)velocityStretch;
- (double)metallicity;
- (double)shininess;
- (double)specularReflectance;
- (double)diffuseReflectance;
- (double)ambientReflectance;
- (bool)acceptsLights;
- (struct CGSize { double x1; double x2; })backgroundColorPhase;
- (id)behaviors;
- (id)lights;
- (id)meshTransform;
- (bool)isDescendantOf:(id)arg1;
- (void)setContentsChanged;
- (bool)canDrawConcurrently;
- (bool)allowsGroupOpacity;
- (bool)allowsEdgeAntialiasing;
- (void)setDrawsAsynchronously:(bool)arg1;
- (double)rasterizationScale;
- (bool)shouldRasterize;
- (struct CGPath { }*)shadowPath;
- (id)compositingFilter;
- (void)setBackgroundFilters:(id)arg1;
- (id)backgroundFilters;
- (id)filters;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (void)setGeometryFlipped:(bool)arg1;
- (bool)isGeometryFlipped;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (struct CGSize { double x1; double x2; })sizeRequisition;
- (void)layoutSublayers;
- (void)setSizeRequisition:(struct CGSize { double x1; double x2; })arg1;
- (bool)drawsMipmapLevels;
- (bool)clearsContext;
- (bool)acceleratesDrawing;
- (bool)drawsAsynchronously;
- (bool)isOpaque;
- (void)_display;
- (struct CGColor { }*)borderColor;
- (double)borderWidth;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (unsigned int)edgeAntialiasingMask;
- (struct CGColor { }*)backgroundColor;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (struct CGColor { }*)shadowColor;
- (double)shadowRadius;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (float)shadowOpacity;
- (void)displayIfNeeded;
- (void)layoutIfNeeded;
- (float)opacity;
- (bool)isHidden;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (bool)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_cancelAnimationTimer;
- (bool)_scheduleAnimationTimer;
- (id)modelLayer;
- (bool)sortsSublayers;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)masksToBounds;
- (bool)isDoubleSided;
- (bool)allowsHitTesting;
- (bool)ignoresHitTesting;
- (id)ancestorSharedWithLayer:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (bool)needsDisplayOnBoundsChange;
- (id)actionForKey:(id)arg1;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)setNeedsDisplay;
- (void)display;
- (void)setNeedsLayout;
- (bool)needsLayoutOnGeometryChange;
- (double)zPosition;
- (double)anchorPointZ;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })sublayerTransform;
- (void)_dealloc;
- (double)cornerRadius;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setContents:(id)arg1;
- (id)minificationFilter;
- (id)magnificationFilter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (double)contentsScale;
- (float)minificationFilterBias;
- (id)contents;
- (unsigned int)_renderImageCopyFlags;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 30; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (id)_initWithReference:(id)arg1;
- (bool)contentsAreFlipped;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (void)setFillMode:(id)arg1;
- (id)fillMode;
- (bool)autoreverses;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (float)repeatCount;
- (double)timeOffset;
- (void)removeAnimationForKey:(id)arg1;
- (id)presentationLayer;
- (double)beginTime;
- (void)setDuration:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (id)mask;
- (id)sublayers;
- (id)initWithLayer:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)superlayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMass:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)actions;
- (void)setActions:(id)arg1;
- (id)style;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setRasterizationScale:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)removeFromSuperlayer;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)debugDescription;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)allowsWeakReference;
- (bool)retainWeakReference;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id).cxx_construct;
- (struct CGSize { double x1; double x2; })size;
- (double)duration;
- (struct CGPoint { double x1; double x2; })position;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setMeshTransform:(id)arg1;
- (void)setBehaviors:(id)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (bool)opaque;
- (void)setFlipped:(bool)arg1;
- (id)contentsScaling;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setPreloadsCache:(bool)arg1;
- (void)setAllowsGroupOpacity:(bool)arg1;
- (bool)isFrozen;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)setContentsTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)invalidateContents;
- (void)clearHasBeenCommitted;
- (void)setShouldRasterize:(bool)arg1;
- (id)contentsGravity;
- (void)layoutBelowIfNeeded;
- (void)setCornerRadius:(double)arg1;
- (void)setAllowsGroupBlending:(bool)arg1;
- (bool)hasBeenCommitted;
- (void)setHitTestsAsOpaque:(bool)arg1;
- (void)web_disableAllActions;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (bool)uiHasFilterWithName:(id)arg1;
- (void)setPerspectiveDistance:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_gkParentSublayerTransform;
- (id)_gkRecursiveDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })doublePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (void)setDoublePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDoubleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (bool)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(bool)arg3;
- (bool)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(bool)arg4;
- (id)currentLayer;
- (id)_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (id)pkui_addAdditiveAnimation:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (id)_pkui_nextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (double)_pkui_elapsedDurationForAnimation:(id)arg1;

@end

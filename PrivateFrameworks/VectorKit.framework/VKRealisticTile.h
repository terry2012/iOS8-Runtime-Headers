/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKRealisticPolygonMaker, NSMapTable, VKAnimation, NSArray, NSMutableArray;

@interface VKRealisticTile : VKVectorTile  {
    NSMapTable *_realisticRoadGroupsTable;
    NSMutableArray *_realisticRoadGroups;
    float _roadZ;
    float _laneMarkingZ;
    float _landZ;
    float _waterZ;
    bool_shouldBlend;
    float _alpha;
    VKRealisticPolygonMaker *_landPolygonMaker;
    VKRealisticPolygonMaker *_waterPolygonMaker;
    VKAnimation *_startDrawingAnimation;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long> > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _landDrawableIndices;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long> > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _waterDrawableIndices;
    struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { 
        struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__begin_; 
        struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__end_; 
        struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { 
            struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__first_; 
        } __end_cap_; 
    } _landDrawables;
    struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { 
        struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__begin_; 
        struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__end_; 
        struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { 
            struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *__first_; 
        } __end_cap_; 
    } _waterDrawables;
    struct shared_ptr<ggl::RealisticCasingFacade::RealisticMesh> { 
        struct RealisticMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _coastlineMesh;
    struct shared_ptr<md::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _landTextureStyleQuery;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _defaultLandTexture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _defaultLandTextureVariant;
    struct vector<_VKRealisticPolygonMetaData, std::__1::allocator<_VKRealisticPolygonMetaData> > { 
        struct _VKRealisticPolygonMetaData {} *__begin_; 
        struct _VKRealisticPolygonMetaData {} *__end_; 
        struct __compressed_pair<_VKRealisticPolygonMetaData *, std::__1::allocator<_VKRealisticPolygonMetaData> > { 
            struct _VKRealisticPolygonMetaData {} *__first_; 
        } __end_cap_; 
    } _polygonMetaData;
    struct shared_ptr<ggl::Fog::FogUniformData> { 
        struct FogUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _fogUniformData;
    struct shared_ptr<ggl::RealisticTexture::RealisticUniformData> { 
        struct RealisticUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _realisticTextureUniformData;
}

@property(readonly) NSArray * realisticRoadGroups;
@property(readonly) float roadZ;
@property(readonly) float landZ;
@property(readonly) float waterZ;
@property bool shouldBlend;
@property float alpha;
@property(retain) VKAnimation * startDrawingAnimation;
@property(readonly) struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; } defaultLandTexture;
@property(readonly) struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; } defaultLandTextureVariant;
@property(readonly) /* Warning: unhandled struct encoding: '{vector<std::__1::unique_ptr<md::TexturedDrawable' */ struct * landDrawables; /* unknown property attribute:  std::__1::default_delete<md::TexturedDrawable> >}}} */
@property(readonly) struct * waterDrawables; /* unknown property attribute:  std::__1::default_delete<md::TexturedDrawable> >}}} */
@property(readonly) struct * coastlineMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::RealisticCasingFacade::RealisticVertexData>=^{RealisticVertexData}^{__shared_weak_count}}} */
@property(readonly) struct shared_ptr<ggl::Fog::FogUniformData> { struct FogUniformData {} *x1; struct __shared_weak_count {} *x2; } fogUniformData;
@property(readonly) struct shared_ptr<ggl::RealisticTexture::RealisticUniformData> { struct RealisticUniformData {} *x1; struct __shared_weak_count {} *x2; } realisticTextureUniformData;

+ (void)updateFogUniforms:(const struct shared_ptr<ggl::Fog::FogUniformData> { struct FogUniformData {} *x1; struct __shared_weak_count {} *x2; }*)arg1 withLayoutContext:(id)arg2 toWorld:(const struct Matrix<double, 4, 4> { double x1[16]; }*)arg3;

- (void)setStartDrawingAnimation:(id)arg1;
- (id)startDrawingAnimation;
- (void)setShouldBlend:(bool)arg1;
- (bool)shouldBlend;
- (float)waterZ;
- (float)landZ;
- (struct shared_ptr<ggl::RealisticTexture::RealisticUniformData> { struct RealisticUniformData {} *x1; struct __shared_weak_count {} *x2; })realisticTextureUniformData;
- (struct shared_ptr<ggl::Fog::FogUniformData> { struct FogUniformData {} *x1; struct __shared_weak_count {} *x2; })fogUniformData;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })defaultLandTexture;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })defaultLandTextureVariant;
- (void)updateTextures;
- (struct RealisticMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::RealisticCasingFacade::RealisticVertexData> { struct RealisticVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)coastlineMesh;
- (struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x1; struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x2; struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x_3_1_1; } x3; }*)waterDrawables;
- (struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x1; struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x2; struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x_3_1_1; } x3; }*)landDrawables;
- (struct TexturedDrawable { struct unique_ptr<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh> > > { struct __compressed_pair<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh> *, std::__1::default_delete<ggl::MeshVendor<ggl::PolygonBase::CompressedMeshMesh> > > { struct MeshVendor<ggl::PolygonBase::CompressedMeshMesh> {} *x_1_2_1; } x_1_1_1; } x1; struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > > { struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > {} *x_2_1_1; struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > {} *x_2_1_2; struct __compressed_pair<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > > > { struct vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> >, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range> > > > {} *x_3_2_1; } x_2_1_3; } x2; struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; id x6; struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*)_drawableInMap:(struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long> > > { struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 vendors:(struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x1; struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x2; struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x_3_1_1; } x3; }*)arg2 forStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (void)_addCoastlineMeshForPoints:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 pointCount:(unsigned long long)arg2;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })_createDefaultTextureForLevelOfDetail:(unsigned long long)arg1 takeVariant:(bool)arg2;
- (id)_groupForRenderZ:(int)arg1;
- (id)realisticRoadGroups;
- (void)_updateDefaultLandTextures;
- (void)addTriangulatedPointsToDrawableInMap:(struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long> > > { struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 vendors:(struct vector<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> >, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x1; struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x2; struct __compressed_pair<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > *, std::__1::allocator<std::__1::unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > > > { struct unique_ptr<md::TexturedDrawable, std::__1::default_delete<md::TexturedDrawable> > {} *x_3_1_1; } x3; }*)arg2 zIndex:(float)arg3 points:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg4 pointCount:(unsigned long long)arg5 indices:(const unsigned short*)arg6 indexCount:(unsigned long long)arg7 styleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg8;
- (void)_parsePolygons;
- (void)_parseCoastlines;
- (void)createMeshes;
- (float)roadZ;
- (long long)vectorType;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(struct Device { }*)arg6;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (float)alpha;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setAlpha:(float)arg1;

@end

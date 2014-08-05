/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSMutableArray : NSArray  {
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;
+ (id)nonRetainingArray;
+ (id)copyNonRetainingArray;
+ (id)nonRetainingArray;
+ (id)nonRetainingArray;

- (void)sortUsingSelector:(SEL)arg1;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (void)removeFirstObject;
- (void)removeLastObject;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)rollObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 by:(long long)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsPassingTest:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (void)sortRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id)arg3;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)_mutate;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)removeObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)sortUsingComparator:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2;
- (Class)classForCoder;
- (void)sortUsingDescriptors:(id)arg1;
- (void)filterUsingPredicate:(id)arg1;
- (void)removeFirstObject;
- (void)__imRandomizeArray;
- (void)_addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_kb_reverse;
- (void)removeViewsFromSuperview;
- (id)_ui_dequeue;
- (id)_ui_peek;
- (void)_ui_enqueue:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)removeAllObjectsWithClass:(Class)arg1;
- (void)cr_addNonNilObject:(id)arg1;
- (void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)cr_insertObject:(id)arg1 usingComparator:(id)arg2;
- (void)cr_removeObjectsStartingAtIndex:(unsigned long long)arg1;
- (bool)mf_addObjectIfAbsent:(id)arg1;
- (void)mf_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)mf_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (bool)mf_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (unsigned long long)mf_removeObject:(id)arg1 usingComparator:(id)arg2;
- (unsigned long long)mf_insertObject:(id)arg1 usingComparator:(id)arg2 allowDuplicates:(bool)arg3;
- (unsigned long long)mf_removeObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3;
- (unsigned long long)mf_insertObject:(id)arg1 usingSortFunction:(int (*)())arg2 context:(void*)arg3 allowDuplicates:(bool)arg4;
- (void)performSpecifierUpdatesUsingBlock:(id)arg1;
- (void)ps_insertObjectsFromArray:(id)arg1 afterObject:(id)arg2;
- (void)ps_insertObject:(id)arg1 afterObject:(id)arg2;
- (void)ps_addPossibleObject:(id)arg1;
- (id)_gkMutableOrderedSet;
- (void)_mapkit_makeObjectsPerformSelector:(SEL)arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct { double x1; double x2; })arg1;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingLatitude;
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct { double x1; double x2; })arg1 ascending:(bool)arg2;
- (void)_mapkit_sortUsingLongitudeAscending:(bool)arg1;
- (void)_mapkit_sortUsingLatitudeAscending:(bool)arg1;
- (unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1;
- (unsigned long long)_mapkit_insertSortedAnnotationView:(id)arg1 reverse:(bool)arg2;
- (void)MSRemoveOneObject:(id)arg1;
- (void)MSRemoveOneObjectByPointerComparison:(id)arg1;
- (void)removeAllObjectsWithClass:(Class)arg1;
- (void)trimObjectsFromIndex:(unsigned long long)arg1;
- (void)removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)addObjectsFromNonNilArray:(id)arg1;
- (void)addNonNilObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)push_tsu:(id)arg1;
- (void)enqueue:(id)arg1;
- (id)pop_tsu;
- (id)dequeue;
- (void)safelyAddObject:(id)arg1;
- (void)addItemsMatchingType:(id)arg1 fromFolder:(id)arg2;
- (void)addItemsMatchingExtensions:(id)arg1 orTypes:(id)arg2 fromFolder:(id)arg3;
- (void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)arg1;
- (id)tk_dequeueObject;
- (id)tk_nextDequeuedObject;
- (void)tk_enqueueObject:(id)arg1;
- (id)tk_lastEnqueuedObject;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)WF_pop;
- (void)WF_push:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;

@end

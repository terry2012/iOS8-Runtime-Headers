/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, NSMutableArray, WDTableCell;

@interface WDText : NSObject  {
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    int mTextType;
    WDTableCell *mTableCell;
}


- (id)runIterator;
- (int)tableNestingLevel;
- (id)addTableAtIndex:(int)arg1;
- (id)addTable;
- (id)addParagraphAtIndex:(int)arg1;
- (void)addBlock:(id)arg1;
- (unsigned long long)indexOfBlock:(id)arg1;
- (id)lastBlock;
- (id)blocks;
- (id)newRunIterator;
- (id)newBlockIterator;
- (id)blockIterator;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;
- (void)removeLastBlock;
- (int)textType;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)addParagraph;
- (id)blockAt:(unsigned long long)arg1;
- (unsigned long long)blockCount;
- (id)document;
- (id)content;
- (bool)isEmpty;
- (void)dealloc;
- (id)description;
- (id)tableCell;

@end

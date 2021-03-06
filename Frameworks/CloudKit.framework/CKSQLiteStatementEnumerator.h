/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator  {
    bool_closed;
    CKSQLiteStatement *_statement;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

}

@property(retain) CKSQLiteStatement * statement;
@property(copy) id block;
@property bool closed;


- (void)setClosed:(bool)arg1;
- (bool)closed;
- (id)initWithStatement:(id)arg1 block:(id)arg2;
- (void)setStatement:(id)arg1;
- (id)statement;
- (void)setBlock:(id)arg1;
- (id)nextObject;
- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (id)block;

@end

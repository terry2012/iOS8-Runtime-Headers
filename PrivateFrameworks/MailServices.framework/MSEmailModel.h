/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class NSString, NSArray, NSURL;

@interface MSEmailModel : NSObject <NSCoding> {
    NSString *_subject;
    NSString *_body;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSURL *_reference;
    int _type;
}

@property(copy) NSString * subject;
@property(copy) NSArray * to;
@property(copy) NSArray * cc;
@property(copy) NSArray * bcc;
@property(retain) NSString * body;
@property(retain) NSURL * reference;
@property int type;


- (void)setReference:(id)arg1;
- (id)reference;
- (id)bcc;
- (id)cc;
- (void)setBcc:(id)arg1;
- (void)setCc:(id)arg1;
- (id)to;
- (void)setTo:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)setBody:(id)arg1;
- (id)body;
- (void)setType:(int)arg1;
- (int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebNotificationPrivate;

@interface WebNotification : NSObject  {
    WebNotificationPrivate *_private;
}


- (id)body;
- (id)lang;
- (id)dir;
- (void)dispatchErrorEvent;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchShowEvent;
- (unsigned long long)notificationID;
- (id)iconURL;
- (id)title;
- (id)tag;
- (id)init;
- (id)origin;

@end

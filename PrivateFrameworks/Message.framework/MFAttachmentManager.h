/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, MFInvocationQueue, NSLock;

@interface MFAttachmentManager : NSObject  {
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;
    MFInvocationQueue *_attachmentInvocationQueue;
    NSMutableDictionary *_providers;
    NSMutableDictionary *_attachments;
    NSMutableDictionary *_metadata;
    NSLock *_metaDataLock;
    NSObject<OS_dispatch_queue> *_imageScalingQueue;
}

+ (id)allManagers;
+ (id)defaultManager;

- (void)clearMetadataForAttachment:(id)arg1;
- (id)attachmentsForTextAttachments:(id)arg1 error:(id*)arg2;
- (bool)_setupAttachment:(id)arg1 error:(id*)arg2;
- (void)removeProvider:(id)arg1;
- (id)attachmentForTextAttachment:(id)arg1 error:(id*)arg2;
- (id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3;
- (bool)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3;
- (id)_contentIDForAttachment:(id)arg1;
- (void)updatePathWithCurrentFileNameForAttachment:(id)arg1;
- (void)cancelFetchForAttachment:(id)arg1;
- (void)fetchDataSynchronouslyForAttachment:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1;
- (void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;
- (id)metadataForAttachment:(id)arg1 forKey:(id)arg2;
- (void)removeProviderForBaseURL:(id)arg1;
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2;
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2;
- (void)setContentIDForAttachment:(id)arg1 toCID:(id)arg2;
- (void)addProvider:(id)arg1 forBaseURL:(id)arg2;
- (id)attachmentForURL:(id)arg1 error:(id*)arg2;
- (void)_fetchInvocationCallUsingBlock:(id)arg1;
- (void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2;
- (void)_callProgressBlockForAttachmentURL:(id)arg1 withBytes:(unsigned long long)arg2 expectedSize:(unsigned long long)arg3;
- (id)attachmentsForURLs:(id)arg1 error:(id*)arg2;
- (id)imageScalingQueue;
- (void)updateAttachment:(id)arg1 withNewData:(id)arg2;
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;
- (id)attachmentsForContext:(id)arg1;
- (void)removeAttachmentForURL:(id)arg1;
- (id)attachmentForCID:(id)arg1;
- (id)init;
- (void)dealloc;
- (unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2 forContext:(id)arg3;

@end

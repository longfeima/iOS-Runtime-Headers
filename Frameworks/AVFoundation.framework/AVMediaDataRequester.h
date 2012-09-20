/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface AVMediaDataRequester : NSObject  {
    id _mediaDataConsumer;
    NSObject<OS_dispatch_queue> *_requestQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestBlock;

}

@property(readonly) NSObject<OS_dispatch_queue> * requestQueue;
@property(readonly) id requestBlock;


- (void)invalidate;
- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(id)arg3;
- (void)_requestMediaDataIfReady;
- (id)requestBlock;
- (id)requestQueue;
- (void)startRequestingMediaData;

@end
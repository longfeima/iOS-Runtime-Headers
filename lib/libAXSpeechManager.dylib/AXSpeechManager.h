/* Generated by RuntimeBrowser
   Image: /usr/lib/libAXSpeechManager.dylib
 */

@class NSMutableArray, NSNumber, NSObject<OS_dispatch_semaphore>, NSString, NSThread, TTSSpeechSynthesizer;

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate> {
    NSNumber *_originalSpeechRateForJobOverride;
    NSThread *_runThread;
    NSObject<OS_dispatch_semaphore> *_runThreadSemaphore;
    NSMutableArray *_speechQueue;
    TTSSpeechSynthesizer *_synthesizer;
    bool_isSpeaking;
    bool_runLoopEnabled;
    bool_showControlCenterControls;
    bool_speechEnabled;
    boolisPaused;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isPaused;
@property(readonly) bool isSpeaking;
@property(retain) NSNumber * originalSpeechRateForJobOverride;
@property(readonly) bool showControlCenterControls;
@property bool speechEnabled;
@property(readonly) Class superclass;

+ (id)availableLanguageCodes;
+ (struct URegularExpression { }*)createRegularExpressionFromString:(id)arg1;
+ (id)currentLanguageCode;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression { }*)arg2;

- (void)__speechJobFinished:(id)arg1;
- (void)_checkForLanguageMigration:(id)arg1;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_dispatchSpeechAction:(id)arg1;
- (void)_initialize;
- (void)_isSpeaking:(id)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (void)_speechJobFinished:(bool)arg1 action:(id)arg2;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)arg1;
- (void)_testSpeechTransforms;
- (void)clearSpeechQueue;
- (void)continueSpeaking;
- (void)dealloc;
- (void)dispatchSpeechAction:(id)arg1;
- (id)init;
- (bool)isPaused;
- (bool)isSpeaking;
- (id)originalSpeechRateForJobOverride;
- (void)pauseSpeaking:(int)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setOriginalSpeechRateForJobOverride:(id)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)showControlCenterControls:(bool)arg1;
- (bool)showControlCenterControls;
- (bool)speechEnabled;
- (void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRequest:(id)arg3;
- (void)stopSpeaking:(int)arg1;
- (void)stopSpeaking;

@end
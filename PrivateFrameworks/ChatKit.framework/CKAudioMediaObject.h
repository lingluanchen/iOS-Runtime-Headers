/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSDictionary;

@interface CKAudioMediaObject : CKAVMediaObject  {
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
}

+ (id)mimeTypesAllowedForMMS;
+ (id)mimeTypesToFileExtensions;

- (unsigned long long)sizeInBytes;
- (id)transcodePath;
- (id)transcodedPathExtension;
- (id)effectiveExportedFilename;
- (void)prepareForTranscode;
- (id)transcodedFilename;
- (id)_transcodeOptions;
- (id)transcodeMimeType;
- (BOOL)shouldTranscodeForMMS;
- (id)optionsForMedia;
- (double)transcodeStartTime;
- (double)transcodeEndTime;
- (double)transcodeDuration;
- (id)filenameForMedia;
- (id)previewTitle;
- (int)mediaType;
- (void)dealloc;

@end
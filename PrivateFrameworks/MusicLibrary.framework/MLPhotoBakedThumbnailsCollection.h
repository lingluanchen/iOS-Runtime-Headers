/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSData, NSMutableDictionary;

@interface MLPhotoBakedThumbnailsCollection : NSObject {
    NSMutableDictionary *_bakedThumbnails;
    NSData *_data;
}

+ (void)setTesting:(BOOL)arg1;

- (void)_parseDataWithContentsOfFile:(id)arg1;
- (id)availableFormats;
- (id)bakedThumbnailsForFormat:(NSInteger)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (void)saveToFile:(id)arg1;
- (void)setBakedThumbnails:(id)arg1 forFormat:(NSInteger)arg2;

@end
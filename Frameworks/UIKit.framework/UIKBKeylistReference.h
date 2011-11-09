/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    id m_value;
    NSArray *m_nameElements;
    int m_startKeyIndex;
    int m_endKeyIndex;
    unsigned int m_flags;
}

@property(retain) NSString * name;
@property(retain) id value;
@property(readonly) NSArray * nameElements;
@property(readonly) NSString * keylistName;
@property(readonly) NSString * keyName;
@property(readonly) unsigned int flags;
@property(readonly) BOOL isKeysetReference;
@property(readonly) BOOL isKeylistReference;
@property(readonly) BOOL isKeysReference;
@property(readonly) BOOL isNamedKeyReference;
@property(readonly) BOOL isKeyIndexReference;
@property(readonly) BOOL isKeyIndexRangeReference;
@property(readonly) BOOL isGeometryReference;
@property(readonly) BOOL isAttributesReference;
@property(readonly) int startKeyIndex;
@property(readonly) int endKeyIndex;

+ (id)referenceWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;

- (int)endKeyIndex;
- (int)startKeyIndex;
- (id)nameElements;
- (void)setNameElements:(id)arg1;
- (void)setFlags:(unsigned int)arg1 setStartKeyIndex:(int)arg2 setEndKeyIndex:(int)arg3;
- (unsigned int)endIndexForListCount:(unsigned int)arg1;
- (unsigned int)startIndexForListCount:(unsigned int)arg1;
- (id)keyName;
- (BOOL)isNamedKeyReference;
- (BOOL)isKeysetReference;
- (BOOL)isKeyIndexRangeReference;
- (BOOL)isKeyIndexReference;
- (id)initWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;
- (BOOL)isAttributesReference;
- (id)keylistName;
- (BOOL)isKeysReference;
- (BOOL)isGeometryReference;
- (BOOL)isKeylistReference;
- (id)value;
- (unsigned int)flags;
- (void)setValue:(id)arg1;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
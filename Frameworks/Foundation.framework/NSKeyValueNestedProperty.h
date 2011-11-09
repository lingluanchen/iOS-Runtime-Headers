/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty  {
    NSString *_relationshipKey;
    NSString *_keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty *_relationshipProperty;
    NSString *_keyPathWithoutOperatorComponents;
    BOOL _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    BOOL _dependentValueKeyOrKeysIsASet;
}


- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 firstDotIndex:(unsigned int)arg3 propertiesBeingInitialized:(struct __CFSet { }*)arg4;
- (void)_addDependentValueKey:(id)arg1;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { }*)arg1 getAffectingProperties:(id)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (Class)_isaForAutonotifying;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(struct { id x1; id x2; }*)arg5;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(struct { id x1; id x2; })arg5;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3;
- (id)dependentValueKeyOrKeysIsASet:(BOOL*)arg1;
- (id)description;
- (void)dealloc;

@end
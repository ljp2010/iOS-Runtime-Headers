/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString;

@interface SingleWordCandidateSharedData : NSObject {
    NSString *_analysisString;
    NSString *_convertedAnalysisString;
    NSString *_dictionaryReading;
    NSArray *_fuzzyMatchedSyllableIDs;
    int _inputCodeType;
    BOOL _isAbbreviated;
    BOOL _isFuzzy;
    unsigned int _matchType;
    int _matchedLengthType;
    NSArray *_syllableIDs;
    NSArray *_syllableLengthsInAnalysisString;
    NSArray *_syllableLengthsInConvertedAnalysisString;
    NSArray *_syllableLengthsInDictionaryReading;
    NSArray *_syllableSeparatorCounts;
}

@property(copy) NSString * analysisString;
@property(copy) NSString * convertedAnalysisString;
@property(copy) NSString * dictionaryReading;
@property(readonly) int inputCodeType;
@property(readonly) BOOL isAbbreviated;
@property BOOL isFuzzy;
@property int matchedLengthType;
@property unsigned int matchedType;
@property(readonly) NSArray * syllableLengthsInAnalysisString;
@property(readonly) NSArray * syllableLengthsInConvertedAnalysisString;
@property(readonly) NSArray * syllableLengthsInDictionaryReading;

- (id)analysisString;
- (id)convertedAnalysisString;
- (void)dealloc;
- (id)dictionaryReading;
- (id)initWithDictionaryReading:(id)arg1 lookupContext:(const struct LookupContext { struct __CFArray {} *x1; int x2; unsigned int x3; char *x4; struct __LMWordNgramModel {} *x5; int x6; int x7; struct __CFString {} *x8; struct CharacterMap {} *x9; void *x10; }*)arg2;
- (id)initWithSyllableIDs:(id)arg1 fuzzyMatchedSyllableIDs:(id)arg2 syllableLengthsInAnalysisString:(id)arg3 syllableLengthsInConvertedAnalysisString:(id)arg4 syllableSeparatorCounts:(id)arg5 analysisString:(id)arg6 convertedAnalysisString:(id)arg7 dictionaryReading:(id)arg8 lookupContext:(const struct LookupContext { struct __CFArray {} *x1; int x2; unsigned int x3; char *x4; struct __LMWordNgramModel {} *x5; int x6; int x7; struct __CFString {} *x8; struct CharacterMap {} *x9; void *x10; }*)arg9 matchedLengthType:(int)arg10 isFuzzy:(BOOL)arg11 isAbbreviated:(BOOL)arg12;
- (id)initWithSyllableLengths:(id)arg1 analysisString:(id)arg2 dictionaryReading:(id)arg3 lookupContext:(const struct LookupContext { struct __CFArray {} *x1; int x2; unsigned int x3; char *x4; struct __LMWordNgramModel {} *x5; int x6; int x7; struct __CFString {} *x8; struct CharacterMap {} *x9; void *x10; }*)arg4 matchedLengthType:(int)arg5;
- (id)initWithSyllableNode:(const struct SyllableNode { int (**x1)(); struct SyllableTrieNode {} *x2; unsigned char x3; int x4; }*)arg1 completeSyllablePosition:(unsigned short)arg2 lookupContext:(const struct LookupContext { struct __CFArray {} *x1; int x2; unsigned int x3; char *x4; struct __LMWordNgramModel {} *x5; int x6; int x7; struct __CFString {} *x8; struct CharacterMap {} *x9; void *x10; }*)arg3;
- (id)initWithSyllableSequence:(const struct SyllableSequence { unsigned short *x1; unsigned short *x2; struct SyllableLength {} *x3; boolx4; boolx5; boolx6; boolx7; boolx8; boolx9; boolx10; boolx11; unsigned int x12; unsigned int x13; int x14; double x15; }*)arg1 lookupContext:(const struct LookupContext { struct __CFArray {} *x1; int x2; unsigned int x3; char *x4; struct __LMWordNgramModel {} *x5; int x6; int x7; struct __CFString {} *x8; struct CharacterMap {} *x9; void *x10; }*)arg2;
- (id)initWithWordCore:(const struct WordCore { int (**x1)(); int x2; struct WordGroupTraits {} *x3; }*)arg1 lookupContext:(const struct LookupContext { struct __CFArray {} *x1; int x2; unsigned int x3; char *x4; struct __LMWordNgramModel {} *x5; int x6; int x7; struct __CFString {} *x8; struct CharacterMap {} *x9; void *x10; }*)arg2;
- (int)inputCodeType;
- (BOOL)isAbbreviated;
- (BOOL)isFuzzy;
- (int)matchedLengthType;
- (unsigned int)matchedType;
- (void)setAnalysisString:(id)arg1;
- (void)setConvertedAnalysisString:(id)arg1;
- (void)setDictionaryReading:(id)arg1;
- (void)setIsFuzzy:(BOOL)arg1;
- (void)setMatchedLengthType:(int)arg1;
- (void)setMatchedType:(unsigned int)arg1;
- (id)syllableLengthsInAnalysisString;
- (id)syllableLengthsInConvertedAnalysisString;
- (id)syllableLengthsInDictionaryReading;

@end

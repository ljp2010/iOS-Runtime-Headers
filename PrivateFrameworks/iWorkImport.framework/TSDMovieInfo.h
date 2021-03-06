/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURL, TSDMediaStyle, TSPData;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {
    struct CGSize { 
        float width; 
        float height; 
    BOOL mAudioOnly;
    TSPData *mAudioOnlyImageData;
    double mEndTime;
    TSPData *mImportedAuxiliaryMovieData;
    unsigned int mLoopOption;
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    } mNaturalSize;
    TSPData *mPosterImageData;
    double mPosterTime;
    double mStartTime;
    BOOL mStreaming;
    TSDMediaStyle *mStyle;
    float mVolume;
}

@property(getter=isAudioOnly) BOOL audioOnly;
@property(retain) TSPData * audioOnlyImageData;
@property double endTime;
@property(retain) TSPData * importedAuxiliaryMovieData;
@property unsigned int loopOption;
@property(retain) TSPData * movieData;
@property(retain) NSURL * movieRemoteURL;
@property(retain) TSPData * posterImageData;
@property double posterTime;
@property double startTime;
@property(getter=isStreaming) BOOL streaming;
@property float volume;

+ (double)defaultPosterTimeForDuration:(double)arg1;
+ (id)presetKinds;

- (void)acceptVisitor:(id)arg1;
- (id)animationFilters;
- (id)audioOnlyImageData;
- (BOOL)canChangeWrapType;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (double)doubleValueForProperty:(int)arg1;
- (Class)editorClass;
- (double)endTime;
- (float)floatValueForProperty:(int)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)importedAuxiliaryMovieData;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isAudioOnly;
- (BOOL)isStreaming;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct MovieArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct DataReference {} *x4; struct DataReference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; float x7; float x8; float x9; unsigned int x10; float x11; boolx12; boolx13; boolx14; struct DataReference {} *x15; struct DataReference {} *x16; unsigned int x17; unsigned int x18; struct Reference {} *x19; struct Reference {} *x20; struct Reference {} *x21; struct Reference {} *x22; struct Size {} *x23; struct Size {} *x24; int x25; unsigned int x26[1]; }*)arg1 unarchiver:(id)arg2;
- (unsigned int)loopOption;
- (id)makeAVAsset;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)movieData;
- (id)movieRemoteURL;
- (id)objectForProperty:(int)arg1;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (id)posterImageData;
- (double)posterTime;
- (id)presetKind;
- (struct CGSize { float x1; float x2; })rawDataSize;
- (Class)repClass;
- (void)saveToArchive:(struct MovieArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct DataReference {} *x4; struct DataReference {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; float x7; float x8; float x9; unsigned int x10; float x11; boolx12; boolx13; boolx14; struct DataReference {} *x15; struct DataReference {} *x16; unsigned int x17; unsigned int x18; struct Reference {} *x19; struct Reference {} *x20; struct Reference {} *x21; struct Reference {} *x22; struct Size {} *x23; struct Size {} *x24; int x25; unsigned int x26[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAudioOnly:(BOOL)arg1;
- (void)setAudioOnlyImageData:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setImportedAuxiliaryMovieData:(id)arg1;
- (void)setLoopOption:(unsigned int)arg1;
- (void)setMovieData:(id)arg1;
- (void)setMovieRemoteURL:(id)arg1;
- (void)setPosterImageData:(id)arg1;
- (void)setPosterTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStreaming:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (id)style;
- (Class)styleClass;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;
- (id)titleForBuildChunk:(id)arg1;
- (float)volume;

@end

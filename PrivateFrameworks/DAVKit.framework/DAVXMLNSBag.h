/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableDictionary;

@interface DAVXMLNSBag : NSObject {
    NSMutableDictionary *allNS;
    NSUInteger nsCounter;
    void *reserved1;
    NSMutableDictionary *tagMapping;
}

+ (id)_smartTagForTag:(id)arg1;
+ (void)initialize;
+ (id)namespaceForTag:(id)arg1;
+ (void)registerNSTags:(id)arg1 withNamespace:(id)arg2;

- (id)allXMLNSAttributes;
- (void)dealloc;
- (id)init;
- (id)tagForNSTag:(id)arg1;

@end
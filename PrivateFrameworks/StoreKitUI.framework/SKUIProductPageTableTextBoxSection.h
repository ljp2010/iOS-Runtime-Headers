/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUIColorScheme, SKUILayoutCache;

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    BOOL _isExpanded;
    int _stringIndex;
    NSString *_subtitle;
    SKUILayoutCache *_textLayoutCache;
    NSString *_title;
}

@property(retain) SKUIColorScheme * colorScheme;
@property int stringIndex;
@property(copy) NSString * subtitle;
@property(retain) SKUILayoutCache * textLayoutCache;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (id)colorScheme;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (int)numberOfRowsInSection;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setStringIndex:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (int)stringIndex;
- (id)subtitle;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textLayoutCache;
- (id)title;

@end

/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableArray, UIColor;

@interface IUMediaActionButtonsCell : IUMediaTableCell  {
    id _delegate;
    NSMutableArray *_buttons;
    UIColor *_bottomSeparatorColor;
}

@property id delegate;
@property(retain) UIColor * bottomSeparatorColor;


- (void)dealloc;
- (void)_didCreateContentView;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_buttonAction:(id)arg1;
- (void)setBottomSeparatorColor:(id)arg1;
- (BOOL)supportsSpinning;
- (void)reconfigureWithButtonTitles:(id)arg1 animated:(BOOL)arg2;
- (id)initWithTitles:(id)arg1;
- (id)bottomSeparatorColor;
- (id)_buttonImageForControlState:(unsigned int)arg1 stretchable:(BOOL)arg2;
- (void)_buttonFadeDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)createButtonWithTitle:(id)arg1 action:(SEL)arg2;

@end
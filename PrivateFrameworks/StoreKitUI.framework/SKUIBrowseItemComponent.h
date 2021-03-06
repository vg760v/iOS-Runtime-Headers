/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrowseItemComponent : SKUIPageComponent {
    SKUIImageViewElement * _decorationImage;
    int  _index;
    BOOL  _showTopBorder;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) SKUIImageViewElement *decorationImage;
@property (nonatomic) int index;
@property (nonatomic) BOOL showTopBorder;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (int)componentType;
- (id)decorationImage;
- (int)index;
- (id)initWithViewElement:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)setShowTopBorder:(BOOL)arg1;
- (BOOL)showTopBorder;
- (id)subtitle;
- (id)title;

@end

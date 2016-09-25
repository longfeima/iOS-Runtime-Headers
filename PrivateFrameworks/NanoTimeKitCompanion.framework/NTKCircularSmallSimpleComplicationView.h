/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView {
    UIView<NTKComplicationImageView> * _imageView;
    NTKColoringLabel * _label;
    float  _maxDynamicFontSize;
}

@property (nonatomic, retain) UIView<NTKComplicationImageView> *imageView;
@property (nonatomic, retain) NTKColoringLabel *label;
@property (nonatomic) float maxDynamicFontSize;

+ (float)_imageScaleForTemplate:(id)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (void)load;
+ (BOOL)supportsComplicationFamily:(int)arg1;

- (void).cxx_destruct;
- (float)_baselineOffsetForDynamicSize:(int)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateImageViewWithImageProvider:(id)arg1;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)_updateLabelsForFontChange;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (float)maxDynamicFontSize;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxDynamicFontSize:(float)arg1;
- (void)updateImageViewWithImage:(id)arg1;
- (void)updateLabelWithString:(id)arg1;

@end
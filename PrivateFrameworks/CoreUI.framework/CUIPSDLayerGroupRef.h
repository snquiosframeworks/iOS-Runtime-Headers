/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (bool)isLayerGroup;
- (bool)isOpen;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLayers;

@end
// UIImage+Alpha.h
// Created by Trevor Harmon on 9/20/09.
// Free for personal or commercial use, with or without modification.
// No warranty is expressed or implied.

#import <UIKit/UIKit.h>

// Helper methods for adding an alpha layer to an image
@interface UIImage (Alpha)

/** Returns true if the image has an alpha layer */
- (BOOL)hasAlpha;

/** Returns a copy of the given image, adding an alpha channel if it doesn't already have one */
- (UIImage *)imageWithAlpha;

/**
 * Returns a copy of the image with a transparent border of the given size added around its edges.
 * If the image has no alpha layer, one will be added to it.
 */
- (UIImage *)transparentBorderImage:(NSUInteger)borderSize;

/** 
 * Creates a mask that makes the outer edges transparent and everything else opaque
 * The size must include the entire mask (opaque part + transparent border)
 * The caller is responsible for releasing the returned reference by calling CGImageRelease
 */
- (CGImageRef)newBorderMask:(NSUInteger)borderSize size:(CGSize)size;
@end

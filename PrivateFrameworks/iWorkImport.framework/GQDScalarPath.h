/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDScalarPath : GQDPath  {
    int mType;
    double mScalar;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
}


- (int)type;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)isRect;
- (double)scalar;
- (BOOL)isRectangular;
- (struct CGPath { }*)createBezierPath;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end

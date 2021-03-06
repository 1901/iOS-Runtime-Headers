/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSSpiceTable : GQSTable  {
    struct __CFDictionary { } *mVectorUidToAlongMap;
    BOOL mReadingRowVectors;
    struct vector<float,std::allocator<float> > { struct _Vector_impl { 
            float *_M_start; 
            float *_M_finish; 
            float *_M_end_of_storage; 
        } x1; } *mRowPositions;
    struct vector<float,std::allocator<float> > { struct _Vector_impl { 
            float *_M_start; 
            float *_M_finish; 
            float *_M_end_of_storage; 
        } x1; } *mColumnPositions;
    float mCurrentCellMinX;
    float mCurrentCellMaxX;
    float mCurrentCellMinY;
    float mCurrentCellMaxY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
}


- (id)init;
- (void)dealloc;
- (void)aboutToReadCells;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;
- (void)aboutToReadRowVectors;
- (void)aboutToReadColumnVectors;
- (float)alongValueForVectorUid:(const char *)arg1;

@end

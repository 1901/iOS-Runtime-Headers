/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, UIKeyboardCandidateScrollViewController, <UIKeyboardCandidateListDelegate>, NSMutableArray;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList> {
    NSArray *m_candidates;
    NSMutableArray *m_buttons;
    <UIKeyboardCandidateListDelegate> *m_delegate;
    UIKeyboardCandidateScrollViewController *m_scrollViewController;
    int m_columns;
    int m_candidatesPerColumn;
    int m_candidatesPerPage;
    int m_current;
    int m_firstShown;
    int m_firstComposition;
    int m_candidateCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_symbolRect;
    UIColor *m_textColor;
    struct CGColor { } *m_highlightColor;
    BOOL m_respondsToSelect;
    BOOL m_respondsToAccept;
}


- (unsigned int)count;
- (void)dealloc;
- (void)jumpToCompositions;
- (id).cxx_construct;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;
- (void)nextCandidatesAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (void)selectCandidate:(id)arg1;
- (void)configureKeyboard:(id)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (id)currentCandidate;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)candidateList;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)layout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end

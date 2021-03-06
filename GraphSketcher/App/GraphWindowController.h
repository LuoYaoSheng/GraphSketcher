// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.

#import <OmniAppKit/OAToolbarWindowController.h>

@class RSMode, RSGraph, RSGraphView;

@interface GraphWindowController : OAToolbarWindowController {
    
    IBOutlet RSGraphView *_graphView;
    IBOutlet id _statusText;  // text view on bottom bar
    
    RSGraph *_graph;  // The window's document's graph
    RSMode *_m;  // the mode controller
    
    BOOL _updatingWindowSize;
    
    NSTextView *_textLabelFieldEditor;
}


// Notifications:
- (void)changeToolbarMessageNotification:(NSNotification *)note;


// EXPERIMENTAL
//- (void)showModebar;

@end

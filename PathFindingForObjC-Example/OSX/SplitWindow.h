//
//  SplitWindow.h
//  PathFindingForObjC-Example
//
//  Created by JasioWoo on 15/3/20.
//  Copyright (c) 2015年 JasioWoo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SplitWindow : NSWindow <NSSplitViewDelegate>

@property (assign)IBOutlet NSSplitView *splitView;
@property (nonatomic, weak)IBOutlet NSView *leftView;
@property (nonatomic, weak)IBOutlet NSView *rightView;



@end
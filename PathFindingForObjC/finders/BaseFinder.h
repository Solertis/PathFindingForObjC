//
//  BaseFinder.h
//
//  Created by JasioWoo on 14/10/28.
//  Copyright (c) 2014年 JasioWoo. All rights reserved.
//
#import "Heuristic.h"

@class PFGrid;
@class PFNode;


@interface BaseFinder : NSObject

@property (nonatomic) HeuristicType heuristicType;
@property (nonatomic) Heuristic *heuristic;
@property (nonatomic) BOOL allowDiagonal;
@property (nonatomic) BOOL allowCrossCorners;
@property (nonatomic) int weight;

@property (nonatomic, readonly) NSArray *resultPath;

- (NSArray *)findPathInStartNode:(PFNode*)startNode toEndNode:(PFNode*)endNode withGrid:(PFGrid*)grid trackFinding:(NSMutableArray**)trackArrForTest;

- (float)calculateHeuristicValueWithX:(float)dx andY:(float)dy;

- (Heuristic *)createHeuristicWithType:(HeuristicType)type;

@end

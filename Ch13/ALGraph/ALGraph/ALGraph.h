//
//  ALGraph.h
//  ALGraph
//
//  Created by JIN YOUNG PARK on 2020/02/24.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef ALGraph_h
#define ALGraph_h

#include "DLinkedList.h"  // 연결 리스트 사용

// 정점의 이름을 상수화
enum {A, B, C, D, E, F, G, H, I, J};

typedef struct _ual
{
    int numV;        // 정점의 수
    int numE;        // 간선의 수
    List * adjList;  // 간선의 정보
} ALGraph;

// 그래프의 초기화
void GraphInit(ALGraph * pg, int nv);

// 그래프의 리소스 해제
void GraphDestroy(ALGraph * pg);

// 간선의 추가
void AddEdge(ALGraph * pg, int fromV, int toV);

// 간선의 정보 출력
void ShowGraphEdgeInfo(ALGraph * pg);

#endif /* ALGraph_h */

//
//  ALGraph.c
//  ALGraph
//
//  Created by JIN YOUNG PARK on 2020/02/24.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "ALGraph.h"
#include "DLinkedList.h"

int WhoIsPrecede(int data1, int data2);

void GraphInit(ALGraph * pg, int nv) // 그래프의 초기화
{
    int i;
    
    // 정점의 수에 해당하는 길이의 리스트 배열을 생성한다.
    pg->adjList = (List*)malloc(sizeof(List)*nv);  // 간선 정보 저장할 리스트 생성
    
    pg->numV = nv;  // 정점의 수는 nv에 저장된 값으로 결정
    pg->numE = 0;   // 초기의 간선 수는 0개
    
    // 정점의 수만큼 생성된 리스트들을 초기화한다.
    for(i=0; i<nv; i++)
    {
        ListInit(&(pg->adjList[i]));
        SetSortRule(&(pg->adjList[i]), WhoIsPrecede);
    }
}

void GraphDestroy(ALGraph * pg)  // 그래프의 리소스 해제
{
    if(pg->adjList != NULL)
        free(pg->adjList);  // 동적으로 할당된 연결 리스트의 소멸
}

void AddEdge(ALGraph * pg, int fromV, int toV)  // fromV, toV 연결하는 간선 추가
{
    // 정점 fromV의 연결 리스트에 정점 toV의 정보 추가
    LInsert(&(pg->adjList[fromV]), toV);
    
    // 정점 toV의 연결리스트에 정점 fromV의 정보 추가
    LInsert(&(pg->adjList[toV]), fromV);
    pg->numE += 1;
}

void ShowGraphEdgeInfo(ALGraph * pg)    // 간선의 정보 출력
{
    int i;
    int vx;
    
    for(i=0; i<pg->numV; i++)
    {
        printf("%c와 연결된 정점: ", i + 65);
        
        if(LFirst(&(pg->adjList[i]), &vx))
        {
            printf("%c ", vx + 65);
            
            while (LNext(&(pg->adjList[i]), &vx)) {
                printf("%c ", vx + 65);
            }
        }
        printf("\n");
    }
}

int WhoIsPrecede(int data1, int data2)
{
    if(data1 < data2)
        return 0;
    else
        return 1;
}

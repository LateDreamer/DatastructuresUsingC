//
//  ALGraphDFS.c
//  ALGraphDFS
//
//  Created by JIN YOUNG PARK on 2020/02/25.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ALGraphDFS.h"
#include "DLinkedList.h"
#include "ArrayBaseStack.h"

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
    
    // 정점의 수를 길이로 하여 배열을 할당
    pg->visitInfo = (int *)malloc(sizeof(int)*pg->numV);
    
    // 배열의 모든 요소를 0으로 초기화
    memset(pg->visitInfo, 0, sizeof(int)*pg->numV);
}

void GraphDestroy(ALGraph * pg)  // 그래프의 리소스 해제
{
    if(pg->adjList != NULL)
        free(pg->adjList);  // 동적으로 할당된 연결 리스트의 소멸
    
    // 할당된 배열의 소멸
    if(pg->visitInfo != NULL)
        free(pg->visitInfo);
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

// 두 번쨰 매개변수로 전달된 이름의 정점에 방문
int VisitVertex(ALGraph * pg, int visitV)
{
    if(pg->visitInfo[visitV] == 0)  // visitV에 처음 방문일 때 참인 if문
    {
        pg->visitInfo[visitV] = 1; // visitV에 방문한 것으로 기록
        printf("%c ", visitV + 65); // 방문한 정점의 이름을 출력
        return TRUE;  // 방문 성공
    }
    return FALSE; // 방문 실패
}

// DFS 기반으로 정의된 함수: 정점의 정보 출력
void DFShowGraphVertex(ALGraph * pg, int startV)
{
    Stack stack;
    int visitV = startV;
    int nextV;
    
    StackInit(&stack);  // DFS를 위한 스택의 초기화
    VisitVertex(pg, visitV);  // 시작 정점을 방문
    SPush(&stack, visitV);  // 시작 정점의 정보를 스택으로
    
    // visitV에 담긴 정점과 연결된 정점의 방문을 시도하는 while문
    while (LFirst(&(pg->adjList[visitV]), &nextV) == TRUE)
    {
        // visitV와 연결된 정보가 nextV에 담긴 상태에서 이하를 진핼
        int visitFlag = FALSE;
        
        if(VisitVertex(pg, nextV) == TRUE) // 방문에 성공했다면
        {
            SPush(&stack, visitV);  // visitV에 담긴 정점의 정보를 PUSH
            visitV = nextV;
            visitFlag = TRUE;
        }
        else  // 방문에 성공하지 못했다면 연결된 다른 정점들을 찾는다
        {
            while (LNext(&(pg->adjList[visitV]), &nextV))
            {
                if(VisitVertex(pg, nextV) == TRUE)
                {
                    SPush(&stack, visitV);
                    visitV = nextV;
                    visitFlag = TRUE;
                    break;
                }
            }
        }
        
        if(visitFlag == FALSE)  // 추가로 방문한 정점이 없었다면
        {
            // 스택이 비면 탐색의 시작점으로 되돌아온 것
            if(SIsEmpty(&stack) == TRUE)  // 시작점으로 되돌아왔음
                break;
            else
                visitV = SPop(&stack);  // 길을 되돌아간다
        }
    }
    
    // 이후의 탐색을 위해서 탐색 정보 초기화
    memset(pg->visitInfo, 0, sizeof(int)*pg->numV);
    
    
}



int WhoIsPrecede(int data1, int data2)
{
    if(data1 < data2)
        return 0;
    else
        return 1;
}

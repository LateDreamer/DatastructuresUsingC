//
//  DBLinkedList.c
//  DBLinkedList
//
//  Created by JIN YOUNG PARK on 2020/01/06.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List * plist)
{
    plist->head = NULL;
    plist->numOfData = 0;
}

void LInsert(List * plist, Data data)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    newNode->next = plist->head;
    if(plist->head != NULL)
        plist->head->prev = newNode;
    
    newNode->prev = NULL;
    plist->head = newNode;
    
    (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
    if(plist->head == NULL)
        return FALSE;
    
    plist->cur = plist->head;
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, Data * pdata)
{
    if(plist->cur->next == NULL)
        return FALSE;
    
    plist->cur = plist->cur->next;
    *pdata = plist->cur->data;
    return TRUE;
}

int LPrevious(List * plist, Data * pdata)
{
    if(plist->cur->prev == NULL)
        return FALSE;
    
    plist->cur = plist->cur->prev; // cur을 왼쪽으로 이돌
    *pdata = plist->cur->data; // cur이 가리키는 노드의 데이터 반환
    return TRUE;
}

int LCount(List * plist)
{
    return plist->numOfData;
}

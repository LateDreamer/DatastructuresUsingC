//
//  DLinkedList.h
//  ChainedTable
//
//  Created by JIN YOUNG PARK on 2020/02/23.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef DLinkedList_h
#define DLinkedList_h

#include "Slot2.h" // 추가된 헤더파일 선언문

#define TRUE   1
#define FALSE  0

typedef Slot LData;  // 변경된 typedef 선언문

typedef struct _node
{
    LData data;
    struct _node * next;
}Node;

typedef struct _linkedList
{
    Node * head;
    Node * cur;
    Node * before;
    int numOfData;
    int (*comp)(LData d1, LData d2);
}LinkedList;

typedef LinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

void SetSortRule(List * plist, int (*comp)(LData da, LData d2));

#endif /* DLinkedList_h */

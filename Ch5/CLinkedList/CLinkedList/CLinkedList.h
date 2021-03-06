//
//  CLinkedList.h
//  CLinkedList
//
//  Created by JIN YOUNG PARK on 2020/01/05.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef CLinkedList_h
#define CLinkedList_h

#define TRUE  1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
}Node;

typedef struct _CLL
{
    Node * tail;
    Node * cur;
    Node * before;
    int numOfData;
}CList;

typedef CList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);  // 꼬리에 노드를 추가
void LInsertFront(List * plist, Data data); // 머리에 노드를 추가

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
Data LRemove(List * plist);
int LCount(List * plist);


#endif /* CLinkedList_h */

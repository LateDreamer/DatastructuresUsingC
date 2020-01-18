//
//  CLinkedList.h
//  Ex6_1
//
//  Created by JIN YOUNG PARK on 2020/01/14.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef CLinkedList_h
#define CLinkedList_h

#define TRUE    1
#define FALSE   0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _CLL
{
    Node * tail;
    Node * cur;
    Node * before;
    int numOfData;
} CList;

typedef CList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);
void LInsertFront(List * plist, Data data);

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
Data LRemove(List * plist);
int LCount(List * plist);

#endif /* CLinkedList_h */

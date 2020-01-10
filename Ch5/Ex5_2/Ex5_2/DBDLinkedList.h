//
//  DBDLInkedList.h
//  Ex5_2
//
//  Created by JIN YOUNG PARK on 2020/01/09.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef DBDLinkedList_h
#define DBDLinkedList_h

#define TRUE     1
#define FALSE    0

typedef int Data;
typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * prev;
} Node;

typedef struct _dbDLinkedList
{
    Node * head;
    Node * tail;
    Node * cur;
    int numOfData;
} DBDLinkedList;

typedef DBDLinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data); //꼬리에 노드를 추가

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);

int LRemove(List * plist);
int LCount(List * plist);

#endif /* DBDLinkedList_h */

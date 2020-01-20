//
//  Deque.h
//  DequeBaseQueue
//
//  Created by JIN YOUNG PARK on 2020/01/20.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef Deque_h
#define Deque_h

#define TRUE       1
#define FALSE      0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * prev;
} Node;

typedef struct _dlDeque
{
    Node * head;
    Node * tail;
} DLDeque;

typedef DLDeque Deque;

void DequeInit(Deque * pdeq);
int DQIsEmpty(Deque * pdeq);

void DQAddFirst(Deque * pdeq, Data data);
void DQAddLast(Deque * pdeq, Data data);

Data DQRemoveFirst(Deque * pdeq);
Data DQRemoveLast(Deque * pdeq);

Data DQGetFirst(Deque * pdeq);
Data DQGETLast(Deque * pdeq);

#endif /* Deque_h */

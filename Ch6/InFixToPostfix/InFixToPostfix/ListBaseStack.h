//
//  ListBaseStack.h
//  InFixToPostfix
//
//  Created by JIN YOUNG PARK on 2020/01/17.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef ListBaseStack_h
#define ListBaseStack_h

#define TRUE       1
#define FALSE      0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _listStack
{
    Node * head;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
Data SPeek(Stack * pstack);

#endif /* ListBaseStack_h */

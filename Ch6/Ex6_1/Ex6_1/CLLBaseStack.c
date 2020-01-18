//
//  CLLBaseStack.c
//  Ex6_1
//
//  Created by JIN YOUNG PARK on 2020/01/14.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "CLLBaseStack.h"
#include "CLinkedList.h"

void StackInit(Stack * pstack)
{
    pstack->plist = (List*)malloc(sizeof(List));
    ListInit(pstack->plist);
}

int SIsEmpty(Stack * pstack)
{
    if(LCount(pstack->plist) == 0)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack * pstack, Data data)
{
    LInsertFront(pstack->plist, data);
}

Data SPop(Stack * pstack)
{
    Data data;
    LFirst(pstack->plist, &data);
    LRemove(pstack->plist);
    return data;
}

Data SPeek(Stack * pstack)
{
    Data data;
    LFirst(pstack->plist, &data);
    return data;
}

/* 내 답
void StackInit(Stack * pstack)
{
    ListInit(pstack);
}

int SIsEmpty(Stack * pstack)
{
    if(pstack->numOfData == 0)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack * pstack, Data data)
{
    LInsertFront(pstack, data);
}

Data SPop(Stack * pstack)
{
    Data rdata;
    LFirst(pstack, &rdata);
    LRemove(pstack);
    return rdata;
}

Data SPeek(Stack * pstack)
{
    Data data;
    LFirst(pstack, &data);
    return data;
}
*/

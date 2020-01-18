//
//  CLLBaseStack.h
//  Ex6_1
//
//  Created by JIN YOUNG PARK on 2020/01/14.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef CLLBaseStack_h
#define CLLBaseStack_h

#include "CLinkedList.h"


// 정답지
#define TRUE     1
#define FALSE    0

typedef int Data;

typedef struct _listStack
{
    List * plist;
} ListStack;

typedef ListStack Stack;

/* 내 답
typedef List Stack;
 */


// 공통 부분
void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
Data SPeek(Stack * pstack);


#endif /* CLLBaseStack_h */



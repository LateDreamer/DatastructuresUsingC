//
//  ArrayBaseStack.h
//  ArrayBaseStack
//
//  Created by JIN YOUNG PARK on 2020/01/13.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef ArrayBaseStack_h
#define ArrayBaseStack_h

#define TRUE      1
#define FALSE     0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrayStack
{
    Data stackArr[STACK_LEN];
    int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);         // 스택의 초기화
int SIsEmpty(Stack * pstack);           // 스택이 비었는지 확인

void SPush(Stack * pstack, Data data);  // 스택의 push 연산
Data SPop(Stack * pstack);              // 스택의 pop 연산
Data Speek(Stack * pstack);             // 스택의 peek 연산

#endif /* ArrayBaseStack_h */

//
//  main.c
//  ArrayBaseStack
//
//  Created by JIN YOUNG PARK on 2020/01/13.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "ArrayBaseStack.h"

int main(void)
{
    // stack의 생성 및 초기화
    Stack stack;
    StackInit(&stack);
    
    // 데이터 넣기
    SPush(&stack, 1); SPush(&stack, 2);
    SPush(&stack, 3); SPush(&stack, 4);
    SPush(&stack, 5);
    
    // 데아터 꺼내기
    while (!SIsEmpty(&stack))
    {
        printf("%d ", SPop(&stack));
    }
    
    return 0;
}

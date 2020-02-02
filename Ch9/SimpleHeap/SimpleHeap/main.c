//
//  main.c
//  SimpleHeap
//
//  Created by JIN YOUNG PARK on 2020/01/24.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "SimpleHeap.h"

int main(void)
{
    Heap heap;
    HeapInit(&heap);  // 힙의 초기화
    
    HInsert(&heap, 'A', 1);  // 문자 A를 최고의 우선 순위로 저장
    HInsert(&heap, 'B', 2);  // B를 두 번째 우선 순위로 저장
    HInsert(&heap, 'C', 3);  // C를 세 번째 우선 순위로 저장
    printf("%c \n", HDelete(&heap));
    
    HInsert(&heap, 'A', 1);  // 다시 저장
    HInsert(&heap, 'B', 2);
    HInsert(&heap, 'C', 3);
    printf("%c \n", HDelete(&heap));
    
    while (!HIsEmpty(&heap)) 
        printf("%c \n", HDelete(&heap));
    
    
    return 0;
}

//
//  main.c
//  DLinkedListSort
//
//  Created by JIN YOUNG PARK on 2020/01/05.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "DLinkedList.h"


int WhoIsPrecede(int d1, int d2)
{
    if (d1<d2) {
        return 0;
    } else {
        return 1;
    }
}


int main(void)
{
    // 리스트의 생성 및 초기화
    List list;
    int data;
    ListInit(&list);
    
    SetSortRule(&list, WhoIsPrecede);
    // 5개의 데이터 저장
    LInsert(&list, 33);LInsert(&list, 33);
    LInsert(&list, 22);LInsert(&list, 22);
    LInsert(&list, 11);
    
    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수: %d \n", LCount(&list));
    
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    
    // 숫자 22를 검색하여 모두 삭제
    if(LFirst(&list, &data))
    {
        if(data == 22)
            LRemove(&list);
        
        while(LNext(&list, &data))
        {
            if(data == 22)
                LRemove(&list);
        }
    }
    
    // 삭제 후 남아있는 데이터 전체 출력
    printf("현재 데이터의 수: %d \n", LCount(&list));
    
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    
    return 0;
}
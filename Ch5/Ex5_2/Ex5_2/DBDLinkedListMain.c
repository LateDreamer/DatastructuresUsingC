//
//  main.c
//  Ex5_2
//
//  Created by JIN YOUNG PARK on 2020/01/09.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "DBDLinkedList.h"

int main(void) {
    List list;
    int data;
    ListInit(&list);
    
    // 8개의 데이터 저장
    LInsert(&list, 1); LInsert(&list, 2);
    LInsert(&list, 3); LInsert(&list, 4);
    LInsert(&list, 5); LInsert(&list, 6);
    LInsert(&list, 7); LInsert(&list, 8);
    
    // 저장된 데이터의 조회
    if(LFirst(&list, &data))
    {
        printf("%d ",data);
        
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
        printf("\n");
    }
    
    // 2의 배수 전부 삭제
    if(LFirst(&list, &data))
    {
        if(data%2 == 0)
            LRemove(&list);
        
        while (LNext(&list, &data)) {
            if(data%2 == 0)
                LRemove(&list);
        }
    }
    
    //  저장된 데이터의 재조회
    if(LFirst(&list, &data))
    {
        printf("%d ",data);
        
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    
    return 0;
}

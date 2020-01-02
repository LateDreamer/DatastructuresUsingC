//
//  main.c
//  Ex3_1
//
//  Created by JIN YOUNG PARK on 2019/12/30.
//  Copyright © 2019 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    List list;
    int i,data;
    int sum = 0;
    ListInit(&list);
    
    // 1~9 리스트에 저장
    for(i=1;i<10;i++){
        LInsert(&list, i);
    }
    
    // 합계구하기
    if (LFirst(&list, &data)){
        printf("%d ", data);
        sum += data;
        while(LNext(&list, &data))
        {
            printf("%d ", data);
            sum += data;
        }
    }
    printf("\nsum = %d\n\n",sum);
    
    // 2, 3의 배수 삭제
    if(LFirst(&list, &data)){
        if ((data%2 == 0) || (data%3 == 0))
            LRemove(&list);
        
        while(LNext(&list, &data)){
            if ((data%2 == 0) || (data%3 == 0))
            LRemove(&list);
        }
    }
    
    // 리스트 출력
    if (LFirst(&list, &data)){
        printf("%d ", data);
        
        while(LNext(&list, &data))
            printf("%d ", data);
    }
    
    return 0;
}

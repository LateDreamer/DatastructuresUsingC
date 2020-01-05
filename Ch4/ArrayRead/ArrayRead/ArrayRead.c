//
//  main.c
//  ArrayRead
//
//  Created by JIN YOUNG PARK on 2020/01/03.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int arr[10];
    int readCount = 0;
    int readData;
    int i;
    
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if(readData < 1)
            break;
        
        arr[readCount++] = readData;
    }
    
    for(i=0; i<readCount; i++)
        printf("%d ", arr[i]);
    
    return 0;
}

//
//  main.c
//  SelectionSort
//
//  Created by JIN YOUNG PARK on 2020/02/02.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>

void SelSort(int arr[], int n)
{
    int i,j;
    int maxIdx;
    int temp;
    
    for(i=0; i<n-1; i++)
    {
        maxIdx = i;
        
        for(j=i+1; j<n; j++) //최솟값 탐색
        {
            if(arr[j] < arr[maxIdx])
                maxIdx = j;
        }
        
        // 교환
        temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

int main(void)
{
    int arr[4] = {3, 4, 2, 1};
    int i;
    
    SelSort(arr, sizeof(arr)/sizeof(int));
    
    for(i=0; i<4; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}

//
//  main.c
//  QuickSort
//
//  Created by JIN YOUNG PARK on 2020/02/02.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>

void Swap(int arr[], int idx1, int idx2)
{
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

// 문제 10-1 추가
int MedianOfThree(int arr[], int left, int right)
{
    int samples[3] = {left, (left+right)/2, right}; // 인덱스 값으로 배열을 생성
    if(arr[samples[0]] > arr[samples[1]])
        Swap(samples, 0, 1);
    
    if(arr[samples[1]] > arr[samples[2]])
        Swap(samples, 1, 2);
    
    if(arr[samples[0]] > arr[samples[1]])
    Swap(samples, 0, 1);
    
    return samples[1];
}

int Partition(int arr[], int left, int right)
{
    int pIdx = MedianOfThree(arr, left, right); // 문제 10-1
    int pivot = arr[pIdx]; //문제 10-1
    
    int low = left+1;
    int high = right;
    
    Swap(arr, left, pIdx);  //문재 10-1 피벗을 가장 왼쪽으로 이동
    
    printf("피벗: %d \n", pivot); // 문제 10-1 추가
    
    while(low <= high)  // 교차되지 않을 때까지 반복
    {
        // 피벗보다 큰 값을 찾는 과정
        while(pivot >= arr[low] && low <= right)
            low++;  // low를 오른쪽으로 이동
        
        // 피벗보다 작은 값을 찾는 과정
        while(pivot <= arr[high] && high >= (left+1))
            high--; // high를 왼쪽으로 이동
        
        // 교차되지 않은 상황이라면 Swap 실행
        if(low <= high)
            Swap(arr, low, high);
    }
    
    Swap(arr, left, high); // 피벗과 high가 가리키는 대상 교환
    return high; // 옮겨진 피벗의 위치정보 반환
}

void QuickSort(int arr[], int left, int right)
{
    if(left <= right)
    {
        int pivot = Partition(arr, left, right); //둘로 나눠서
        QuickSort(arr, left, pivot-1); //왼쪽 영역을 정렬
        QuickSort(arr, pivot+1, right); //오른쪽 영역을 정렬
    }
}

int main(void)
{
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; //문제 10-1
    //int arr[7] = {3,2,4,1,7,6,5};
    // int arr[3] = {3,3,3};
    
    int len = sizeof(arr)/sizeof(int);
    int i;
    
    QuickSort(arr, 0, sizeof(arr)/sizeof(int)-1);
    
    for(i=0; i<len; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}

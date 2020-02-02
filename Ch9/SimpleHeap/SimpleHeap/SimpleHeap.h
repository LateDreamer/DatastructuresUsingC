//
//  SimpleHeap.h
//  SimpleHeap
//
//  Created by JIN YOUNG PARK on 2020/01/24.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef SimpleHeap_h
#define SimpleHeap_h

#define TRUE       1
#define FALSE      0

#define HEAP_LEN   100

typedef char HData;
typedef int Priority;

typedef struct _heapElem
{
    Priority pr;   // 값이 작을 수록 우선순위
    HData data;
} HeapElem;

typedef struct _heap
{
    int numOfData;
    HeapElem heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap * ph);
int HIsEmpty(Heap * ph);

void HInsert(Heap * ph, HData data, Priority pr);
HData HDelete(Heap * ph);

#endif /* SimpleHeap_h */

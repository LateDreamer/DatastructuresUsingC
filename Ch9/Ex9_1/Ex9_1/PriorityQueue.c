//
//  PriorityQueue.c
//  Ex9_1
//
//  Created by JIN YOUNG PARK on 2020/02/02.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include "PriorityQueue.h"
#include "UsefulHeap.h"

void PQueueInit(PQueue * ppq, PriorityComp pc)
{
    HeapInit(ppq, pc);
}

int PQIsEmpty(PQueue * ppq)
{
    return HIsEmpty(ppq);
}

void PEnqueue(PQueue * ppq, PQData data)
{
    HInsert(ppq, data);
}

PQData PDequeue(PQueue * ppq)
{
    return HDelete(ppq);
}

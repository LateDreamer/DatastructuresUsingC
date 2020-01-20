//
//  DequeBaseQueue.c
//  DequeBaseQueue
//
//  Created by JIN YOUNG PARK on 2020/01/20.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include "DequeBaseQueue.h"
#include <stdio.h>
#include <stdlib.h>

void QueueInit(Queue * pq)
{
    DequeInit(pq);
}

int QIsEmpty(Queue * pq)
{
    return DQIsEmpty(pq);
}

void Enqueue(Queue * pq, Data data)
{
    DQAddLast(pq, data);
}

Data Dequeue(Queue * pq)
{
    return DQRemoveFirst(pq);
}

Data QPeek(Queue * pq)
{
    return DQGetFirst(pq);
}

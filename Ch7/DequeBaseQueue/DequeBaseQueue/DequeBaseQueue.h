//
//  DequeBaseQueue.h
//  DequeBaseQueue
//
//  Created by JIN YOUNG PARK on 2020/01/20.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef DequeBaseQueue_h
#define DequeBaseQueue_h

#include "Deque.h"

typedef Deque Queue;

void QueueInit(Queue * pq);
int QIsEmpty(Queue * pq);

void Enqueue(Queue * pq, Data data);
Data Dequeue(Queue * pq);
Data QPeek(Queue * pq);

#endif /* DequeBaseQueue_h */

//
//  main.c
//  DequeBaseQueue
//
//  Created by JIN YOUNG PARK on 2020/01/20.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "DequeBaseQueue.h"

int main(void)
{
    Queue q;
    QueueInit(&q);
    
    Enqueue(&q, 1);
    Enqueue(&q, 2);
    Enqueue(&q, 3);
    Enqueue(&q, 4);
    Enqueue(&q, 5);
    
    while (!QIsEmpty(&q)) {
        printf("%d ", Dequeue(&q));
    }
    
    return 0;
}

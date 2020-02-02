//
//  main.c
//  Ex9_1
//
//  Created by JIN YOUNG PARK on 2020/02/02.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(char * str1, char * str2)
{
    return strlen(str2) - strlen(str1);
}

int main(void)
{
    PQueue pq;
    PQueueInit(&pq, DataPriorityComp);
    
    PEnqueue(&pq, "Good morning");
    PEnqueue(&pq, "I am a boy");
    PEnqueue(&pq, "Priority Queue");
    PEnqueue(&pq, "Do you like coffee");
    PEnqueue(&pq, "I am so happy");
    
    while(!PQIsEmpty(&pq))
        printf("%s \n", PDequeue(&pq));
    
    return 0;
}

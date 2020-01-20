//
//  ListBaseQueue.c
//  ListBaseQueue
//
//  Created by JIN YOUNG PARK on 2020/01/19.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void QueueInit(Queue * pq)
{
    pq->front = NULL;
    pq->rear = NULL;
}

int QIsEmpty(Queue * pq)
{
    if(pq->front == NULL)
        return TRUE;
    else
        return FALSE;
}

void Enqueue(Queue * pq, Data data)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;
    
    if(QIsEmpty(pq)) // 첫번쨰 노드라면
    {
        pq->front = newNode; // front가 새 노드를 가리키게 하고
        pq->rear = newNode;  // rear도 새 노드를 가리키게 한다
    }
    else
    {
        pq->rear->next = newNode; // 마지막 노드가 새 노드를 가리키게 하고
        pq->rear = newNode; // rear가 새 노드를 가리키게 한다
    }
}

Data Dequeue(Queue * pq)
{
    Node * delNode;
    Data retData;
    
    if(QIsEmpty(pq))
    {
        printf("Queue Memory Error!");
        exit(-1);
    }
    
    delNode =  pq->front; // 삭게할 노드의 주소값 저장
    retData = delNode->data; // 삭제할 노드가 지닌 값 저장
    pq->front = pq->front->next; // 삭제할 노드의 다음 노드를 front가 가리킴
    
    free(delNode);
    return retData;
}

Data QPeek(Queue * pq)
{
    if(QIsEmpty(pq))
    {
        printf("Queue Memory Error!");
        exit(-1);
    }
    
    return pq->front->data;
}

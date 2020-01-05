//
//  main.c
//  Ex4_1
//
//  Created by JIN YOUNG PARK on 2020/01/04.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int data;
    struct _node * next;
}Node;

int main(void)
{
    Node * head = NULL; //Null 포인터 초기화
    Node * tail = NULL;
    Node * cur = NULL;
    
    Node * newNode = NULL;
    int readData;
    
    // 데이터 입력 과정
    while(1)
    {
        printf("자연수 입력: ");
        scanf("%d", & readData);
        if(readData<1)
            break;
        
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;
        
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    printf("\n");
    
    if(head==NULL)
        printf("저장된 자연수가 존재하지 않습니다.");
    else
    {
        cur = head;
        printf("%d ",cur->data);
        
        while (cur->next != NULL) {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");
    
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        Node * delNode = head;
        Node * delNextNode = head->next;
        
        printf("%d을(를) 삭제합니다.\n", delNode->data);
        free(delNode);
        
        while (delNextNode != NULL) {
            delNode = delNextNode;
            delNextNode = delNextNode->next;
            
            printf("%d을(를) 삭제합니다.\n", delNode->data);
            free(delNode);
        }
    }
    return 0;
}

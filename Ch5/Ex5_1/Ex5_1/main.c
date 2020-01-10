//
//  main.c
//  Ex5_1
//
//  Created by JIN YOUNG PARK on 2020/01/06.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

Employee * WhosNightDuty(List * plist, char * name, int day);
void ShowEmployeeInfo(Employee * emp);

int main(void)
{
    int i;
    Employee * pemp;
    
    // List의 생성 및 초기화
    List list;
    ListInit(&list);
    
    // 리스트에 4명의 직원 등록
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 11111;
    strcpy(pemp->name, "Terry");
    LInsert(&list, pemp);
    
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 2222;
    strcpy(pemp->name, "Jerry");
    LInsert(&list, pemp);
    
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 3333;
    strcpy(pemp->name, "Harry");
    LInsert(&list, pemp);
    
    pemp = (Employee*)malloc(sizeof(Employee));
    pemp->empNum = 4444;
    strcpy(pemp->name, "Sunny");
    LInsert(&list, pemp);
    
    // Terry 뒤로 3일 뒤 당직자는?
    pemp = WhosNightDuty(&list, "Terry", 3);
    ShowEmployeeInfo(pemp);
    
    // Sunny 뒤로 15일 뒤 당직자는?
    pemp = WhosNightDuty(&list, "Sunny", 15);
    ShowEmployeeInfo(pemp);
    
    // 할당된 메모리의 전체 소멸
    if (LFirst(&list, &pemp))
    {
        free(pemp);
        for(i=0; i<LCount(&list)-1; i++)
        {
            if(LNext(&list, &pemp))
                free(pemp);
        }
    }
    return 0;
}

Employee * WhosNightDuty(List * plist, char * name, int day)
{
    int i, num;
    Employee * ret;
    
    num = LCount(plist);
    
    // 이름 찾기
    LFirst(plist, &ret);
    
    if(strcmp(ret->name, name) != 0)
    {
        for(i=0; i<num-1; i++)
        {
            LNext(plist, &ret);
            
            if(strcmp(ret->name, name) == 0)
                break;
        }
        if(i >= num-1)   // 해당하는 이름이 존재하지 않으면
            return NULL;
    }
    
    // 그 뒤로 며칠 뒤
    for(i=0; i<day; i++)
        LNext(plist, &ret);
    
    return ret;
}

void ShowEmployeeInfo(Employee * emp)
{
    printf("Employee name: %s \n", emp->name);
    printf("Employee number: %d \n\n", emp->empNum);
}

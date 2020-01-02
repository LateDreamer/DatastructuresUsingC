//
//  ArrayList.h
//  Ex3_1
//
//  Created by JIN YOUNG PARK on 2019/12/30.
//  Copyright © 2019 JIN YOUNG PARK. All rights reserved.
//

#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE    1
#define FALSE    0

/** ArrayList의 정의****/
#define LIST_LEN    100
typedef int LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;


/** ArrayListø와 관련된 연산들 ****/
typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif

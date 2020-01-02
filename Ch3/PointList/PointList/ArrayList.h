//
//  ArrayList.h
//  PointList
//
//  Created by JIN YOUNG PARK on 2020/01/01.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#include "Point.h"  //첫번째 변경

#define TRUE    1
#define FALSE    0

/*** ArrayList의 정의 ****/
#define LIST_LEN    100
typedef Point * LData; //두번째 변경

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;


/*** ArrayList와 관련된 연산들 ****/
typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif

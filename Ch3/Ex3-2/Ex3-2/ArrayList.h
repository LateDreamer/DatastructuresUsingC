//
//  ArrayList.h
//  Ex3-2
//
//  Created by JIN YOUNG PARK on 2020/01/02.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN  100
#include "NameCard.h"

typedef NameCard * LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif 

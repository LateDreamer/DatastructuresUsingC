//
//  Table2.h
//  ChainedTable
//
//  Created by JIN YOUNG PARK on 2020/02/23.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef Table2_h
#define Table2_h

#include "Slot2.h"
#include "DLinkedList.h"

#define MAX_TBL    100

typedef int HashFunc(Key k);

typedef struct _table
{
    List tbl[MAX_TBL];
    HashFunc * hf;
} Table;

void TBLInit(Table * pt, HashFunc * f);
void TBLInsert(Table * pt, Key k, Value v);
Value TBLDelete(Table * pt, Key k);
Value TBLSearch(Table * pt, Key k);

#endif /* Table2_h */

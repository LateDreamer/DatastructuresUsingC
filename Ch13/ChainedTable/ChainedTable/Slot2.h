//
//  Slot2.h
//  ChainedTable
//
//  Created by JIN YOUNG PARK on 2020/02/23.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef Slot2_h
#define Slot2_h

#include "Person.h"

typedef int Key;
typedef Person * Value;

typedef struct _slot
{
    Key key;
    Value val;
} Slot;

#endif /* Slot2_h */

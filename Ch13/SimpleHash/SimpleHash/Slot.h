//
//  Slot.h
//  SimpleHash
//
//  Created by JIN YOUNG PARK on 2020/02/14.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef Slot_h
#define Slot_h

#include "Person.h"

typedef int Key;  // 주민번호
typedef Person * Value;

enum SlotStatus {EMPTY, DELETED, INUSE};

typedef struct _slot
{
    Key key;
    Value val;
    enum SlotStatus status;
}Slot;

#endif /* Slot_h */

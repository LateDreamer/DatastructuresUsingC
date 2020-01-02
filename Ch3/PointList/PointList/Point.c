//
//  Point.c
//  PointList
//
//  Created by JIN YOUNG PARK on 2020/01/01.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "Point.h"

void SetPointPos(Point * ppos, int xpos, int ypos)
{
    ppos -> xpos = xpos;
    ppos -> ypos = ypos;
}

void ShowPointPos(Point * ppos)
{
    printf("[%d, %d] \n", ppos->xpos, ppos->ypos);
}

int PointComp(Point * pos1, Point * pos2)
{
    if(pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)
        return 0;
    else if(pos1->xpos == pos2->xpos)
        return 1;
    else if(pos1->ypos == pos2->ypos)
        return 2;
    else
        return -1;
}

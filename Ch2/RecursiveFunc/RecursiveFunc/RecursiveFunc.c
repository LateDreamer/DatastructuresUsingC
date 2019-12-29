//
//  RecursiveFunc.c
//  RecursiveFunc
//
//  Created by JIN YOUNG PARK on 2019/12/29.
//  Copyright © 2019 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>

void Recursive(int num)
{
    if(num <= 0)
        return;
    printf("Recursive call! %d \n", num);
    Recursive(num-1);
}

int main(void)
{
    Recursive(3);
    return 0;
}

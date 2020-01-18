//
//  main.c
//  PostCalculator
//
//  Created by JIN YOUNG PARK on 2020/01/19.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "PostCalculator.h"

int main(void)
{
    char postExp1[] = "42*8+";
    char postExp2[] = "123+*4/";
    
    printf("%s = %d \n", postExp1, EvalRPNExp(postExp1));
    printf("%s = %d \n", postExp2, EvalRPNExp(postExp2));
    
    return 0;
}

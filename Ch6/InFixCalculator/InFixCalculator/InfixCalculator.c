//
//  InfixCalculator.c
//  InFixCalculator
//
//  Created by JIN YOUNG PARK on 2020/01/19.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <string.h>
#include <stdlib.h>
#include "InFixToPostfix.h"
#include "PostCalculator.h"

int EvalInfixExp(char exp[])
{
    int len = strlen(exp);
    int ret;
    char * expcpy = (char*)malloc(sizeof(len+1));
    strcpy(expcpy, exp);
    
    ConvToRPNExp(expcpy);
    ret = EvalRPNExp(expcpy);
    
    free(expcpy);
    return ret;
}

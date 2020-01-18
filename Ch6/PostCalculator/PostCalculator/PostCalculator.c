//
//  PostCalculator.c
//  PostCalculator
//
//  Created by JIN YOUNG PARK on 2020/01/19.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"

int EvalRPNExp(char exp[])
{
    Stack stack;
    int expLen = strlen(exp);
    int i;
    char tok, op1, op2;
    
    StackInit(&stack);
    
    for(i=0; i<expLen; i++)
    {
        tok = exp[i];
        
        if(isdigit(tok))
        {
            SPush(&stack, tok - '0');
        }
        else
        {
            op2 = SPop(&stack);
            op1 = SPop(&stack);
            
            switch (tok)
            {
                case '+':
                    SPush(&stack, op1+op2);
                    break;
                case '-':
                    SPush(&stack, op1-op2);
                    break;
                case '*':
                    SPush(&stack, op1*op2);
                    break;
                case '/':
                    SPush(&stack, op1/op2);
                    break;
            }
        }
    }
    return SPop(&stack);
}

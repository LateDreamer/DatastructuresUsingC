//
//  main.c
//  ExpressionTree
//
//  Created by JIN YOUNG PARK on 2020/01/21.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include "ExpressionTree.h"

int main(void)
{
    char exp[] = "12+7*";
    BTreeNode * eTree = MakeExpTree(exp);
    
    printf("전위 표기법의 수식: ");
    ShowPrefixTypeExp(eTree); printf("\n");
    
    printf("중위 표기법의 수식: ");
    ShowInfixTypeExp(eTree); printf("\n");
    
    printf("후위 표기법의 수식: ");
    ShowPostfixtypeExp(eTree); printf("\n");
    
    printf("연산의 결과: %d \n", EvaluateExptTree(eTree));
    
    return 0;
}

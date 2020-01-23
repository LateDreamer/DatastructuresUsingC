//
//  ExpressionTree.c
//  ExpressionTree
//
//  Created by JIN YOUNG PARK on 2020/01/22.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListBaseStack.h"
#include "BinaryTree2.h"


BTreeNode * MakeExpTree(char exp[])
{
    Stack stack;
    BTreeNode * pnode;
    
    int expLen = strlen(exp);
    int i;
    
    StackInit(&stack);
    
    for(i=0; i<expLen; i++)
    {
        pnode = MakeBTreeNode();
        
        if(isdigit(exp[i])) // 피연산자라면...
        {
            SetData(pnode, exp[i]-'0'); // 문자를 정수로 바꿔서 저장
        }
        else // 연산자라면...
        {
            MakeRightSubTree(pnode, SPop(&stack));
            MakeLeftSubTree(pnode, SPop(&stack));
            SetData(pnode, exp[i]);
        }
        
        SPush(&stack, pnode);
    }
    return SPop(&stack);
}

int EvaluateExptTree(BTreeNode * bt) // 수식 트리 계산
{
    int op1, op2;
    
    op1 = GetData(GetLeftSubTree(bt)); // 첫 번째 피연산자
    op2 = GetData(GetRightSubTree(bt)); // 두 번째 피연산자
    
    switch (GetData(bt))
    {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
    }
    return 0;
}

void ShowNodeData(int data)
{
    if(0<=data && data<=9)
        printf("%d ", data);  // 피연산자 출력
    else
        printf("%c ", data);  // 연산자 출력
}

void ShowPrefixTypeExp(BTreeNode * bt)  // 전위 표기법 기반 출력
{
    PreorderTraverse(bt, ShowNodeData);
}


void ShowInfixTypeExp(BTreeNode * bt)   // 중위 표기법 기반 출력, Ex8-2
{
    if(bt == NULL)
        return;
    
    if (bt->left != NULL && bt->right != NULL)
        printf(" ( ");
    
    ShowInfixTypeExp(bt->left);
    ShowNodeData(bt->data);
    ShowInfixTypeExp(bt->right);
    
    if (bt->left != NULL && bt->right != NULL)
        printf(" ) ");
}
void ShowPostfixtypeExp(BTreeNode * bt) // 후휘 표기법 기만 출력
{
    PostorderTraverse(bt, ShowNodeData);
}

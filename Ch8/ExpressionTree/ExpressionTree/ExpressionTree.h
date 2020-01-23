//
//  ExpressionTree.h
//  ExpressionTree
//
//  Created by JIN YOUNG PARK on 2020/01/22.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef ExpressionTree_h
#define ExpressionTree_h

#include "BinaryTree2.h"

BTreeNode * MakeExpTree(char exp[]); // 수식 트리 구성
int EvaluateExptTree(BTreeNode * bt); // 수식 트리 계산

void ShowPrefixTypeExp(BTreeNode * bt);  // 전위 표기법 기반 출력
void ShowInfixTypeExp(BTreeNode * bt);   // 중위 표기법 기반 출력
void ShowPostfixtypeExp(BTreeNode * bt); // 후휘 표기법 기만 출력

#endif /* ExpressionTree_h */

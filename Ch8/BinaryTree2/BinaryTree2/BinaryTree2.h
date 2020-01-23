//
//  BinaryTree2.h
//  BinaryTree2
//
//  Created by JIN YOUNG PARK on 2020/01/21.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef BinaryTree2_h
#define BinaryTree2_h

typedef int BTData;

typedef struct _bTreeNode
{
    BTData data;
    struct _bTreeNode * left;
    struct _bTreeNode * right;
} BTreeNode;

BTreeNode * MakeBTreeNode(void);
BTData GetData(BTreeNode * bt);
void SetData(BTreeNode * bt, BTData data);

BTreeNode * GetLeftSubTree(BTreeNode * bt);
BTreeNode * GetRightSubTree(BTreeNode * bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);

typedef void VisitFuncPtr(BTData data);

void PreorderTraverse(BTreeNode * bt, VisitFuncPtr action);
void InorderTraverse(BTreeNode * bt, VisitFuncPtr action);
void PostorderTraverse(BTreeNode * bt, VisitFuncPtr action);

// 문제 08-1 추가
void DeleteTree(BTreeNode * bt);

#endif /* BinaryTree2_h */

//
//  BinaryTree3.h
//  AVLTree
//
//  Created by JIN YOUNG PARK on 2020/02/14.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef BinaryTree3_h
#define BinaryTree3_h

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

BTreeNode * RemoveLeftSubTree(BTreeNode * bt);
BTreeNode * RemoveRightSuvTRee(BTreeNode * bt);
void ChangeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void ChangeRightSubTree(BTreeNode * main, BTreeNode * sub);

#endif /* BinaryTree3_h */

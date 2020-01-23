//
//  BinaryTree.h
//  BinaryTree
//
//  Created by JIN YOUNG PARK on 2020/01/20.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

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

#endif /* BinaryTree_h */

//
//  BinarySearchTree.h
//  BinarySearchTree
//
//  Created by JIN YOUNG PARK on 2020/02/04.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "BinaryTree2.h"

typedef BTData BSTData;

// BST의 생성 및 초기화
void BSTMakeAndInit(BTreeNode ** pRoot);

// 노드에 저장된 데이터 반환
BSTData BSTGetNodeData(BTreeNode * bst);

// BST를 대상으로 데이터 저장(노드의 생성과정 포함)
void BSTInsert(BTreeNode ** pRoot, BSTData data);

// BST를 대상으로 데이터 탐색
BTreeNode * BSTSearch(BTreeNode * bst, BSTData target);

#endif /* BinarySearchTree_h */

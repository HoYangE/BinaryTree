#pragma once
#include <iostream>

using namespace std;
struct Node
{
	int key;
	Node *left;
	Node *right;
};

class Tree
{
	Node rootNode;
	void SuccessorCopy(Node **T, int *key)
	{
		if ((*T)->left == nullptr)
		{
			*key = (*T)->key;
			Node* Temp = *T;
			(*T) = (*T)->right;
			delete Temp;
		}
		else
			SuccessorCopy(&(*T)->left, key);
	}

public:
	Tree(int key) { rootNode.key = key; rootNode.left = nullptr; rootNode.right = nullptr;}
	Node* InsertNode(Node *T,int key);
	Node* DeleteNode(Node *T,int key);
	Node* Search(Node * T, int key);
	Node* GetRootNode();
	void PreOrder(Node* T);
	void InOrder(Node* T);
	void PostOrder(Node *T);
};


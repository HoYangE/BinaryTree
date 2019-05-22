#include "Tree.h"


Node* Tree::InsertNode(Node *T,int key)
{
	if (T == nullptr)
	{
		T = new Node;
		T->key = key;
		T->left = nullptr;
		T->right = nullptr;
	}
	else if (T->key > key)
		T->left = InsertNode(T->left, key);
	else
		T->right = InsertNode(T->right, key);
	return T;
}

Node* Tree::DeleteNode(Node *T,int key)
{
	if (T == nullptr)
		cout << "No Record with Such Key";
	else if (T->key > key)
		T->left = DeleteNode(T->left, key);
	else if (T->key < key)
		T->right = DeleteNode(T->right, key);
	else if (T->key == key) 
	{
		if ((T->left == nullptr) && (T->right == nullptr))
		{
			Node * Temp = T;
			T = nullptr;
			delete Temp;
			return T;
		}
		else if (T->left == nullptr)
		{
			Node * Temp = T;
			T = T->right;
			delete Temp;
			return T;
		}
		else if (T->right == nullptr)
		{
			Node * Temp = T;
			T = T->left;
			delete Temp;
			return T;
		}
		else
			SuccessorCopy(&T, &(T->key));
	}
	return T;
}

Node* Tree::Search(Node * T,int key)
{
	if (T == nullptr)
		cout << "No Such Node";
	else if (T->key == key)
		return T;
	else if (T->key > key)
		return Search(T->left, key);
	else
		return Search(T->right, key);
}

Node * Tree::GetRootNode()
{
	return &rootNode;
}

void Tree::PreOrder(Node * T)
{
	if (T != NULL) 
	{
		cout<<(T->key)<<endl;
		PreOrder(T->left);
		PreOrder(T->right);
	}
}

void Tree::InOrder(Node * T)
{
	if (T != NULL)
	{
		InOrder(T->left);
		cout << (T->key) << endl;
		InOrder(T->right);
	}
}

void Tree::PostOrder(Node * T)
{
	if (T != NULL)
	{
		PostOrder(T->left);
		PostOrder(T->right);
		cout << (T->key) << endl;
	}
}

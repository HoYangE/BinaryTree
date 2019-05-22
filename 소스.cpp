#include <iostream>
#include "Tree.h"

using namespace std;

void main()
{
	Tree tree(10);

	// �ڽľ��� ��� ���� ����
	// ���� �ڽĸ� �ִ� ��� ���� ����
	// ������ �ڽĸ� �ִ� ��� ���� ����
	// �ڽ� �Ѵ� �ִ� ��� ���� ����

	tree.InsertNode(tree.GetRootNode(), 3);
	tree.InsertNode(tree.GetRootNode(), 12);

	tree.InsertNode(tree.GetRootNode(), 11);
	tree.InsertNode(tree.GetRootNode(), 15);

	tree.DeleteNode(tree.GetRootNode(), 12);

	tree.PreOrder(tree.GetRootNode());
	cout << endl;
	tree.InOrder(tree.GetRootNode());
	cout << endl;
	tree.PostOrder(tree.GetRootNode());
	cout << endl;
}
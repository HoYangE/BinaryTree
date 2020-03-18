#include <iostream>
#include "Tree.h"

using namespace std;

void main()
{
	Tree tree(10);

	// 자식없는 노드 정상 삭제
	// 왼쪽 자식만 있는 노드 정상 삭제
	// 오른쪽 자식만 있는 노드 정상 삭제
	// 자식 둘다 있는 노드 정상 삭제

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

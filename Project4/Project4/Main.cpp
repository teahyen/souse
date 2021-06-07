#include <iostream>
using namespace std;
#include "BinaryTree.h"

int main(void) 
{
	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();
	BTreeNode* bt5 = MakeBTreeNode();
	BTreeNode* bt6 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	SetData(bt6, 6);

	MakeLeftSudTree(bt1, bt2);
	MakeRightSudTree(bt1, bt3);
	MakeLeftSudTree(bt1, bt5);
	MakeRightSudTree(bt1, bt5);
	MakeRightSudTree(bt1, bt6);

	PreorderTraverse(bt1);
	cout << endl;
	InorderTraverse(bt1);
	cout << endl;
	PostorderTraverese(bt1);
	cout << endl;

}

void PostorderTraverese(BTreeNode* bt)
{
	if (bt == NULL)
		return;
	cout << bt->data << endl;
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}
void InorderTraverse(BTreeNode* bt) 
{
	if (bt == NULL)
		return;
	InorderTraverse(bt->left);
	cout << bt->data << endl;
	InorderTraverse(bt->right);
}

void PostorderTraverse(BTreeNode* bt) {
	if (bt == NULL)
		return;
	PostorderTraverese(bt->left);
	PostorderTraverese(bt->right);
	cout << bt->data << endl;
}
typedef BTData int;
struct BTreeNode
{
	BTData data;
	struct BTreeNode* left;
	struct BTreeNode* right;
};

//BTreeNode* bt1 = MakeBTreeNode();
BTreeNode* MakeBTreeNode(void) {
	BTreeNode* nd = new BTreeNode;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
//DeleteBTreeNode(bt);
void DeleteBTreeNode(BTreeNode* bt) {
	delete bt;
}
void SetData(BTreeNode* bt, BTData data) {
	bt->data = data;
}
void MakeLeftSubTree(BTreeNode* main, BTreeNode* Sub) {
	if (main->left != NULL)
		delete main->left;

	main->left = Sub;
}
void MakeRightSubTree(BTreeNode*main,BTreeNode*sub) {
	if (main->right != NULL)
		delete main->right;

	main->right = sub;
}
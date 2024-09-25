#include <stdio.h>
#include <stdlib.h>
#include "LevelTraversal.h"

void PlaceNode(TreeNode* root, TreeNode* left, TreeNode* right) {
	if (root == NULL) return;
	root->left = left;
	root->right = right;
}

TreeNode n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;

void GenerateLinkTree(TreeNode* root) {

	n1.data = 1;  n1.left = &n2;    n1.right = &n3;
	n2.data = 2;  n2.left = &n4;    n2.right = &n5;
	n3.data = 9;  n3.left = &n6;    n3.right = &n7;
	n4.data = 3;  n4.left = &n8;    n4.right = &n9;
	n5.data = 5;  n5.left = &n10;   n5.right = &n11;
	n6.data = 10; n6.left = &n12;   n6.right = &n13;
	n7.data = 13; n7.left = &n14;   n7.right = &n15;
	n8.data = 4;  n8.left = NULL;  n8.right = NULL;
	n9.data = 6;  n9.left = NULL;  n9.right = NULL;
	n10.data = 7; n10.left = NULL; n10.right = NULL;
	n11.data = 8; n11.left = NULL; n11.right = NULL;
	n12.data = 11; n12.left = NULL; n12.right = NULL;
	n13.data = 12; n13.left = NULL; n13.right = NULL;
	n14.data = 14; n14.left = NULL; n14.right = NULL;
	n15.data = 15; n15.left = NULL; n15.right = NULL;
}

main() {
	TreeNode* root = &n1;
	root->data = 1;

	GenerateLinkTree(root);

	GetSumOfNodes(root);
	GetNemberOfNodes(root);
	GetHeightOfTree(root);
	GetNumberOfLeafNodes(root);

}
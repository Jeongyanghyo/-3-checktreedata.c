#include <stdio.h>
#include <stdlib.h>
#include "LevelTraversal.h"

void PlaceNode(TreeNode* parent, int direction, int data) {
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	newNode->data = data;  
	newNode->left = NULL; 
	newNode->right = NULL; 

	if (direction == 0) {  
		parent->left = newNode;
	}
	else if (direction == 1) { 
		parent->right = newNode;
	}
}

TreeNode n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;

void GenerateLinkTree(TreeNode* root) {
	root->data = 1;

	PlaceNode(root, 0, 2);  
	PlaceNode(root, 1, 9);   

	PlaceNode(root->left, 0, 3);  
	PlaceNode(root->left, 1, 5);  

	PlaceNode(root->right, 0, 10);  
	PlaceNode(root->right, 1, 13);  

	PlaceNode(root->left->left, 0, 4);   
	PlaceNode(root->left->left, 1, 6);   

	PlaceNode(root->left->right, 0, 7);   
	PlaceNode(root->left->right, 1, 8);  

	PlaceNode(root->right->left, 0, 11);  
	PlaceNode(root->right->left, 1, 12);  

	PlaceNode(root->right->right, 0, 14);
	PlaceNode(root->right->right, 1, 15); 
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

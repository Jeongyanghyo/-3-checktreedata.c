#pragma once

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

extern void GetSumOfNodes(TreeNode* root);
extern void GetNemberOfNodes(TreeNode* root);
extern void GetHeightOfTree(TreeNode* root);
extern void GetNumberOfLeafNodes(TreeNode* root);
#include <stdio.h>
#include <stdlib.h>
#include "LevelTraversal.h"
#include "Queue.h"

int node_sum;

void GetHeightOfTree(TreeNode* root) {
	if (root == NULL)
		return 0;

	LinkedQueue q;
	init_queue(&q);  
	TreeNode* ptr = root;
	int height = 0;

	enqueue(&q, ptr);  

	while (!is_empty(&q)) {
		int levelSize = queue_size(&q);
		height++;

		for (int i = 0; i < levelSize; i++) {
			ptr = dequeue(&q);  

	
			if (ptr->left != NULL) {
				enqueue(&q, ptr->left);
			}
			
			if (ptr->right != NULL) {
				enqueue(&q, ptr->right);
			}
		}
	}

	printf("Height of Tree: %d\n",height);
}


void GetNemberOfNodes(TreeNode* root) {
	int count = 0;
	int node_sum = 0;
	LinkedQueue q;
	TreeNode* ptr = root;
	init_queue(&q);	 

	if (root == NULL) return;
	enqueue(&q, ptr);
	while (!is_empty(&q)) {
		ptr = dequeue(&q);
		node_sum += ptr->data;
		count++;

		if (ptr->left)
			enqueue(&q, ptr->left);
		if (ptr->right)
			enqueue(&q, ptr->right);
	}
	printf("Number of nodes: %d\n", count);
}


void GetSumOfNodes(TreeNode* root)
{

	int node_sum = 0;
	LinkedQueue q;
	TreeNode* ptr = root;
	init_queue(&q);	

	if (root == NULL) return;
	enqueue(&q, ptr);
	while (!is_empty(&q)) {
		ptr = dequeue(&q);
		node_sum += ptr->data;
		if (ptr->left)
			enqueue(&q, ptr->left);
		if (ptr->right)
			enqueue(&q, ptr->right);
	}
	printf("Sum of nodes: %d\n", node_sum);

}

void GetNumberOfLeafNodes(TreeNode* root) {
	if (root == NULL)
		return 0;

	LinkedQueue q;
	init_queue(&q);  
	TreeNode* ptr = root;
	int leafCount = 0;

	enqueue(&q, ptr); 

	while (!is_empty(&q)) {
		ptr = dequeue(&q);

		if (ptr->left == NULL && ptr->right == NULL) {
			leafCount++;
		}

		if (ptr->left != NULL) {
			enqueue(&q, ptr->left);
		}

		if (ptr->right != NULL) {
			enqueue(&q, ptr->right);
		}
	}

	printf("Number of leaf nodes: %d\n",leafCount);
}
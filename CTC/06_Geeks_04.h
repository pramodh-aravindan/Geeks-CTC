/* Program to find the maximum depth or height of a tree */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int value)
{
	struct node *treeNode = (struct node *)malloc(sizeof(struct node));

	treeNode->data = value;
	treeNode->left = NULL;
	treeNode->right = NULL;

	return treeNode;
}

int maxDepth(struct node *treeNode)
{
	if(treeNode == NULL)
		return 0;
	else 
	{
		int leftDepth = maxDepth(treeNode->left);
		int rightDepth = maxDepth(treeNode->right);

		if(leftDepth > rightDepth)
			return 1 + leftDepth;
		else 
			return 1 + rightDepth;		
	}
}

void maxDepthMain()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->left->left = newNode(5);

	printf("The maxDepth of the tree is %d\n", maxDepth(root));

	getchar();
}
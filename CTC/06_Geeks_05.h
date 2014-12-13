/* Program to delete a tree */

#include<stdio.h>
#include<stdlib.h>

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

// Node deletion happens in the post order traversal order
void deleteTree(struct node *root)
{
	if(root == NULL) return;
	
	deleteTree(root->right);
	deleteTree(root->left);

	printf("Deleting node with value %d\n", root->data);
	free(root);
}

void deleteTreeMain()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	deleteTree(root);
	root = NULL;

	getchar();
}
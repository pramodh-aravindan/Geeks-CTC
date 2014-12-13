/* Program to calculate the size of a tree (get the number of elements in a tree) */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node * newNode(int value)
{
	struct node *treeNode = (struct node *)malloc(sizeof(struct node));
	treeNode->data = value;
	treeNode->left = NULL;
	treeNode->right = NULL;

	return treeNode;
}

int treeSize(struct node *root)
{
	if(root == NULL)
		return 0;
	else 
		return (treeSize(root->left) + 1 + treeSize(root->right));
}

void treeSizeMain()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	printf("The size of the tree is %d\n", treeSize(root));

	getchar();
}
/* Program to all root to leaf paths of a tree */

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

int path[10];

struct node * newNode(int value)
{
	struct node *treeNode = (struct node *)malloc(sizeof(struct node));

	treeNode->left = NULL;
	treeNode->right = NULL;

	treeNode->data = value;

	return treeNode;
}

void printPath(struct node *root, int path[], int pathlen)
{
	if(root == NULL)
		return;

	path[pathlen] = root->data;
	pathlen++;

	if(root->left == NULL && root->right == NULL)
	{
		int i = 0;

		for(i = 0; i < pathlen; i++)
		{
			printf("%d ", path[i]);
		}
		printf("\n");
	}
	else 
	{
		printPath(root->left, path, pathlen);
		printPath(root->right, path, pathlen);
	}
}

void printPathMain()
{
	struct node *tree = newNode(1);
	tree->left = newNode(2);
	tree->right = newNode(3);
	tree->left->left = newNode(4);
	tree->left->right = newNode(5);

	printf("Printing all Paths from Root to Leaf\n");

	printPath(tree, path, 0);

	getchar();
}
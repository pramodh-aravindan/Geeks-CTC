/* C Program to mirror a binary tree */

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

	treeNode->left = NULL;
	treeNode->right = NULL;

	treeNode->data = value;

	return treeNode;
}

void inOrderTraversal(struct node *root)
{
	if(root != NULL)
	{
		inOrderTraversal(root->left);
		printf("%d ", root->data);
		inOrderTraversal(root->right);
	}
}

void mirrorTree(struct node *root)
{
	if(root == NULL)
		return;
	
	mirrorTree(root->left);
	mirrorTree(root->right);

	struct node *temp = root->left;
	root->left = root->right;
	root->right = temp;
}

void mirrorTreeMain()
{
	struct node *tree = newNode(1);
	tree->left = newNode(2);
	tree->right = newNode(3);
	tree->left->left = newNode(4);
	tree->left->right = newNode(5);

	printf("Tree Before Mirroring \n");

	inOrderTraversal(tree);
	mirrorTree(tree);

	printf("\nTree After Mirroring \n");

	inOrderTraversal(tree);
	
	getchar();

}
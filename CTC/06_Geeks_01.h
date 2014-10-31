/* Program for Tree Traversals */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *left;
	struct node *right;
};

void printInorder(struct node *root)
{
	if(root == NULL)
		return;

	printInorder(root->left);
	printf("%d ", root->value);
	printInorder(root->right);
}

void printPreorder(struct node *root)
{
	if(root == NULL)
		return;

	printf("%d ", root->value);
	printPreorder(root->left);
	printPreorder(root->right);

}

void printPostorder(struct node *root)
{
	if(root == NULL)
		return;

	printPostorder(root->left);
	printPostorder(root->right);
	printf("%d ", root->value);
}

struct node * newNode(int data)
{
	struct node *treeNode = (struct node *)malloc(sizeof(struct node));
	treeNode->value = data;
	treeNode->left = NULL;
	treeNode->right = NULL;

	return treeNode;
}

void treeTraversalMain()
{
	struct node *root = newNode(1);
	struct node *n1 = newNode(2);
	struct node *n2 = newNode(3);
	struct node *n3 = newNode(4);
	struct node *n4 = newNode(5);
	struct node *n5 = newNode(6);
	struct node *n6 = newNode(7);

	root->left = n1;
	root->right = n2;

	n1->left = n3;
	n1->right = n4;

	n2->left = n5;
	n2->right = n6;

	printf("\n Inorder Traversal \n");
	printInorder(root);

	printf("\n Preorder Traversal \n");
	printPreorder(root);

	printf("\n Postorder Traversal \n");
	printPostorder(root);

	getchar();

}
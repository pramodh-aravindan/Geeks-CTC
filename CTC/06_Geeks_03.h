/* Write a program to determine if two trees are identical */

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

bool isTreeIdentical(struct node *tree1, struct node *tree2)
{
	if(tree1 == NULL && tree2 == NULL)
		return true;

	if(tree1 != NULL && tree2 != NULL)
	{
		return (tree1->data == tree2->data && isTreeIdentical(tree1->left, tree2->left) && isTreeIdentical(tree1->right, tree2->right));
	}

	return false;
}

void isTreeIdenticalMain()
{
	struct node *root1 = newNode(1);
	root1->left = newNode(2);
	root1->right = newNode(3);
	root1->left->left = newNode(4);
	root1->left->right = newNode(5);

	struct node *root2 = newNode(1);
	root2->left = newNode(2);
	root2->right = newNode(3);
	root2->left->left = newNode(4);
	root2->left->right = newNode(5);

	if(isTreeIdentical(root1, root2))
		printf("Both trees are identical\n");
	else 
		printf("Both trees are not identical\n");

	getchar();

}
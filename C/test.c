#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
	int data;							//Incomplete :(
	struct node *left;
	struct node *right;
};

// ! kdlkhgjdhk
struct node *root;

void insert()
{
	struct node *ptr, *ctr;
	ptr = (struct node *)malloc(sizeof(struct node *));
	printf("Enter data : ");
	scanf("%d", ptr->data);
	if (root == NULL)
	{
		ptr->left = NULL;
		ptr->right = NULL;
		root = ptr;
		return;
	}
	ctr = root;
	while (ctr != NULL)
	{
		ctr = ctr->right;
	}
	
	if (ptr->data > ctr->data)
	{
		ctr->right = ptr;
	}
	else
	{
		ctr->left = ptr;
	}
	ptr->left = NULL;
	ptr->right = NULL;
	return;
}
void main()
{
	insert();
	insert();
	insert();
}
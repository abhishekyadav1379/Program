#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *GetNewNode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

int max(int x, int y)
{
    if (x >= y)
        return x;
    else
        return y;
}

struct node *Insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

void search(struct node *root, int data) // ! using recursion
{
    if (root == NULL)
    {
        printf("Data not found");
        return;
    }
    if (root->data == data)
    {

        printf("Data found");
        return;
    }
    else if (data <= root->data)
    {
        return search(root->left, data);
    }
    else if (data > root->data)
    {
        return search(root->right, data);
    }
}

void modify(struct node *root, int data, int modi)
{
    struct node *ptr; 
    while (data != root->data)
    {
        if (data > root->data)
        {
            root = root->right;
        }
        else if (data < root->data)
        {
            root = root->left;
        }
    }
    if(root->right->data > modi && root->left->data < modi)
    {
        root->data = modi;
    }
    else
    {
        printf("data can not fit in binary tree");
    }
    
}

int min(struct node *root)
{
    struct node *temp = root;
    while (temp->left != NULL)
    {
        // x = root->data;
        temp = temp->left;
    }
    return temp->data;
}

int Max_tree(struct node *root)
{
    struct node *ptr = root;
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    return ptr->data;
}

int FindHeight(struct node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

void Print_preorder(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d\n", root->data);
    Print_preorder(root->left);
    Print_preorder(root->right);
}

void Print_inorder(struct node *root)
{
    if (root == NULL)
        return;
    Print_inorder(root->left);
    printf("%d\n", root->data);
    Print_inorder(root->right);
}

void Print_postorder(struct node *root)
{
    if (root == NULL)
        return;
    Print_postorder(root->left);
    Print_postorder(root->right);
    printf("%d\n", root->data);
}

void delete (struct node *root, int data)
{
    struct node *ptr;   // ! some bug in code, complete 95 %
    while (data != root->data)
    {
        ptr = root;
        // if (root == NULL)
        // {
        //     printf("no data");
        //     return;
        if (data > root->data)
        {
            root = root->right;
        }
        else if (data < root->data)
        {
            root = root->left;
        }
    }
    if (root->left == NULL && root->right == NULL)
    {
        if (data > ptr->data)
            ptr->right = NULL;
        else
            ptr->left = NULL;
        free(root);
    }
    else if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
    { //delete only for one  node
        if (ptr->data >= root->data)
        {
            if (root->right == NULL)
                ptr->left = root->left;
            else
                ptr->left = root->right;
        }
        else
        {
            if (root->right == NULL)
                ptr->right = root->left;
            else
                ptr->right = root->right;
        }
        // free(root);
    }
    else
    {
        root->data = Max_tree(root->left);
        // printf("%d",root->data);
        return delete(root, root->data);
    }
    
}

void sea(struct node *root, int data) //! Its without recursion
{
    while (root != NULL)
    {
        if (root == NULL)
        {
            return;
        }
        else if (root->data == data)
        {
            printf("data found");
            return;
        }
        else if (data > root->data)
        {
            root = root->right;
        }
        else if (data < root->data)
        {
            root = root->left;
        }
    }
    printf("data not found");
}

void main()
{
    struct node *root;
    root = NULL;
    bool x;
    root = Insert(root, 45);
    root = Insert(root, 32);
    root = Insert(root, 90);
    root = Insert(root, 34);
    root = Insert(root, 68);
    root = Insert(root, 72);
    root = Insert(root, 15);
    root = Insert(root, 24);
    root = Insert(root, 30);
    root = Insert(root, 66);
    root = Insert(root, 11);
    root = Insert(root, 50);
    root = Insert(root, 10);
    // root = Insert(root, 67);
    Print_inorder(root);
    // modify(root, 68, 67);
    // delete (root, 68);
    printf("\n");
    Print_inorder(root);

}
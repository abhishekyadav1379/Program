#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

struct node_queue
{
    int data;
    struct node_queue *next; //! Incomplete :(
};

struct node_queue *rear, *front;

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

int top()
{
    return front->data;
}
void transverse(struct node_queue *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void enqueue(struct node *data)
{
    struct node_queue *ptr, *ctr;
    ptr = (struct node_queue *)malloc(sizeof(struct node_queue));
    ptr->data = data;
    if (front == NULL)
    {
        ptr->next = NULL;
        front = rear = ptr;
        return;
    }
    ctr = rear;
    ptr->next = ctr;
    rear = ptr;
}

void dequeue()
{
    struct node_queue *ptr;
    ptr = rear;
    while (ptr->next != front)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(front);
    front = ptr;
}

void BST_transversal(struct node *root)
{
    if (root == NULL)
    {
        printf("No data");
        return;
    }
    // printf("%d\t",root->data);
    enqueue(root);
    while (front != NULL)
    {
        root = front;
        printf("%d\t", root->data);
        if (front == NULL)
        {
            return;
        }
        if (root->left != NULL)
        {
            enqueue(root->left);
        }
        if (root->right != NULL)
        {
            enqueue(root->right);
        }
        dequeue();
        // rear = rear->next;
    }
}
void main()
{
    struct node *root;
    root = NULL;
    root = Insert(root, 79);
    root = Insert(root, 77);
    root = Insert(root, 70);
    root = Insert(root, 70);
    root = Insert(root, 59);
    root = Insert(root, 80);
    root = Insert(root, 99);
    root = Insert(root, 65);
    root = Insert(root, 21);
    root = Insert(root, 80);
    BST_transversal(root);
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *arr[8];    //! initial stage

void Insert(struct node *arr, int data)
{
    struct node *ptr;
    if (arr == NULL)
    {
        ptr->data = data;
        ptr->next = NULL;
        arr = ptr;
        return;
    }
    ptr->data = data;
    arr->next = ptr;
    ptr->next = NULL;
}

void transverse(struct node *root)
{
    while (root != NULL)
    {
        printf("%d\n", root->data);
        root = root->next;
    }
}

void main()
{
    Insert(arr[1], 50);
    Insert(arr[1], 33);
    Insert(arr[1], 55);
    Insert(arr[1], 23);
    transverse(arr[1]);
}
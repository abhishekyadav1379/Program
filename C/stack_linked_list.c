#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top;

void transverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
void Push()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("Enter no : ");
    scanf("%d", &ptr->data);
    if (top == NULL)
    {
        ptr->next = NULL;
        top = ptr;
        return;
    }
    ptr->next = top;
    top = ptr;
}

void Pop()
{
    struct node *ptr;
    ptr = top;
    top = top->next;
    free(ptr);
}
void main()
{
    Push();
    Push();
    Push();
    Pop();
    transverse(top);
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *first;

void Printlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insert_beg()
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("Overflow \n");
        return;
    }
    printf("Input new node data : ");
    scanf("%d", &ptr->data);
    ptr->next = first;
    first = ptr;
}
void main()
{
    for (int i = 0; i < 5; i++)
    {
        insert_beg();
    }
    Printlist(first);
}
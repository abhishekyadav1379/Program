#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void Printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insert()
{
    struct node *ptr, *cpt;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow");
        return;
    }
    if (head == NULL)
    {
        printf("Enter no. : ");
        scanf("%d", &ptr->data);
        ptr->next = NULL;
        head = ptr;
        return;
    }

    printf("Enter no. : ");
    scanf("%d", &ptr->data);
    cpt = head;
    while (cpt->next != NULL)
    {
        cpt = cpt->next;
    }
    cpt->next = ptr;
    ptr->next = NULL;
}

void main()
{
    // insert_beg();
    insert();
    insert();
    insert();
    insert();
    Printlist(head);
}
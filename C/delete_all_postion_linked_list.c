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

void delete_end()
{
    struct node *ptr, *ctr;
    ctr = head;
    while (ctr->next != NULL)
    {
        ptr = ctr;
        ctr = ctr->next;
    }
    free(ctr);
    ptr->next = NULL;
}

void delete_beg()
{
    struct node *ptr;
    ptr = head;
    head = ptr->next;
    free(ptr);
}

void delete_bw()
{
    struct node *ptr, *ctr;
    int data;
    printf("Enter data to delete : ");
    scanf("%d", &data);
    ctr = head;
    while (ctr->data != data)
    {
        ptr = ctr;
        ctr = ctr->next;
    }
    ptr->next = ctr->next;
    free(ctr);
}

void main()
{
    // insert_beg();
    insert();
    insert();
    insert();
    printf("List :-\n");
    Printlist(head);
    // delete_end();
    // delete_beg();
    delete_bw();
    printf("After delete :-\n");
    Printlist(head);
}
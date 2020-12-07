#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;
int k = 0;

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

void Insert_bw()
{
    struct node *ptr, *ctr;
    int data;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data where you store : ");
    scanf("%d", &data);
    printf("Enter data that to be store : ");
    scanf("%d", &ptr->data);
    ctr = head;
    while (ctr->data != data)
    {
        ctr = ctr->next;
    }
    ptr->next = ctr->next;
    ctr->next = ptr;
}

void main()
{
    insert();
    insert();
    insert();
    insert();
    Insert_bw();
    Printlist(head);
}
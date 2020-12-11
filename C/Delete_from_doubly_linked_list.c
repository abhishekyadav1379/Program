#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *tail;

void Printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//Inert at last of list
void Insert()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to be enter : ");
    scanf("%d", &ptr->data);
    if (head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
        tail = ptr;
        return;
    }
    // cpt = head;
    // while (cpt->next != NULL)
    // {
    //     cpt = cpt->next;
    // }
    // cpt->next = ptr;
    // ptr->prev = cpt;
    // ptr->next = NULL;
    // tail = ptr;
    tail->next = ptr;
    ptr->prev = tail;
    ptr->next = NULL;
    tail = ptr;
}

void Delete_last()
{
    struct node *ptr;
    ptr = tail->prev;
    ptr->next = NULL;
    free(tail);
    tail = ptr;
    free(ptr);
}

void Delete_beg()
{
    struct node *ptr;
    ptr = head->next;
    ptr->prev = NULL;
    head = ptr;
    free(ptr);
}

//Delete particular no.
void Delete_data()
{
    struct node *ptr, *cpt, *rpt;
    int data;
    printf("Enter data to be deleted : ");
    scanf("%d",&data);
    ptr = head;
    while (ptr->data != data)
    {
        ptr = ptr->next;
    }
    cpt = ptr->prev;
    rpt = ptr->next;
    cpt->next = ptr->next;
    rpt->prev = cpt;
    free(ptr);
}

void main()
{
    Insert();
    Insert();
    Insert();
    Insert();
    Printlist(head);
    // Delete_last();
    // Delete_beg();
    Delete_data();
    Printlist(head);
}
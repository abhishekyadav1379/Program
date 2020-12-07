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

// Print list
void Printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Reverse print
void Print_reverse(struct node *ctr)
{
    // while(ctr->next != NULL)
    // {
    //     ctr = ctr->next;
    // }
    while (ctr != NULL)
    {
        printf("%d\t", ctr->data);
        ctr = ctr->prev;
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

// Insert beginning to the list
void Insert_beg()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter no. : ");
    scanf("%d", &ptr->data);
    if (head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        head = ptr;
        tail = ptr;
        return;
    }
    head->prev = ptr;
    ptr->prev = NULL;
    ptr->next = head;
    head = ptr;
}

//Insert between the list
void Insert_bew()
{
    struct node *ptr, *ctr, *temp;
    int data;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data where we enter other : ");
    scanf("%d", &data);
    printf("Enter data : ");
    scanf("%d", &ptr->data);
    ctr = head;
    while (ctr->data != data)
    {
        
        ctr = ctr->next;
    }
    temp = ctr->next;
    ptr->prev = ctr;
    ptr->next = ctr->next;
    ctr->next = ptr;
    // temp = temp->next;
    temp->prev = ptr;
}
void main()
{
    Insert();
    Insert();
    Insert();
    Insert();
    // Insert_beg();
    // Insert_beg();
    // Insert_beg();
    // Insert_beg();
    Printlist(head);
    Insert_bew();
    Printlist(head);
    // Print_reverse(tail);
}
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

// transverse list
void Printlist()
{
    struct node *ptr;
    ptr = head;
    while (ptr->next != head)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
}

// Insert at last
void insert_end()
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
        ptr->next = ptr;
        head = ptr;
        return;
    }
    cpt = head;
    while (cpt->next != head)
    {
        k++;
        cpt = cpt->next;
    }
    printf("Enter no. : ");
    scanf("%d", &ptr->data);
    cpt->next = ptr;
    ptr->next = head;
}

//Insert at beginning
void insert_beg()
{
    struct node *ptr, *ctr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &ptr->data);
    if (head == NULL)
    {
        ptr->next = ptr;
        head = ptr;
        return;
    }
    ctr = head;
    while (ctr->next != head)
    {
        ctr = ctr->next;
    }
    ptr->next = head;
    head = ptr;
    ctr->next = head;
}

// Insert at between
void Insert_bw()
{
    struct node *ptr, *cpt;
    int data;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter where data store :");
    scanf("%d",&data);
    printf("Enter that to be store : ");
    scanf("%d",&ptr->data);
    cpt = head;
    while (cpt->data != data)
    {
        cpt = cpt->next;
    }
    ptr->next = cpt->next;
    cpt->next = ptr;
    
}

void main()
{
    insert_beg();
    insert_beg();
    insert_beg();
    insert_beg();
    Insert_bw();
    Printlist();
}
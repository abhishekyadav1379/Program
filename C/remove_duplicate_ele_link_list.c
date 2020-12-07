#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; //! Incomplete :(
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

void delete_bw(struct node *str)
{
    struct node *ptr, *ctr;
    ctr = head;
    while (ctr != str)
    {
        ptr = ctr;
        ctr = ctr->next;
    }
    ptr->next = ctr->next;
    free(ctr);
}

void remove_dub()
{
    struct node *ptr, *ctr;
    ptr = head->next;
    ctr = head;
    for (int i = 0; i < 4; i++)
    {
        // ptr = ptr->next;
        while (ptr != NULL)
        {
            if (ctr->data == ptr->data)
            {
                delete_bw(ptr);
            }
            ptr = ptr->next;
        }
        ctr = ctr->next;
        ptr = ctr->next;
    }
}
void main()
{
    // insert_beg();
    insert();
    insert();
    insert();
    insert();
    Printlist(head);
    printf("\nAfter :  \n");
    remove_dub();
    // delete_bw(head->next);
    Printlist(head);
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;              // Incomplete :(  
};

struct node *top, *rev_top;
int hei = 0;

void reverse()
{
    struct node *prev = NULL;
    struct node *current = top;
    struct node *next = NULL;
    while (current != NULL)
    {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    top = prev;
    rev_top = prev;
}

void compareLists(struct node *head1, struct node *head2)
{
    struct node *temp1 = top;
    struct node *temp2 = rev_top;

    while (temp1 && temp2)
    {
        if (temp1->data == temp2->data)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            printf("\npalindrome");
            return;
    }

    // /* Both are empty reurn 1*/
    // if (temp1 == NULL && temp2 == NULL)
    //     return 1;

    // /* Will reach here when one is NULL 
    // and other is not */
    // return 0;
}
void transverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void Push()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("Enter no : ");
    scanf("%d", &ptr->data);
    hei++;
    if (top == NULL)
    {
        ptr->next = NULL;
        top = ptr;
        return;
    }
    ptr->next = top;
    top = ptr;
}

void middle()
{
    int mid = hei / 2;
    struct node *ptr;
    ptr = top;
    for (int i = 0; i < mid; i++)
    {
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
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
    Push();
    Push();
    transverse(top);
    reverse();
    transverse(top);
    compareLists(top,rev_top);
    // middle();
}
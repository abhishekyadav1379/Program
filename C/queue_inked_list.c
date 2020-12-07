#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *rear, *front;

void transverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void enqueue()
{
    struct node *ptr, *ctr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&ptr->data);
    if(front == NULL)
    {
        ptr->next = NULL;
        front = rear = ptr;
        return;
    }
    ctr = rear;
    ptr->next = ctr;
    rear = ptr;

}

void dequeue()
{
    struct node *ptr;
    ptr = rear;
    while (ptr->next != front)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(front);
    front = ptr;
}

void main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    transverse(rear);
    dequeue();
    transverse(rear);
}
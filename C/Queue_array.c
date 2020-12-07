#include <stdio.h>
#include<conio.h>

int arr[10];
int top = 0, rear = -1;

void enqueue()
{
    int data;
    printf("Enter no : ");
    scanf("%d", &data);
    arr[++rear] = data;
}

void dequeue()
{
    int ptr;
    for (int i = 0; i < rear; i++)
    {
        arr[i] = arr[i+1];
    }
    rear--;
}

void transverse()
{
    for (int i = 0; i <= rear; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    transverse();
    dequeue();
    transverse();
}

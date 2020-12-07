#include <stdio.h>
#define MAX 20

int arr[MAX];
int top = -1, rear = -1;

void Insert()                              //! Incomplete :(
{
    int data;
    if (rear == MAX + 1)
    {
        printf("overflow \n");
        return;
    }
    printf("Enter no. : ");
    scanf("%d", &data);
    if (top == -1)
    {
        top = 0;
        rear = 0;
        arr[rear] = data;
    }
    else
    {
        rear++;
        arr[rear] = data;
    }
}

void transverse()
{
    for (int i = 0; i <= rear; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void main()
{
    for (int i = 0; i < 4; i++)
    {
        Insert();
    }
    transverse();
}

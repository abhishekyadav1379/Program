#include <stdio.h>

void Print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void main()
{
    int arr[] = {2, 7, 4, 8, 9, 33, 66};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    Print(arr, size);
    printf("\nEnter index no. to be delted : ");
    scanf("%d", &x);
    for (int i = x; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    Print(arr, size - 1);
}

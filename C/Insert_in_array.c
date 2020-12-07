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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, ind;
    int size = sizeof(arr) / sizeof(arr[0]);
    Print(arr, size);
    printf("\nEnter no. to be insert : ");
    scanf("%d", &x);
    printf("\nEnter index where to store : ");
    scanf("%d", &ind);
    for (int i = size; i > ind; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[ind] = x;
    Print(arr, size + 1);
}